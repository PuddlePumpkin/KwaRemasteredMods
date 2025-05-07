#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VRaceSexMenuCustomisationOptions.h"
#include "VModern_CharacCreationToggleItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModern_CharacCreationToggleItem : public UObject {
    GENERATED_BODY()
public:
    UVModern_CharacCreationToggleItem();

    UFUNCTION(BlueprintCallable)
    void SetOptionIndex(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOption(const FVRaceSexMenuCustomisationOptions& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOptionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVRaceSexMenuCustomisationOptions GetOption() const;
    
};

