#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDecayType.h"
#include "ESymmetryType.h"
#include "NiPSysModifier.h"
#include "NiPSysBombModifier.generated.h"

class UNiNode;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysBombModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiNode* BombObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BombAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Decay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaV;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecayType DecayType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESymmetryType SymmetryType;
    
    UNiPSysBombModifier();

};

