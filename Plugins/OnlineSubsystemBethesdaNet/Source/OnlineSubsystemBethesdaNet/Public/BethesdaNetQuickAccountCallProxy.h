#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BethesdaNetQuickAccountDelegateDelegate.h"
#include "BethesdaNetQuickAccountCallProxy.generated.h"

class APlayerController;
class UBethesdaNetQuickAccountCallProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBethesdaNetQuickAccountCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetQuickAccountDelegate OnQuickAccountComplete;
    
    UBethesdaNetQuickAccountCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetQuickAccountCallProxy* QuickAccountCreate(UObject* WorldContextObject, APlayerController* PlayerController, const FString& EmailAddress);
    
};

