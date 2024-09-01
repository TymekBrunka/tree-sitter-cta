import XCTest
import SwiftTreeSitter
import TreeSitterCta

final class TreeSitterCtaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cta())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Cta grammar")
    }
}
