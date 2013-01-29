(module sparql
   (export
      prefixs
      dbpedia imdb dbtune lodac bbc bio gouv-uk eea
      (tee input output #!optional (active #t))
      (pipe x . fs)
      (pipe-map x . fs)
      (fold fonct accu list)
      (mlist lists)
      (sparql-query url mime query)
      (from lists proc)
      (construct url mime prefixs c w options)
      (select url mime distinct prefixs s w options)
      (construct-nt url options c . w)
      (select-nt url options s . w)
      (children-select url options root)
      (children-construct url options root)
      (generate-ontology url root)
      (tree->string tree)
      (instance-ontology url type options)
      (predicat-object url uri options)
      (subject-predicat url object options)
      (entity uri)
      (construct-dbpedia options c . w)))

(define prefixs
   '(("rdfs:" "<http://www.w3.org/2000/01/rdf-schema#>")
     ("owl:" "<http://www.w3.org/2002/07/owl#>")))

(define dbpedia "http://dbpedia.org/sparql")
(define imdb "http://data.linkedmdb.org/sparql")
(define dbtune "http://dbtune.org/musicbrainz/sparql")
(define lodac "http://lod.ac/sparql")
(define bbc "http://lod.openlinksw.com/sparql")
(define bio "http://www.semantic-systems-biology.org/biogateway/endpoint")
(define gouv-uk "http://data.gov.uk/sparql")
(define eea "http://semantic.eea.europa.eu/sparql")

