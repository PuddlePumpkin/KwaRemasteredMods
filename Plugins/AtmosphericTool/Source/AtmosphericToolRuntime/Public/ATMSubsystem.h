#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EATMTimeUpdateSource.h"
#include "ATMSubsystem.generated.h"

class AATMTimeOfDayActor;
class UATMBiomeInstance;
class UATMBiomePreset;
class UATMEventInstance;
class UATMEventPreset;
class UATMPreset;
class UATMPresetInstance;
class UATMSubsystem;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMSubsystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMPresetInstance* LastActiveGlobalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UATMBiomePreset*, UATMBiomeInstance*> ActiveBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UATMEventPreset*, UATMEventInstance*> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AATMTimeOfDayActor* ATMActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UATMPreset*> ExistingPresets;
    
public:
    UATMSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetTime(float NewTime, EATMTimeUpdateSource NewUpdateSource);
    
    UFUNCTION(BlueprintCallable)
    void SetReferencePosition(FVector position);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaTime(float NewDeltaTime, float NewTimeOfDay, EATMTimeUpdateSource NewUpdateSource);
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    FVector GetReferencePosition();
    
    UFUNCTION(BlueprintCallable)
    float GetDeltaTime();
    
    UFUNCTION(BlueprintCallable)
    AATMTimeOfDayActor* GetATMActor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UATMSubsystem* Get(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UATMPresetInstance* AddActivePreset(const FString& PresetName);
    
};

