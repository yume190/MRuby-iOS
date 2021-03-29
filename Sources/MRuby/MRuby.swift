import CMRuby
import Foundation

public func compile(code: String, removeLocalVariable: Bool = true) throws -> Data {
    let result = cmruby_compile(code.cString(using: .utf8), removeLocalVariable)
    guard result.result == 0 else {
        throw MRubyError.return(code: Int(result.result))
    }
    let pointer = UnsafeBufferPointer<UInt8>(start: result.data, count: result.size)
    let data = Data(buffer: pointer)
    defer {
        result.free(result.mrb, result.data)
    }
    return data
}

public enum MRubyError: Error {
    case `return`(code: Int)
}
