#pragma once
#include "CoreMinimal.h"
#include "VAIPackageExecutionOverride.h"
#include "VAIPackageExecutionOverride_207593.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API UVAIPackageExecutionOverride_207593 : public UVAIPackageExecutionOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* UrielSeptim;
    
public:
    UVAIPackageExecutionOverride_207593();

};