; ALL COMBINATIONS
(define (mlist lists)
   (if (pair? lists)
       (reduce append '()
	  (map (lambda (v)
		  (map (lambda (l)
			  (cons v l))
		     (mlist (cdr lists)) ))
	     (car lists) ))
       '(())))

; TEE, UNIX STYLE
(define (tee input output #!optional (active #t))
   (open-input-procedure
      (lambda ()
         (let ((c (read-char input)))
            (if (not (eof-object? c))
                (begin
                   (if active
                       (begin
                          (write-char c output)
                          (flush-output-port output)))
                   (string c))
                (begin (print "eof") #f))))))

; PIPE, FUNCTIONAL STYLE
(define (pipe x . fs)
   (define (pipe-aux x fs)
      (if (pair? fs)
          (pipe-aux ((car fs) x) (cdr fs))
	  x))
   (pipe-aux x fs))

(define (pipe-map x . fs)
   (define (pipe-aux x fs)
      (if (pair? fs)
          (pipe-aux (map (car fs) x) (cdr fs))
	  x))
   (pipe-aux x fs))

; FOLD
(define (fold fonct accu list)
   (if (pair? list)
       (fold
	  fonct
	  (fonct accu (car list))
	  (cdr list))
       accu))


; GRAMMAR FOR TRIPLET
(define sparql-grammar-rules
   (lalr-grammar
      (uri litteral dot empty namedNode)
      (triplets
	 ((triplet dot triplets) (cons triplet triplets))
	 ((triplet dot) (list triplet))
	 ((empty) (list)))
      (triplet
	 ((subject predicat object) (list subject predicat object)))
      (subject
	 ((uri) uri)
	 ((namedNode) namedNode))
      (predicat
	 ((uri) uri))
      (object
	 ((uri) uri)
	 ((namedNode) namedNode)
	 ((litteral) litteral))))

; GRAMMAR FOR URI & LITERAL
(define sparql-grammar-tokens
   (regular-grammar ()
      ((+ (or "\t" " " "\r" "\n" )) (ignore))
      ((: "_:" alpha (* (or alpha digit))) (cons 'namedNode (the-string)))
      ((: "<" (* (out ">")) ">") (cons 'uri (the-string)))
      ((: (* lower) ":" (* lower)) (cons 'uri (the-string)))
      ((: ;(posix "[^\\]\"[^\"]*[]\"")
           "\"" (* (or (: "\\" all) (out "\\" "\""))) "\""
          (? (or (: "@" (* lower))
                 (: "^^" "<" (* (out ">")) ">"))))
       (cons 'litteral (the-string)))
      ((: ".") 'dot)
      ((: "# Empty NT") 'empty)
      ((: "# Empty TURTLE") 'empty)
      ((: "@prefix") (cons 'uri (the-string)))))

; LAUNCH QUERY AND GET THE RESPONSE
(define (sparql-query url mime query)
   (define (parser in status header content-length encoding)
      (if (equal? status 200)
          (let ((format (cdr (assoc :accept header))))
             (cond
                ((equal? format "text/plain")
                 (read/lalrp
                    sparql-grammar-rules
                    sparql-grammar-tokens
                    in))
                (else (error "sparql-query" "format not implemented" format))))
          (error "sparql-query" "status code" status)))
   (multiple-value-bind (protocol login host port abspath)
         (url-parse url)
         (let* ((socket (http
                           :host host
                           :port port
                           :header `((Host: ,host)
                                     (Accept: ,mime)
                                     (Connection: "close"))
                           :path (string-append abspath "?query="
                                    (url-path-encode query))))
                (in (socket-input socket))
                (out (socket-output socket))
                (response (http-parse-response
                             in ;(tee in (current-output-port) #t)
                             out parser)))
            (begin (socket-close socket)
                   response))))

; FROM ... SELECT ...
(define (from lists proc)
   (filter (lambda (x) (not (eq? x #f)))
      (map (lambda (args) (apply proc args))
	 (mlist lists))))

(define (construct-string prefixs c w options)
   (string-append
      (fold (lambda (accu prefix)
	       (string-append accu
                  "PREFIX " (car prefix) " " (cadr prefix) " "))
	 "" prefixs)
      "CONSTRUCT{" (car c) " " (cadr c) " " (caddr c) "}WHERE{"
      (fold (lambda (accu t)
	       (string-append accu (car t) " " (cadr t) " " (caddr t) " . "))
	 "" w)
      "}"
      (fold (lambda (accu option)
	       (string-append accu
                  (symbol->string (car option))
                  " "
                  (integer->string (cadr option)) " "))
	 "" options)
      ))

; BUILD THE QUERY STRING
(define (select-string distinct prefixs s w options)
   (string-append
      (fold (lambda (accu prefix)
	       (string-append "PREFIX " (car prefix) " " (cadr prefix) " "))
	 "" prefixs)
      "SELECT " (if distinct "DISTINCT " "") s " WHERE{"
      (fold (lambda (accu t)
	       (string-append accu (car t) " " (cadr t) " " (caddr t) " . "))
	 "" w)
      "}"
      (fold (lambda (accu option)
	       (string-append accu
                  (symbol->string (car option))
                  " "
                  (integer->string (cadr option)) " "))
	 "" options)
      ))

; LAUNCH A CONSTRUCT QUERY TO AN ENDPOINT
(define (construct url mime prefixs c w options)
   (sparql-query url mime (construct-string prefixs c w options)))

; LAUNCH A SELECT QUERY TO AN ENDPOINT
(define (select url mime distinct prefixs s w options)
   (sparql-query url mime
      (select-string distinct prefixs s w options)))

(define (construct-nt url options c . w)
   (construct url "text/plain" prefixs c w options))

(define (select-nt url options s . w)
   (select url "text/plain" #t prefixs s w options))

(define (construct-dbpedia options c . w)
   (construct "http://dbpedia.org/sparql/" "text/plain"
      (list
         (list "rdfs:" "<http://www.w3.org/2000/01/rdf-schema#>")
         (list "owl:" "<http://www.w3.org/2002/07/owl#>"))
      c w options))

(define (children-select url options root)
   (pipe
      (select-nt url options
	 "?s"
	 (list "?s" "rdfs:subClassOf" root))
      (lambda (l) (filter
		     (lambda (t)
			(equal? (cadr t)
			   "<http://www.w3.org/2005/sparql-results#value>"))
		     l))
      (lambda (l) (map caddr l))))

(define (children-construct url options root)
   (pipe
      (construct-nt url options
	 '("?s" "<bidon>" "<bidon>")
	 (list "?s" "rdfs:subClassOf" root))
      (lambda (l) (map (lambda (t) (car t)) l))))

(define (generate-ontology url root)
   (pipe
      (select-nt url '()
	 "?s"
	 (list "?s" "rdfs:subClassOf" root))
      (lambda (l) (filter
		     (lambda (t)
			(equal? (cadr t)
			   "<http://www.w3.org/2005/sparql-results#value>"))
		     l))
      (lambda (l) (map caddr l))
      (lambda (l) (list root (map
                                (lambda (x) (generate-ontology url x))
                                l)))))

(define (tree->string tree)
   (define (n-space n)
      (fold
         (lambda (accu x) (string-append "   " accu))
         "" (iota n)))
   (define (wood->string-level wood level)
      (fold (lambda (accu child)
               (string-append accu (tree->string-level child level)))
         "" wood))
   (define (tree->string-level tree level)
      (string-append
         (n-space level)
         (car tree) "\n"
         (wood->string-level (cadr tree) (+ 1 level))))
   (tree->string-level tree 0))

(define (instance-ontology url type options)
   (pipe
      (construct-nt url options
	 (list "?uri" "a" type)
	 (list "?uri" "a" type))
      (lambda (l) (map (lambda (t) (car t)) l))))

(define (predicat-object-old uri options)
   (multiple-value-bind (protocol login host port abspath)
      (url-parse uri)
      (pipe
         (construct
            (string-append protocol "://" host "/sparql")
            "text/plain"
            (list)
            (list uri "?p" "?o")
            (list (list uri "?p" "?o"))
            options)
         (lambda (l) (filter (lambda (t) (not (equal? (cadr t) "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>")))
                        l))
         (lambda (l) (map (lambda (t) (list (cadr t) (caddr t))) l)))))

(define (predicat-object url uri options)
   (construct
      url
      "text/plain"
      (list)
      (list uri "?p" "?o")
      (list (list uri "?p" "?o"))
      options))

;(define (object url uri options)
;   (pipe
;      (construct
;         url
;         "text/plain"
;         (list)
;         (list uri "?p" "?o")
;         (list (list uri "?p" "?o"))
;         options)
;      (lambda (l) (map caddr l))))

(define (subject-predicat url object options)
   (pipe
      (construct
         url
         "text/plain"
         (list)
         (list "?s" "?p" object)
         (list (list "?s" "?p" object))
         options)
      (lambda (l) (map (lambda (t) (list (car t) (cadr t))) l))))

(define (entity uri)
   (string-replace (car (reverse (string-split uri "/"))) #\_ #\ ))
