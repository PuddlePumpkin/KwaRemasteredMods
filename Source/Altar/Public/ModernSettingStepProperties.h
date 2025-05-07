#pragma once
#include "CoreMinimal.h"
#include "ModernSettingSingleCommand.h"
#include "ModernSettingStepProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingStepProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingSingleCommand> Steps;
    
    ALTAR_API FModernSettingStepProperties();
};

