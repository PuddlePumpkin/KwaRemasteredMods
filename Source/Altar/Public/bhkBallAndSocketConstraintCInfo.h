#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "VTSVector4f.h"
#include "bhkBallAndSocketConstraintCInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkBallAndSocketConstraintCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PivotA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PivotB;
    
    UbhkBallAndSocketConstraintCInfo();

};

