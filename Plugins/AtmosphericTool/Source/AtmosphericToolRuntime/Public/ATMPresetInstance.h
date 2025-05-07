#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ATMPresetInstance.generated.h"

class UATMPreset;
class UATMPresetInstanceUserData;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMPresetInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMPreset* PresetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMPresetInstanceUserData* UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameTime CachedTime;
    
    UATMPresetInstance();

};

