#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkillsMenuItemProperties.h"
#include "VSkillItemObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSkillItemObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillsMenuItemProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
public:
    UVSkillItemObject();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FSkillsMenuItemProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool bNewSelectionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkillsMenuItemProperties GetProperties() const;
    
};

