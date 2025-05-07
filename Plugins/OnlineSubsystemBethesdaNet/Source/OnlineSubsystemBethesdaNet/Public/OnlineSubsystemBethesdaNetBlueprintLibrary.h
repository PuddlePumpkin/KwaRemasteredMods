#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BNetLoggingPlatform.h"
#include "BNetLoginResult.h"
#include "BNetPlatform.h"
#include "OnlineSubsystemBethesdaNetBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMBETHESDANET_API UOnlineSubsystemBethesdaNetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSubsystemBethesdaNetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLastErrorAConnectionIssue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserEmailAddress(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static BNetPlatform GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPersistentUserId(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static BNetLoggingPlatform GetLoggingPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static BNetLoginResult GetLastLoginResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLastErrorAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccountBUID(int32 LocalUserNum);
    
};

