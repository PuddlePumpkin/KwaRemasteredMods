#pragma once
#include "CoreMinimal.h"
#include "ConversationIdleData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VConversationIdleAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVConversationIdleAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationIdleData LayerData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
public:
    UVConversationIdleAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDialogue() const;
    
};

