#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NifString.h"
#include "NiExtraData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiExtraData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Name;
    
    UNiExtraData();

};

