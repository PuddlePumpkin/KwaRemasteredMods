#pragma once
#include "CoreMinimal.h"
#include "bhkConvexShapeBase.h"
#include "bhkConvexSweepShape.generated.h"

class UHavokMaterial;
class UbhkConvexShape;

UCLASS(Blueprintable)
class ALTAR_API UbhkConvexSweepShape : public UbhkConvexShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkConvexShape* Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UbhkConvexSweepShape();

};

