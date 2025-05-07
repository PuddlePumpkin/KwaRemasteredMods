#pragma once
#include "CoreMinimal.h"
#include "VActor.h"
#include "VWater.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVWater : public AVActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AVWater(const FObjectInitializer& ObjectInitializer);

};

