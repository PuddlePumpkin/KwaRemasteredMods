#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EForceType.h"
#include "NiPSysModifier.h"
#include "NiPSysGravityModifier.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysGravityModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* GravityObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceType ForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Turbulence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurbulenceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldAligned;
    
    UNiPSysGravityModifier();

};

