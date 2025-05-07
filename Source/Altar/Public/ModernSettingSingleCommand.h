#pragma once
#include "CoreMinimal.h"
#include "ModernSettingCommand.h"
#include "ModernSettingSingleCommand.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingSingleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernSettingCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireExtraPlatformFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformFlag;
    
    ALTAR_API FModernSettingSingleCommand();
};

