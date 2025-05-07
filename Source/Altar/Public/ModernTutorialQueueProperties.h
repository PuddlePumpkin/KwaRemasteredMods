#pragma once
#include "CoreMinimal.h"
#include "ModernTutorialQueueProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernTutorialQueueProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ControllerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MouseKeyboardText;
    
    ALTAR_API FModernTutorialQueueProperties();
};

