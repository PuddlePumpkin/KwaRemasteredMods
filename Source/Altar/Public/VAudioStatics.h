#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VAudioStatics.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UObject;

UCLASS(Blueprintable)
class ALTAR_API UVAudioStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAudioStatics();

    UFUNCTION(BlueprintCallable)
    static void UnloadAudioEvent(UAkAudioEvent* EventToUnload, bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    static void SetSwitch(AActor* Actor, FName SwitchGroup, FName SwitchValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetState(FName StateGroup, FName StateValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCValue(AActor* Actor, FName RTPCName, float RTPCValue, int32 InterpolationTimeInMs);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalRTPCValue(FName RTPCName, float RTPCValue, int32 InterpolationTimeInMs);
    
    UFUNCTION(BlueprintCallable)
    static bool PrepareAudioEvent(UAkAudioEvent* EventToPrepare, bool bWhitelist);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PostAudioEventWithComponent(UAkAudioEvent* EventToPost, UAkComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PostAudioEventOnActor(UAkAudioEvent* EventToPost, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BPF_PostAudioEventAtLocation(UAkAudioEvent* EventToPost, FVector Location, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PostAudioEvent(UAkAudioEvent* EventToPost);
    
};

