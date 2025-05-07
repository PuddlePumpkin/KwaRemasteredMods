#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NifString.h"
#include "NiObjectNet.generated.h"

class UNiExtraData;
class UNiTimeController;

UCLASS(Blueprintable)
class ALTAR_API UNiObjectNet : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumExtraDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiExtraData*> ExtraDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTimeController* Controller;
    
    UNiObjectNet();

};

