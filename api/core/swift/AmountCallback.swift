// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni
import Foundation

final class AmountCallback: NSObject, LGAmountCallback {
    private var onCallbackBlock: ((LGAmount?, LGError?) -> Void)?

    func setOnCallback(_ block: @escaping (LGAmount?, LGError?) -> Void) -> AmountCallback {
        self.onCallbackBlock = block
        return self
    }

    func onCallback(_ result: LGAmount?, error: LGError?) -> Void {
        self.onCallbackBlock?(result, error)
    }
}