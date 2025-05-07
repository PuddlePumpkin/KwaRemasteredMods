#pragma once
#include "CoreMinimal.h"
#include "OblivionDateTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FOblivionDateTimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameDayPassed;
    
    ALTAR_API FOblivionDateTimeInfo();
};

