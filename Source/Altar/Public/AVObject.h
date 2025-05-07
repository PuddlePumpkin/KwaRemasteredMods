#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "AVObject.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UAVObject : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* AVObject;
    
    UAVObject();

};

