#pragma once
#include "CoreMinimal.h"
#include "FormID.h"
#include "VFormPtr.generated.h"

class UTESForm;

USTRUCT(BlueprintType)
struct ALTAR_API FVFormPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TargetFormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESForm> TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FormID> TargetTypes;
    
public:
    FVFormPtr();
};

