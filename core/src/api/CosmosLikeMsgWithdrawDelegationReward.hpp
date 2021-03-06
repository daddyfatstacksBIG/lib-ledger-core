// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWDELEGATIONREWARD_HPP
#define DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWDELEGATIONREWARD_HPP

#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct CosmosLikeMsgWithdrawDelegationReward final {
    std::string delegatorAddress;
    std::string validatorAddress;

    CosmosLikeMsgWithdrawDelegationReward(std::string delegatorAddress_,
                                          std::string validatorAddress_)
    : delegatorAddress(std::move(delegatorAddress_))
    , validatorAddress(std::move(validatorAddress_))
    {}

    CosmosLikeMsgWithdrawDelegationReward(const CosmosLikeMsgWithdrawDelegationReward& cpy) {
       this->delegatorAddress = cpy.delegatorAddress;
       this->validatorAddress = cpy.validatorAddress;
    }

    CosmosLikeMsgWithdrawDelegationReward() = default;


    CosmosLikeMsgWithdrawDelegationReward& operator=(const CosmosLikeMsgWithdrawDelegationReward& cpy) {
       this->delegatorAddress = cpy.delegatorAddress;
       this->validatorAddress = cpy.validatorAddress;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(delegatorAddress, validatorAddress);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(delegatorAddress, validatorAddress);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWDELEGATIONREWARD_HPP
