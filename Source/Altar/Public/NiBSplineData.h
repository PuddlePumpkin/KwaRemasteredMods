#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiBSplineData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBSplineData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumFloatControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatControlPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumCompactControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompactControlPoints;
    
    UNiBSplineData();

};

