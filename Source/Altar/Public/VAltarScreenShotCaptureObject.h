#pragma once
#include "CoreMinimal.h"
#include "VAltarScreenShotCaptureObject.generated.h"

class UVAltarSaveSystem;

USTRUCT(BlueprintType)
struct FVAltarScreenShotCaptureObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVAltarSaveSystem> SaveSystem;
    
    ALTAR_API FVAltarScreenShotCaptureObject();
};

