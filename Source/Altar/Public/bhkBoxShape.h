#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "bhkConvexShape.h"
#include "bhkBoxShape.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkBoxShape : public UbhkConvexShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Unused_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Unused_Float;
    
    UbhkBoxShape();

};

