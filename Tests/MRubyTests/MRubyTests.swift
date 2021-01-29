import XCTest
@testable import MRuby

final class MRubyTests: XCTestCase {
    let code = """
    a = get_sensor("01ed0001");
    b = get_sensor("01ed0002");
    if a > 128
        set_status(1, 2, 0x1);
    elsif b < 128
        set_status(1,2,0x2);
    else
        set_status(1,2,0);
    end

    """
    func testExample() {
        let bundle = Bundle.module
        let url = bundle.url(forResource: "test", withExtension: "bin",subdirectory: "Resource")
        
        do {
            let origin = try Data(contentsOf: url!)
            print(origin)
            let compiled = MRuby.compile(code: code)
            print(compiled)
            XCTAssertEqual(origin, compiled)
        } catch {
            print("load file fail")
        }
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
