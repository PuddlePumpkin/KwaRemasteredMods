#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VStateMachineBase.h"
#include "VParallelStateMachine.generated.h"

class UVStateBase;

UCLASS(Blueprintable)
class VACTORSTATEMACHINE_API UVParallelStateMachine : public UVStateMachineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UVStateBase>> ParallelStateClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVStateBase*> InitialParallelStateInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVStateBase*> ParallelStateInstances;
    
public:
    UVParallelStateMachine();

};

