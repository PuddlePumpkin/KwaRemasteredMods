#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ATMProperty.generated.h"

class UATMWrapCurve;
class UATMWrapDebugBlenderRow;

UCLASS(Blueprintable)
class UATMProperty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapCurve* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMWrapDebugBlenderRow* DebugBlenderRow;
    
    UATMProperty();

};

