import CMRuby
import Foundation

public func compile(code: String, removeLocalVariable: Bool = true) -> Data {
    let result = cmruby_compile(code.cString(using: .utf8), removeLocalVariable)
    let pointer = UnsafeBufferPointer<UInt8>(start: result.data, count: result.size)
    let data = Data(buffer: pointer)
    defer {
        result.free(result.mrb, result.data)
    }
    return data
}
