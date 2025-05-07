#pragma once
#include "CoreMinimal.h"
#include "NiExtraData.h"
#include "NiTextKeyExtraData.generated.h"

class UTextKey;

UCLASS(Blueprintable)
class ALTAR_API UNiTextKeyExtraData : public UNiExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumTextKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextKey*> TextKeys;
    
    UNiTextKeyExtraData();

};

