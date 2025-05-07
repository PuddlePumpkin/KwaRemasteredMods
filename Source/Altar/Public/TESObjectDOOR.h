#pragma once
#include "CoreMinimal.h"
#include "TESBoundAnimObject.h"
#include "TESObjectDOOR.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESObjectDOOR : public UTESBoundAnimObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UTESObjectDOOR();

};

