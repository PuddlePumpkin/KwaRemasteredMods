#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BethesdaNetLinkAccountDelegateDelegate.h"
#include "BethesdaNetLinkAccountCallProxy.generated.h"

class APlayerController;
class UBethesdaNetLinkAccountCallProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBethesdaNetLinkAccountCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetLinkAccountDelegate OnLinkAccountComplete;
    
    UBethesdaNetLinkAccountCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetLinkAccountCallProxy* LinkAccounts(UObject* WorldContextObject, APlayerController* PlayerController, FName FirstPartySubsystemName);
    
};

