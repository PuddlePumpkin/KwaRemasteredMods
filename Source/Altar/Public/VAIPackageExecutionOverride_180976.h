#pragma once
#include "CoreMinimal.h"
#include "VAIPackageExecutionOverride.h"
#include "VAIPackageExecutionOverride_180976.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API UVAIPackageExecutionOverride_180976 : public UVAIPackageExecutionOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* Renault;
    
public:
    UVAIPackageExecutionOverride_180976();

};

