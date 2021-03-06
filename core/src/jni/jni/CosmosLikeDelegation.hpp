// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEDELEGATION_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEDELEGATION_HPP_JNI_

#include "../../api/CosmosLikeDelegation.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeDelegation final : ::djinni::JniInterface<::ledger::core::api::CosmosLikeDelegation, CosmosLikeDelegation> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::CosmosLikeDelegation>;
    using CppOptType = std::shared_ptr<::ledger::core::api::CosmosLikeDelegation>;
    using JniType = jobject;

    using Boxed = CosmosLikeDelegation;

    ~CosmosLikeDelegation();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<CosmosLikeDelegation>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<CosmosLikeDelegation>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    CosmosLikeDelegation();
    friend ::djinni::JniClass<CosmosLikeDelegation>;
    friend ::djinni::JniInterface<::ledger::core::api::CosmosLikeDelegation, CosmosLikeDelegation>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEDELEGATION_HPP_JNI_
