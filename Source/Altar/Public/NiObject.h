#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "NiObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiObject : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GroupID;
    
    UNiObject();

};

