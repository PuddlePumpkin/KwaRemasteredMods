#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VControllableEntry.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVControllableEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
    UVControllableEntry();

};

