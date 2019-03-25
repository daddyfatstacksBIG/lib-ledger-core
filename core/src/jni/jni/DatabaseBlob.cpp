// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "DatabaseBlob.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

DatabaseBlob::DatabaseBlob() : ::djinni::JniInterface<::ledger::core::api::DatabaseBlob, DatabaseBlob>() {}

DatabaseBlob::~DatabaseBlob() = default;

DatabaseBlob::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

DatabaseBlob::JavaProxy::~JavaProxy() = default;

std::vector<uint8_t> DatabaseBlob::JavaProxy::read(int64_t c_offset, int64_t c_length) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::DatabaseBlob>::get();
    auto jret = (jbyteArray)jniEnv->CallObjectMethod(Handle::get().get(), data.method_read,
                                                     ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_offset)),
                                                     ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_length)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Binary::toCpp(jniEnv, jret);
}
int64_t DatabaseBlob::JavaProxy::write(int64_t c_offset, const std::vector<uint8_t> & c_data) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::DatabaseBlob>::get();
    auto jret = jniEnv->CallLongMethod(Handle::get().get(), data.method_write,
                                       ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_offset)),
                                       ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c_data)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I64::toCpp(jniEnv, jret);
}
int64_t DatabaseBlob::JavaProxy::append(const std::vector<uint8_t> & c_data) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::DatabaseBlob>::get();
    auto jret = jniEnv->CallLongMethod(Handle::get().get(), data.method_append,
                                       ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c_data)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I64::toCpp(jniEnv, jret);
}
int64_t DatabaseBlob::JavaProxy::trim(int64_t c_newLen) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::DatabaseBlob>::get();
    auto jret = jniEnv->CallLongMethod(Handle::get().get(), data.method_trim,
                                       ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_newLen)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I64::toCpp(jniEnv, jret);
}
int64_t DatabaseBlob::JavaProxy::size() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::DatabaseBlob>::get();
    auto jret = jniEnv->CallLongMethod(Handle::get().get(), data.method_size);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I64::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated