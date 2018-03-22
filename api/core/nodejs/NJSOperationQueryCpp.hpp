// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSOPERATIONQUERY_HPP
#define DJINNI_GENERATED_NJSOPERATIONQUERY_HPP


#include "../../../core/src/api/OperationOrderKey.hpp"
#include "NJSOperationListCallback.hpp"
#include "NJSQueryFilterCpp.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/OperationQuery.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSOperationQuery: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSOperationQuery() {};
    NJSOperationQuery(const std::shared_ptr<ledger::core::api::OperationQuery> &iOperationQuery):_OperationQuery(iOperationQuery){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::OperationQuery> &object);
    static Nan::Persistent<ObjectTemplate> OperationQuery_prototype;
    std::shared_ptr<ledger::core::api::OperationQuery> getCppImpl(){return _OperationQuery;};

private:
    static NAN_METHOD(addOrder);

    static NAN_METHOD(filter);

    static NAN_METHOD(offset);

    static NAN_METHOD(limit);

    static NAN_METHOD(complete);

    static NAN_METHOD(partial);

    static NAN_METHOD(execute);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::OperationQuery> _OperationQuery;
};
#endif //DJINNI_GENERATED_NJSOPERATIONQUERY_HPP