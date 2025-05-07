#pragma once
#include "CoreMinimal.h"
#include "bhkShape.h"
#include "bhkTransformShape.generated.h"

class UHavokMaterial;
class UMatrix44;

UCLASS(Blueprintable)
class ALTAR_API UbhkTransformShape : public UbhkShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkShape* Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatrix44* Transform;
    
    UbhkTransformShape();

};

