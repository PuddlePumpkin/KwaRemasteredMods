#pragma once
#include "CoreMinimal.h"
#include "ModernSettingSingleCommand.h"
#include "ModernSettingComboBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingComboBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingSingleCommand> Entries;
    
    ALTAR_API FModernSettingComboBoxProperties();
};

