// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from validators.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEVALIDATOR_HPP
#define DJINNI_GENERATED_COSMOSLIKEVALIDATOR_HPP

#include "../utils/optional.hpp"
#include "CosmosLikeValidatorCommission.hpp"
#include "CosmosLikeValidatorDescription.hpp"
#include "CosmosLikeValidatorDistributionInformation.hpp"
#include "CosmosLikeValidatorSigningInformation.hpp"
#include <chrono>
#include <cstdint>
#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

/** All of Validator related information */
struct CosmosLikeValidator final {
    /** Description of the validator as given at Creation/Edition */
    CosmosLikeValidatorDescription validatorDetails;
    /** Current commission rates and last commission update */
    CosmosLikeValidatorCommission commission;
    /** Distribution information */
    CosmosLikeValidatorDistributionInformation distInfo;
    /** Signing Activity information */
    CosmosLikeValidatorSigningInformation signInfo;
    /** Last time an unbonding has been called. 0 if no unbonding called */
    int32_t unbondingHeight;
    /** Timestamp for the end of the last unbonding that happened */
    std::experimental::optional<std::chrono::system_clock::time_point> unbondingTime;
    /** Minimum self delegation (in uatom for CosmosHub) */
    std::string minSelfDelegation;
    /** Jailed status */
    bool jailed;
    /** Voting Power */
    std::string votingPower;
    /** Operator address (cosmosvaloper) */
    std::string operatorAddress;
    /** Consensus public key (cosmosvalconspub) */
    std::string consensusPubkey;
    /** Status (Unbonded - Unbonding - Bonded) Goes from 0 to 2 or 1 to 3 depending on API (see https://github.com/cosmos/cosmos-sdk/commit/53bf2271d5bac054a8f74723732f21055c1b72d4#diff-f54554903608b8b89649f532c8f1a78cL43) */
    int32_t activeStatus;

    CosmosLikeValidator(CosmosLikeValidatorDescription validatorDetails_,
                        CosmosLikeValidatorCommission commission_,
                        CosmosLikeValidatorDistributionInformation distInfo_,
                        CosmosLikeValidatorSigningInformation signInfo_,
                        int32_t unbondingHeight_,
                        std::experimental::optional<std::chrono::system_clock::time_point> unbondingTime_,
                        std::string minSelfDelegation_,
                        bool jailed_,
                        std::string votingPower_,
                        std::string operatorAddress_,
                        std::string consensusPubkey_,
                        int32_t activeStatus_)
    : validatorDetails(std::move(validatorDetails_))
    , commission(std::move(commission_))
    , distInfo(std::move(distInfo_))
    , signInfo(std::move(signInfo_))
    , unbondingHeight(std::move(unbondingHeight_))
    , unbondingTime(std::move(unbondingTime_))
    , minSelfDelegation(std::move(minSelfDelegation_))
    , jailed(std::move(jailed_))
    , votingPower(std::move(votingPower_))
    , operatorAddress(std::move(operatorAddress_))
    , consensusPubkey(std::move(consensusPubkey_))
    , activeStatus(std::move(activeStatus_))
    {}

    CosmosLikeValidator(const CosmosLikeValidator& cpy) {
       this->validatorDetails = cpy.validatorDetails;
       this->commission = cpy.commission;
       this->distInfo = cpy.distInfo;
       this->signInfo = cpy.signInfo;
       this->unbondingHeight = cpy.unbondingHeight;
       this->unbondingTime = cpy.unbondingTime;
       this->minSelfDelegation = cpy.minSelfDelegation;
       this->jailed = cpy.jailed;
       this->votingPower = cpy.votingPower;
       this->operatorAddress = cpy.operatorAddress;
       this->consensusPubkey = cpy.consensusPubkey;
       this->activeStatus = cpy.activeStatus;
    }

    CosmosLikeValidator() = default;


    CosmosLikeValidator& operator=(const CosmosLikeValidator& cpy) {
       this->validatorDetails = cpy.validatorDetails;
       this->commission = cpy.commission;
       this->distInfo = cpy.distInfo;
       this->signInfo = cpy.signInfo;
       this->unbondingHeight = cpy.unbondingHeight;
       this->unbondingTime = cpy.unbondingTime;
       this->minSelfDelegation = cpy.minSelfDelegation;
       this->jailed = cpy.jailed;
       this->votingPower = cpy.votingPower;
       this->operatorAddress = cpy.operatorAddress;
       this->consensusPubkey = cpy.consensusPubkey;
       this->activeStatus = cpy.activeStatus;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(validatorDetails, commission, distInfo, signInfo, unbondingHeight, unbondingTime, minSelfDelegation, jailed, votingPower, operatorAddress, consensusPubkey, activeStatus);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(validatorDetails, commission, distInfo, signInfo, unbondingHeight, unbondingTime, minSelfDelegation, jailed, votingPower, operatorAddress, consensusPubkey, activeStatus);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEVALIDATOR_HPP
