export TSC := "./node_modules/tree-sitter-cli/tree-sitter"

tsc +PARAMS:
    ./node_modules/tree-sitter-cli/tree-sitter {{PARAMS}}

gen:
    ./node_modules/tree-sitter-cli/tree-sitter generate

parse FILE:
    ./node_modules/tree-sitter-cli/tree-sitter parse {{FILE}}

ptest:
    ./node_modules/tree-sitter-cli/tree-sitter parse example.cta

test:
    ./node_modules/tree-sitter-cli/tree-sitter test
