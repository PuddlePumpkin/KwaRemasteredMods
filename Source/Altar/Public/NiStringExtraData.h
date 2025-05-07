#pragma once
#include "CoreMinimal.h"
#include "NiExtraData.h"
#include "NifString.h"
#include "NiStringExtraData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiStringExtraData : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString StringData;
    
    UNiStringExtraData();

};

