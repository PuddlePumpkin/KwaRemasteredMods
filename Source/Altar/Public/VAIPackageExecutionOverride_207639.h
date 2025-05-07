#pragma once
#include "CoreMinimal.h"
#include "VAIPackageExecutionOverride.h"
#include "VAIPackageExecutionOverride_207639.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API UVAIPackageExecutionOverride_207639 : public UVAIPackageExecutionOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* Glenroy;
    
public:
    UVAIPackageExecutionOverride_207639();

};

