#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SkipPathSegmentAreaConfiguration.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FSkipPathSegmentAreaConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> NavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> IncludedNavAreaClasses;
    
    STEERINGBEHAVIORS_API FSkipPathSegmentAreaConfiguration();
};

