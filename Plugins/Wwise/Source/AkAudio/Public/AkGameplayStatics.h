#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "AkOutputDeviceID.h"
#include "AkUniqueID.h"
#include "AkChannelConfiguration.h"
#include "AkChannelMask.h"
#include "AkMultiPositionType.h"
#include "AkOutputSettings.h"
#include "ERTPCValueType.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "OnSetCurrentAudioCultureCallbackDelegate.h"
#include "PanningRule.h"
#include "AkGameplayStatics.generated.h"

class AActor;
class UAkAudioEvent;
class UAkAudioType;
class UAkAuxBus;
class UAkComponent;
class UAkEffectShareSet;
class UAkPortalComponent;
class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;
class UAkTrigger;
class UObject;
class USceneComponent;

UCLASS(BlueprintType)
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStatics();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetState(UAkStateValue* StateValue, FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareSet);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPanningRule(PanningRule PanRule);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOutputDeviceEffect(const FAkOutputDeviceID InDeviceID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumberOfPrimaryRays(int32 InNbPrimaryRays);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxEmitterRoomAuxSends(int32 InMaxEmitterRoomAuxSends);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadBalancingSpread(int32 InNbFrames);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetDistanceProbe(AActor* Listener, AActor* DistanceProbe);
    
    UFUNCTION(BlueprintCallable)
    static void SetDiffractionOrder(int32 InDiffractionOrder, bool bInUpdatePaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBusEffectByName(const FString& InBusName, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBusEffectByID(const FAkUniqueID InBusID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAuxBusEffect(const UAkAuxBus* InAuxBus, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActorMixerEffect(const FAkUniqueID InAudioNodeID, const int32 InEffectIndex, const UAkEffectShareSet* InEffectShareSet);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static int32 PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareSet);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetOrCreateAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentAudioCulture();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableAudioCultures();
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearSoundBanksAndMedia();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
    UFUNCTION(BlueprintCallable)
    static void AddOutput(const FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, UPARAM(Ref) TArray<UAkComponent*>& in_ListenerIDs);
    
};

