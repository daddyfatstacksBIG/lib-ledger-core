// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGBlock+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto Block::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.localhash),
            ::djinni::String::toCpp(obj.uid),
            ::djinni::Date::toCpp(obj.time),
            ::djinni::String::toCpp(obj.currencyName),
            ::djinni::I64::toCpp(obj.height)};
}

auto Block::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[LGBlock alloc] initWithHash:(::djinni::String::fromCpp(cpp.hash))
                                     uid:(::djinni::String::fromCpp(cpp.uid))
                                    time:(::djinni::Date::fromCpp(cpp.time))
                            currencyName:(::djinni::String::fromCpp(cpp.currencyName))
                                  height:(::djinni::I64::fromCpp(cpp.height))];
}

}  // namespace djinni_generated
