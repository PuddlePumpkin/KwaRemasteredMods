#pragma once
#include "CoreMinimal.h"
#include "bhkSphereRepShape.h"
#include "bhkConvexShape.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkConvexShape : public UbhkSphereRepShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UbhkConvexShape();

};

