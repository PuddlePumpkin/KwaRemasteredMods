#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StainedGlassElement.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FStainedGlassElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> Glass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GlassOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GlassExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    ALTAR_API FStainedGlassElement();
};

