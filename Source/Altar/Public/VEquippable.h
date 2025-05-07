#pragma once
#include "CoreMinimal.h"
#include "ReactToFreezeInterface.h"
#include "VActor.h"
#include "VEquippable.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVEquippable : public AVActor, public IReactToFreezeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    AVEquippable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    

    // Fix for true pure virtual functions not being implemented
};

