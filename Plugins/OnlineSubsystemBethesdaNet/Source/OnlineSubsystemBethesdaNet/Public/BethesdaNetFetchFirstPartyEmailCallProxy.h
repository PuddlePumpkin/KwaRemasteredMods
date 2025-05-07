#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BethesdaNetFetchFirstPartyEmailDelegateDelegate.h"
#include "BethesdaNetFetchFirstPartyEmailCallProxy.generated.h"

class APlayerController;
class UBethesdaNetFetchFirstPartyEmailCallProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBethesdaNetFetchFirstPartyEmailCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetFetchFirstPartyEmailDelegate OnEmailFetchComplete;
    
    UBethesdaNetFetchFirstPartyEmailCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetFetchFirstPartyEmailCallProxy* FetchFirstPartyEmail(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

