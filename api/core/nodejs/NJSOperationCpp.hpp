// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSOPERATION_HPP
#define DJINNI_GENERATED_NJSOPERATION_HPP


#include "../../../core/src/api/../utils/optional.hpp"
#include "../../../core/src/api/OperationType.hpp"
#include "../../../core/src/api/WalletType.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSBitcoinLikeOperationCpp.hpp"
#include "NJSPreferencesCpp.hpp"
#include "NJSTrustIndicatorCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/Operation.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSOperation: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSOperation() {};
    NJSOperation(const std::shared_ptr<ledger::core::api::Operation> &iOperation):_Operation(iOperation){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Operation> &object);
    static Nan::Persistent<ObjectTemplate> Operation_prototype;
    std::shared_ptr<ledger::core::api::Operation> getCppImpl(){return _Operation;};

private:
    /**
     *Get id's operation
     *@return string
     */
    static NAN_METHOD(getUid);

    /**
     *Get account's index in user's wallet
     *@return 32 bits integer
     */
    static NAN_METHOD(getAccountIndex);

    /**
     *Get type of operation
     *@return OperationType object (for more details refer to OperationType)
     */
    static NAN_METHOD(getOperationType);

    /**
     *Return date on which operation was issued
     *@return date object
     */
    static NAN_METHOD(getDate);

    /**
     *Get senders of operation
     *@return List of string, list of all senders
     */
    static NAN_METHOD(getSenders);

    /**
     *Get recipients of operation
     *@return List of string, list of all recipients
     */
    static NAN_METHOD(getRecipients);

    /**
     *Get amount of operation
     *@return Amount object
     */
    static NAN_METHOD(getAmount);

    /**
     *Get fees of operation
     *@return Optional Amount object
     */
    static NAN_METHOD(getFees);

    /**
     *Get preferences of operation
     *@return Prefences object
     */
    static NAN_METHOD(getPreferences);

    /**
     *Get trust indicator of operation
     *@return TrustIndicator object
     */
    static NAN_METHOD(getTrust);

    /**
     *Get block height on which operation was included
     *@return Optional 64 bits integer, height of block in which operation was validated
     */
    static NAN_METHOD(getBlockHeight);

    /**
     *Convert operation as Bitcoin operation
     *@return BitcoinLikeOperation object
     */
    static NAN_METHOD(asBitcoinLikeOperation);

    static NAN_METHOD(isInstanceOfBitcoinLikeOperation);

    /**
     *Same as asBitcoinLikeOperation for ethereum
     *# asEthereumLikeOperation(): Callback<EthereumLikeOperation>;
     *Same as isInstanceOfBitcoinLikeOperation for ethereum
     */
    static NAN_METHOD(isInstanceOfEthereumLikeOperation);

    /**
     *Same as asBitcoinLikeOperation for ripple
     *# asRippleLikeOperation(): Callback<RippleLikeOperation>;
     *Same as isInstanceOfBitcoinLikeOperation for ripple
     */
    static NAN_METHOD(isInstanceOfRippleLikeOperation);

    /**
     *Tells if the operation is complete
     *@return boolean
     */
    static NAN_METHOD(isComplete);

    /**
     *Get type of wallet from which operation was issued
     *@return WalletType object
     */
    static NAN_METHOD(getWalletType);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Operation> _Operation;
};
#endif //DJINNI_GENERATED_NJSOPERATION_HPP
