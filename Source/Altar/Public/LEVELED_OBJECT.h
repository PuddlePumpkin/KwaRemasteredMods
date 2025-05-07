#pragma once
#include "CoreMinimal.h"
#include "LEVELED_OBJECT.generated.h"

class UTESForm;

USTRUCT(BlueprintType)
struct ALTAR_API FLEVELED_OBJECT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* form;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FLEVELED_OBJECT();
};

