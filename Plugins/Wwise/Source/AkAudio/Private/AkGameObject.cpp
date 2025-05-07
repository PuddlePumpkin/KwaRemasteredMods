#include "AkGameObject.h"

UAkGameObject::UAkGameObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideAttenuationScalingFactor = false;
    this->AttenuationScalingFactor = 1.00f;
    this->AkAudioEvent = NULL;
    this->bAttenuationScalingMigrated = false;
}

void UAkGameObject::Stop() {
}

void UAkGameObject::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const FString& RTPC) const {
}

void UAkGameObject::SetOverrideAttenuationScalingFactor(bool bInOverrideAttenuationScalingFactor) {
}

void UAkGameObject::SetAttenuationScalingFactor(float InAttenuationScalingFactor) {
}

void UAkGameObject::PostAssociatedAkEventAsync(const UObject* WorldContextObject, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo, int32& PlayingID) {
}

int32 UAkGameObject::PostAssociatedAkEvent(int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback) {
    return 0;
}

void UAkGameObject::PostAkEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo) {
}

int32 UAkGameObject::PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback) {
    return 0;
}

void UAkGameObject::GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, const FString& RTPC, int32 PlayingID) const {
}


