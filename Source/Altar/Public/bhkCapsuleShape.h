#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "bhkConvexShape.h"
#include "bhkCapsuleShape.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkCapsuleShape : public UbhkConvexShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Unused1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius2;
    
    UbhkCapsuleShape();

};

