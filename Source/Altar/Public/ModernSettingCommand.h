#pragma once
#include "CoreMinimal.h"
#include "ModernSettingCommand.generated.h"

USTRUCT(BlueprintType)
struct FModernSettingCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConsoleCommand;
    
    ALTAR_API FModernSettingCommand();
};

