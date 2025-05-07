#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Debug/DebugDrawComponent.h"
#include "VSubSpaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVSubSpaceComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dimensions;
    
    UVSubSpaceComponent(const FObjectInitializer& ObjectInitializer);

};

