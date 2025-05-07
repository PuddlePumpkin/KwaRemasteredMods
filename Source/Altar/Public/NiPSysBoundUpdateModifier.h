#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysBoundUpdateModifier.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysBoundUpdateModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateSkip;
    
    UNiPSysBoundUpdateModifier();

};

