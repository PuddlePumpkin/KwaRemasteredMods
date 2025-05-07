#pragma once
#include "CoreMinimal.h"
#include "EDialogueEmotion.h"
#include "DialogueEmotion.generated.h"

USTRUCT(BlueprintType)
struct FDialogueEmotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogueEmotion Emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ALTAR_API FDialogueEmotion();
};

