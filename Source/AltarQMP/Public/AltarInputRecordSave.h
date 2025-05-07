#pragma once
#include "CoreMinimal.h"
#include "InputRecordSave.h"
#include "AltarInputRecordSave.generated.h"

UCLASS(Blueprintable)
class ALTARQMP_API UAltarInputRecordSave : public UInputRecordSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVerticalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHorizontalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimCameraSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimFocusCameraSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartInRunning;
    
    UAltarInputRecordSave();

};

