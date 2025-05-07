#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ATMObject.h"
#include "ATMWrapperStore.h"
#include "ATMTimeOfDayActor.generated.h"

class UATMBlendingPolicy;
class UATMPreset;
class UObject;
class UWrapTrackInstancePropertyBindings;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API AATMTimeOfDayActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UATMBlendingPolicy*> BlendingPoliciesWithGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UATMBlendingPolicy*> BlendingPoliciesSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FATMObject> ATMObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> IndexMapWithGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, int32> IndexMapSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UATMPreset*> PresetToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FATMWrapperStore WrapperStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UWrapTrackInstancePropertyBindings*> TrackPropertyBindings;
    
public:
    AATMTimeOfDayActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifyReconstruction();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInitialized();
    
};

