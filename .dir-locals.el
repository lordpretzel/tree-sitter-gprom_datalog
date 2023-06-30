(
 (nil . (
         (eval .
               (set (make-local-variable 'exec-path) (cons "./node_modules/.bin" exec-path)))
         ;; run and compilation commands for GProM
         (projectile-project-compilation-cmd . "./node_modules/.bin/tree-sitter generate")
         (projectile-project-test-cmd . "./node_modules/.bin/tree-sitter test")
         (projectile-project-run-cmd . "./node_modules/.bin/tree-sitter generate && ./node_modules/.bin/tree-sitter build-wasm && ./node_modules/.bin/tree-sitter playground")
         (projectile-project-install-cmd . "./node_modules/.bin/tree-sitter build-wasm")
         (projectile-project-configure-cmd . "npm install")
         ))
 )
