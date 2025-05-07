#pragma once
#include "CoreMinimal.h"
#include "EPackageScheduleDayOfWeek.h"
#include "EPackageScheduleMonth.h"
#include "PackageSchedule.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FPackageSchedule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageScheduleDayOfWeek DayOfWeek;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageScheduleMonth Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HourOfTheDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayOfTheMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    FPackageSchedule();
};

