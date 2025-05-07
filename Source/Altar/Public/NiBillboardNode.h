#pragma once
#include "CoreMinimal.h"
#include "EBillboardMode.h"
#include "NiNode.h"
#include "NiBillboardNode.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBillboardNode : public UNiNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBillboardMode BillboardMode;
    
    UNiBillboardNode();

};

