#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "BSWindModifier.generated.h"

UCLASS(Blueprintable)
class UBSWindModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UBSWindModifier();

};

