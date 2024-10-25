import XCTest
import SwiftTreeSitter
import TreeSitterMor

final class TreeSitterMorTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mor())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mor grammar")
    }
}
