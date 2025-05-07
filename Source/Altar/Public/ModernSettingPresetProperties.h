#pragma once
#include "CoreMinimal.h"
#include "ModernSettingMultiCommand.h"
#include "ModernSettingPresetProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingPresetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingMultiCommand> Presets;
    
    ALTAR_API FModernSettingPresetProperties();
};

