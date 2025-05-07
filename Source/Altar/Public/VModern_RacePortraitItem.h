#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VModern_RacePortraitItem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UVModern_RacePortraitItem : public UObject {
    GENERATED_BODY()
public:
    UVModern_RacePortraitItem();

    UFUNCTION(BlueprintCallable)
    void SetPropertiesHover(UTexture2D* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(UTexture2D* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetPropertiesHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
};

