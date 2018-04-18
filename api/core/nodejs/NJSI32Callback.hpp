// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSI32CALLBACK_HPP
#define DJINNI_GENERATED_NJSI32CALLBACK_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/Error.hpp"
#include <cstdint>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/I32Callback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSI32Callback: public Nan::ObjectWrap, public ledger::core::api::I32Callback {
public:

    static void Initialize(Local<Object> target);
    ~NJSI32Callback()
    {
        persistent().Reset();
        pers_resolver.Reset();
    };
    NJSI32Callback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(std::experimental::optional<int32_t> result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSI32CALLBACK_HPP
