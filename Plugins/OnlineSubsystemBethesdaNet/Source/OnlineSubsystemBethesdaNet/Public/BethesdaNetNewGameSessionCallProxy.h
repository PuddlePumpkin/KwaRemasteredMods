#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BethesdaNetNewGameSessionCallProxyDelegateDelegate.h"
#include "BethesdaNetNewGameSessionCallProxy.generated.h"

class UBethesdaNetNewGameSessionCallProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBethesdaNetNewGameSessionCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBethesdaNetNewGameSessionCallProxyDelegate OnNewGameSessionComplete;
    
    UBethesdaNetNewGameSessionCallProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBethesdaNetNewGameSessionCallProxy* StartNewGameSession(UObject* WorldContextObject, const FString& PersistentUserId);
    
};

