#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationIdleData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FConversationIdleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TimeBetweenAnimations;
    
    ALTAR_API FConversationIdleData();
};

