#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QMPSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=QMPSettings)
class QMPUNREALINTEGRATION_API UQMPSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFPSChart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCSVProfiler;
    
    UQMPSettings();

};

