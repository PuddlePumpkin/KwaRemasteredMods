#pragma once
#include "CoreMinimal.h"
#include "NiBound.h"
#include "bhkSphereRepShape.h"
#include "bhkMultiSphereShape.generated.h"

class UbhkWorldObjCInfoProperty;

UCLASS(Blueprintable)
class ALTAR_API UbhkMultiSphereShape : public UbhkSphereRepShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjCInfoProperty* ShapeProperty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiBound> Spheres;
    
    UbhkMultiSphereShape();

};

