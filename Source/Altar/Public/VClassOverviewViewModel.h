#pragma once
#include "CoreMinimal.h"
#include "ESkillAndClassSpecialization.h"
#include "PlayerClassItemProperties.h"
#include "SkillInformation.h"
#include "VViewModelBase.h"
#include "VClassOverviewViewModel.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UVClassOverviewViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerClassItemProperties ClassProperties;
    
public:
    UVClassOverviewViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSpecializationEnum(ESkillAndClassSpecialization NewSpecializationEnum);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryAttribute(const FText& NewAttribute);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryAttribute(const FText& NewAttribute);
    
    UFUNCTION(BlueprintCallable)
    void SetClassSpecialisation(const FText& NewSpecialisation);
    
    UFUNCTION(BlueprintCallable)
    void SetClassProperties(const FPlayerClassItemProperties& NewClassProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetClassPicture(UTexture2D* NewPicture);
    
    UFUNCTION(BlueprintCallable)
    void SetClassName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClassSkill(const FSkillInformation& SkillToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerClassItemProperties GetClassProperties() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearClassSkills();
    
    UFUNCTION(BlueprintCallable)
    void ClearClassAttributes();
    
    UFUNCTION(BlueprintCallable)
    void AddClassSkill(const FSkillInformation& SkillToAdd);
    
};

