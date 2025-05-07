#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BethesdaNetEulaProcessDelegateDelegate.h"
#include "BethesdaNetEulaProcessCallProxy.generated.h"

class APlayerController;
class UBethesdaNetEulaProcessCallProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBethesdaNetEulaProcessCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetEulaProcessDelegate OnStepComplete;
    
    UBethesdaNetEulaProcessCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetEulaProcessCallProxy* StartEulaProcessForPlayer(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetEulaProcessCallProxy* StartEulaProcessForGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetEulaProcessCallProxy* GetNextEulaForGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetEulaProcessCallProxy* AcceptEulaAndMoveNextForPlayer(UObject* WorldContextObject, APlayerController* PlayerController, int32 EulaDocId);
    
};

