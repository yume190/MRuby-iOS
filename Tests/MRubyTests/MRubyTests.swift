import XCTest
@testable import MRuby

final class MRubyTests: XCTestCase {
    func testFormula1() throws {
        let file = "formula_01"
        let bundle = Bundle.module
        let code = try String(contentsOf: bundle.url(forResource: file, withExtension: "rb", subdirectory: "Resource/code")!)
        let full = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/full")!)
        let noLV = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/remove_lv")!)
            
        XCTAssertEqual(full, try! MRuby.compile(code: code, removeLocalVariable: false))
        XCTAssertEqual(noLV, try! MRuby.compile(code: code, removeLocalVariable: true))
    }
    
    func testFormula2() throws {
        let file = "formula_02"
        let bundle = Bundle.module
        let code = try String(contentsOf: bundle.url(forResource: file, withExtension: "rb", subdirectory: "Resource/code")!)
        let full = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/full")!)
        let noLV = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/remove_lv")!)
            
        XCTAssertEqual(full, try! MRuby.compile(code: code, removeLocalVariable: false))
        XCTAssertEqual(noLV, try! MRuby.compile(code: code, removeLocalVariable: true))
    }
    
    func testFormula3() throws {
        let file = "formula_03"
        let bundle = Bundle.module
        let code = try String(contentsOf: bundle.url(forResource: file, withExtension: "rb", subdirectory: "Resource/code")!)
        let full = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/full")!)
        let noLV = try Data(contentsOf: bundle.url(forResource: file, withExtension: "bin", subdirectory: "Resource/remove_lv")!)
            
        XCTAssertEqual(full, try! MRuby.compile(code: code, removeLocalVariable: false))
        XCTAssertEqual(noLV, try! MRuby.compile(code: code, removeLocalVariable: true))
    }
    
    func testCompileError() throws {
        let code = """
        if ( == )
        end
        """
        do {
            _ = try MRuby.compile(code: code)
            assert(false)
        } catch {
            assert(true)
        }
        
    }

    static var allTests = [
        ("testFormula1", testFormula1),
        ("testFormula2", testFormula2),
        ("testFormula3", testFormula3),
    ]
}
