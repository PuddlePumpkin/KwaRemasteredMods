#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiExtraData.h"
#include "BSBound.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBSBound : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dimensions;
    
    UBSBound();

};

