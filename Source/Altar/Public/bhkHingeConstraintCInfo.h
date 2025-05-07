#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "VTSVector4f.h"
#include "bhkHingeConstraintCInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkHingeConstraintCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PivotA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PerpAxisInA1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PerpAxisInA2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PivotB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f AxisB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f AxisA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PerpAxisInB1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVTSVector4f PerpAxisInB2;
    
    UbhkHingeConstraintCInfo();

};

