// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_ALGORANDTRANSACTIONCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_ALGORANDTRANSACTIONCALLBACK_HPP_JNI_

#include "../../api/AlgorandTransactionCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class AlgorandTransactionCallback final : ::djinni::JniInterface<::ledger::core::api::AlgorandTransactionCallback, AlgorandTransactionCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::AlgorandTransactionCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::AlgorandTransactionCallback>;
    using JniType = jobject;

    using Boxed = AlgorandTransactionCallback;

    ~AlgorandTransactionCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<AlgorandTransactionCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<AlgorandTransactionCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    AlgorandTransactionCallback();
    friend ::djinni::JniClass<AlgorandTransactionCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::AlgorandTransactionCallback, AlgorandTransactionCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::AlgorandTransactionCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::shared_ptr<::ledger::core::api::AlgorandTransaction> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::AlgorandTransactionCallback, ::djinni_generated::AlgorandTransactionCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/AlgorandTransactionCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Lco/ledger/core/AlgorandTransaction;Lco/ledger/core/Error;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ALGORANDTRANSACTIONCALLBACK_HPP_JNI_