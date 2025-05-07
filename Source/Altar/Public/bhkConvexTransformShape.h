#pragma once
#include "CoreMinimal.h"
#include "bhkConvexShapeBase.h"
#include "bhkConvexTransformShape.generated.h"

class UHavokMaterial;
class UMatrix44;

UCLASS(Blueprintable)
class ALTAR_API UbhkConvexTransformShape : public UbhkConvexShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Unused_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatrix44* Transform;
    
    UbhkConvexTransformShape();

};

