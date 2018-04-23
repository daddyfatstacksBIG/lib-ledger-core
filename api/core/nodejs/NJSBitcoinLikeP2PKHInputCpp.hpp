// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEP2PKHINPUT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEP2PKHINPUT_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeP2PKHInput.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeP2PKHInput: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeP2PKHInput() {};
    NJSBitcoinLikeP2PKHInput(const std::shared_ptr<ledger::core::api::BitcoinLikeP2PKHInput> &iBitcoinLikeP2PKHInput):_BitcoinLikeP2PKHInput(iBitcoinLikeP2PKHInput){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeP2PKHInput> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeP2PKHInput_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeP2PKHInput> getCppImpl(){return _BitcoinLikeP2PKHInput;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeP2PKHInput> _BitcoinLikeP2PKHInput;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEP2PKHINPUT_HPP