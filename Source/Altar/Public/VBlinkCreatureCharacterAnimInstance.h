#pragma once
#include "CoreMinimal.h"
#include "ActorBlinkData.h"
#include "VBlinkCharacterAnimInstance.h"
#include "VBlinkCreatureCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlinkCreatureCharacterAnimInstance : public UVBlinkCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBlinkData LayerData;
    
public:
    UVBlinkCreatureCharacterAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlinkWeight() const;
    
};

