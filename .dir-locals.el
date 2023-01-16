(
 (nil . (
         (eval .
               (set (make-local-variable 'exec-path) (cons "./node_modules/.bin" exec-path)))
         ;; run and compilation commands for GProM
         (projectile-project-compilation-cmd . "tree-sitter generate")
         (projectile-project-test-cmd . "tree-sitter test")
         (projectile-project-run-cmd . "tree-sitter playground")
         (projectile-project-install-cmd . "tree-sitter build-wasm")
         ))
 )
