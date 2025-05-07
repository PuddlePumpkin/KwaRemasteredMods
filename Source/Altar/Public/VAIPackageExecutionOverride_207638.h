#pragma once
#include "CoreMinimal.h"
#include "VAIPackageExecutionOverride.h"
#include "VAIPackageExecutionOverride_207638.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API UVAIPackageExecutionOverride_207638 : public UVAIPackageExecutionOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* Renault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* UrielSeptim;
    
public:
    UVAIPackageExecutionOverride_207638();

};

