#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VStateMachineBase.h"
#include "VStateMachine.generated.h"

class UVStateBase;

UCLASS(Blueprintable)
class VACTORSTATEMACHINE_API UVStateMachine : public UVStateMachineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVStateBase> InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateBase* InitialStateInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateBase* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateBase* PreviousState;
    
public:
    UVStateMachine();

};

