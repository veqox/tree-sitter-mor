package tree_sitter_mor_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mor "github.com/veqox/tree-sitter-mor/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mor.Language())
	if language == nil {
		t.Errorf("Error loading Mor grammar")
	}
}
