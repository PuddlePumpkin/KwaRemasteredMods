#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ModernSettingCustomProperties.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FModernSettingCustomProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CVAR;
    
    ALTAR_API FModernSettingCustomProperties();
};

