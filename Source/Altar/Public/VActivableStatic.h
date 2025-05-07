#pragma once
#include "CoreMinimal.h"
#include "VActivable.h"
#include "VActivableStatic.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVActivableStatic : public AVActivable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AVActivableStatic(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AttachNativeSceneComponentsToRoot();
    
};

