#pragma once
#include "CoreMinimal.h"
#include "SpecificClassUtils.h"
#include "AltarSpecificQMPUtils.generated.h"

UCLASS(Blueprintable)
class ALTARQMP_API UAltarSpecificQMPUtils : public USpecificClassUtils {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KilledID;
    
public:
    UAltarSpecificQMPUtils();

};

