#pragma once
#include "CoreMinimal.h"
#include "bhkConvexShapeBase.h"
#include "bhkSphereRepShape.generated.h"

class UHavokMaterial;

UCLASS(Blueprintable)
class ALTAR_API UbhkSphereRepShape : public UbhkConvexShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UbhkSphereRepShape();

};

