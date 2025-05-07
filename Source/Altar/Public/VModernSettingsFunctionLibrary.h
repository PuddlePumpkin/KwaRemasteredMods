#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VModernSettingsFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVModernSettingsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningOnSteamDeck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningOnSteam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformValidForSetting(int32 ModernCategoryPlatormFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCommandValue(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCommandIntegerValue(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCommandFloatValue(const FString& CommandName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FixBooleen(const FString& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateCommand(const FString& CommandName, const FString& CommandValue);
    
};

