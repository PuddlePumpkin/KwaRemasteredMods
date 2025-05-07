#include "AkGameplayStatics.h"

UAkGameplayStatics::UAkGameplayStatics() {
}

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UnloadInitBank() {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy) {
    return NULL;
}

void UAkGameplayStatics::SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState) {
}

void UAkGameplayStatics::SetState(UAkStateValue* StateValue, FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareSet) {
}

void UAkGameplayStatics::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths) {
}

void UAkGameplayStatics::SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue) {
}

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue) {
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
}

bool UAkGameplayStatics::SetOutputDeviceEffect(const FAkOutputDeviceID InDeviceID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

void UAkGameplayStatics::SetNumberOfPrimaryRays(int32 InNbPrimaryRays) {
}

void UAkGameplayStatics::SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMaxEmitterRoomAuxSends(int32 InMaxEmitterRoomAuxSends) {
}

void UAkGameplayStatics::SetLoadBalancingSpread(int32 InNbFrames) {
}

void UAkGameplayStatics::SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue) {
}

void UAkGameplayStatics::SetDistanceProbe(AActor* Listener, AActor* DistanceProbe) {
}

void UAkGameplayStatics::SetDiffractionOrder(int32 InDiffractionOrder, bool bInUpdatePaths) {
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed) {
}

void UAkGameplayStatics::SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

bool UAkGameplayStatics::SetBusEffectByName(const FString& InBusName, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

bool UAkGameplayStatics::SetBusEffectByID(const FAkUniqueID InBusID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

void UAkGameplayStatics::SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration) {
}

bool UAkGameplayStatics::SetAuxBusEffect(const UAkAuxBus* InAuxBus, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

bool UAkGameplayStatics::SetActorMixerEffect(const FAkUniqueID InAudioNodeID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet) {
    return false;
}

void UAkGameplayStatics::ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings) {
}

void UAkGameplayStatics::RemoveOutput(FAkOutputDeviceID in_OutputDeviceId) {
}

void UAkGameplayStatics::PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger) {
}

int32 UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed) {
    return 0;
}

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkGameplayStatics::LoadInitBank() {
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    return false;
}

bool UAkGameplayStatics::IsEditor() {
    return false;
}

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareSet) {
}

void UAkGameplayStatics::GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC) {
}

UAkComponent* UAkGameplayStatics::GetOrCreateAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName) {
    return NULL;
}

FString UAkGameplayStatics::GetCurrentAudioCulture() {
    return TEXT("");
}

TArray<FString> UAkGameplayStatics::GetAvailableAudioCultures() {
    return TArray<FString>();
}

UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UObject* UAkGameplayStatics::GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type) {
    return NULL;
}

void UAkGameplayStatics::ClearSoundBanksAndMedia() {
}

void UAkGameplayStatics::CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback) {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

void UAkGameplayStatics::AddOutput(const FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<UAkComponent*>& in_ListenerIDs) {
}


