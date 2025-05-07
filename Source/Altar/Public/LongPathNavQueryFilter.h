#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LongPathNavQueryFilter.generated.h"

class ANavigationData;
class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FLongPathNavQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationData* NavigationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationQueryFilterClass;
    
    ALTAR_API FLongPathNavQueryFilter();
};

