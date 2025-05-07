#pragma once
#include "CoreMinimal.h"
#include "ModernSettingCommand.h"
#include "ModernSettingMultiCommand.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingMultiCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernSettingCommand> Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExtraPlatformFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformFlag;
    
    ALTAR_API FModernSettingMultiCommand();
};

