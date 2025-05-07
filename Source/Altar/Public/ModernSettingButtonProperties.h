#pragma once
#include "CoreMinimal.h"
#include "ModernSettingCommand.h"
#include "ModernSettingButtonProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingButtonProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingCommand> Commands;
    
    ALTAR_API FModernSettingButtonProperties();
};

