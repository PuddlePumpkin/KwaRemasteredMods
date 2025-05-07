#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VOnboardingPageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVOnboardingPageInterface : public UInterface {
    GENERATED_BODY()
};

class IVOnboardingPageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExit(bool Forward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchExitAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchEnterAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesNeedExitAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesNeedEnterAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Clean();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEnter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeSkiped() const;
    
};

