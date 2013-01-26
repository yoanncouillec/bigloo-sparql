(module recette
   (library sparql)
   (main main))

(define (main args)
   (let ((res (sparql-query "http://dbpedia.org/sparql" "text/plain"
                 "construct{?s ?p ?o}where{?s ?p ?o}limit 10")))
      (print res)))

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
