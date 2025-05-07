#pragma once
#include "CoreMinimal.h"
#include "OBJ_REFR.generated.h"

class UTESBoundObject;

USTRUCT(BlueprintType)
struct ALTAR_API FOBJ_REFR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTESBoundObject* ObjectReference;
    
    FOBJ_REFR();
};

