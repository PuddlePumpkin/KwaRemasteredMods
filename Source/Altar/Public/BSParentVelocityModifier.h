#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "BSParentVelocityModifier.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBSParentVelocityModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UBSParentVelocityModifier();

};

