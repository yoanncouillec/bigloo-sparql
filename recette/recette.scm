(module recette
   (library sparql)
   (main main))

(define (main args)
   (mlist '((1 2) (1 3 5)))
   (pipe
      '(1 2 3)
      (lambda (l) (map (lambda (x) (+ 1 x)) l))
      print)
   (print (fold (lambda (accu x) (+ x accu)) 0 '(1 2 3)))
   (print (sparql-query "http://dbpedia.org/sparql" "text/plain"
      "construct {?a ?b ?c} where {?a ?b ?c} limit 3"))
   (print (from '((1 3 5 11 13)) (lambda (x) (< x 10))))
   (print (construct-string
             '(("dbp-ont:" "<http://dbpedia.org/ontologie/>"))
             '("?a" "?b" "?c")
             '(("?a" "?b" "?c"))
             '((limit 3))))
   (print (select-string #t
             prefixs
             "*"
             '(("?a" "?b" "?c"))
             '((limit 3))))
   (print (construct dbpedia "text/plain" prefixs
             '("?a" "?b" "?c")
             '(("?a" "?b" "?c"))
             '((limit 3))))
   (print (select dbpedia "text/plain" #t prefixs
             "*"
             '(("?a" "?b" "?c"))
             '((limit 1))))
   (print (construct-nt dbpedia '((limit 2))
             '("?a" "?b" "?c")
             '("?a" "?b" "?c")))
   (print (select-nt dbpedia '((limit 2))
             "*"
             '("?a" "?b" "?c")))
   (print (construct-dbpedia '((limit 2))
             '("?a" "?b" "?c")
             '("?a" "?b" "?c")))
   (print (children-select dbpedia '((limit 2))
             "owl:Thing"))
   (print (tree->string
             (generate-ontology dbpedia
                "<http://dbpedia.org/ontology/Work>")))
   (print (instance-ontology dbpedia
             "<http://dbpedia.org/ontology/ProgrammingLanguage>"
             '((limit 10))))
   (print (predicat-object dbpedia
             "<http://dbpedia.org/resource/Standard_ML>"
             '((limit 10))))
   (print (subject-predicat dbpedia
             "<http://dbpedia.org/resource/Standard_ML>"
             '((limit 10))))
   (print (entity "http://dbpedia.org/resource/Standard_ML"))
   ;(print (sparql-construct (a b c) ((a b c))))
   ;(sparql-request dbpedia (sparql-construct (a b c) ((a b c))))
   
   )


#;(define (main argv)
   (let loop ((choice "<http://www.w3.org/2002/07/owl#Thing>"))
      (print "\nExplore " choice)
      (read-line)
      (print " -- Sub-class of " choice " -- (all)")
      (read-line)
      (pipe
         (children-construct dbpedia '() choice)
         (lambda (l)
            (if (pair? l)
                (map
                   (lambda (r)
                      (print "+ "
                         (entity (substring r 1 (- (string-length r) 1)))
                         " (" r ")"))
                   l)
                (print "(empty)"))))
      (read-line)
      (print " -- Instances of " choice " -- (100)")
      (read-line)
      (pipe
         (instance-ontology dbpedia choice '((limit 100)))
         (lambda (l)
            (if (pair? l)
                (map
                   (lambda (r)
                      (print "- "
                         (entity (substring r 1 (- (string-length r) 1)))
                         " (" r ")"))
                   l)
                (print "(empty)"))))
      (read-line)
      (print " -- Properties of " choice " -- (all)")
      (read-line)
      (pipe
         (predicat-object dbpedia choice '())
         (lambda (l) (map (lambda (t) (list (cadr t) (caddr t))) l))
         (lambda (l) (map print l)))
      (read-line)
      (display "Choice ? ")
      (loop (read-line))))
