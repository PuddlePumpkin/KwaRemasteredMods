#pragma once
#include "CoreMinimal.h"
#include "NifString.h"
#include "NifType.h"
#include "ControlledBlock.generated.h"

class UNiBlendInterpolator;
class UNiInterpolator;
class UNiStringPalette;
class UNiTimeController;

UCLASS(Blueprintable)
class ALTAR_API UControlledBlock : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiInterpolator* Interpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTimeController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiBlendInterpolator* BlendInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString NodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString InterpolatorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiStringPalette* StringPalette;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NodeNameOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PropertyTypeOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ControllerTypeOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ControllerIDOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InterpolatorIDOffset;
    
    UControlledBlock();

};

