#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EOriginalInventoryMenuArmorClothPart.h"
#include "EOriginalInventoryMenuBookType.h"
#include "EOriginalInventoryMenuPotionType.h"
#include "OriginalInventoryMenuItemSkillInformations.h"
#include "VViewModelBase.h"
#include "VItemDetailsViewModel.generated.h"

class UTESForm;

UCLASS(Blueprintable)
class ALTAR_API UVItemDetailsViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMaxCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoulgemCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoulgemMaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SoulgemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSoulgemUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStoneUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlchemyToolUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepairHammerUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOriginalInventoryMenuItemSkillInformations ItemSkillInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLightArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuArmorClothPart ArmorPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuArmorClothPart ClothPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuPotionType PotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuBookType BookType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* HoveredObjectTESForm;
    
public:
    UVItemDetailsViewModel();

    UFUNCTION(BlueprintCallable)
    void SetWeaponUse(int32 NewWeaponUse);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMaxCharge(int32 NewWeaponMaxCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponCharge(int32 NewWeaponCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetSoulgemMaxCapacity(int32 NewSoulgemMaxCapacity);
    
    UFUNCTION(BlueprintCallable)
    void SetSoulgemLevel(const FText& NewSoulgemLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSoulgemCapacity(int32 NewSoulgemCapacity);
    
    UFUNCTION(BlueprintCallable)
    void SetPotionType(EOriginalInventoryMenuPotionType NewPotionType);
    
    UFUNCTION(BlueprintCallable)
    void SetItemSkillInformations(const FOriginalInventoryMenuItemSkillInformations NewSkillInformations);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStoneUsable(bool bNewIsUsable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSoulgemUsable(bool bNewIsUsable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRepairHammerUsable(bool bNewIsUsable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLightArmor(bool bNewIsLightArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAlchemyToolUsable(bool bNewIsUsable);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredObjectTESForm(UTESForm* NewForm);
    
    UFUNCTION(BlueprintCallable)
    void SetClothPart(EOriginalInventoryMenuArmorClothPart NewClothPart);
    
    UFUNCTION(BlueprintCallable)
    void SetBookType(EOriginalInventoryMenuBookType NewBookType);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorPart(EOriginalInventoryMenuArmorClothPart NewArmorPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponMaxCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSoulgemMaxCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSoulgemLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSoulgemCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuPotionType GetPotionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOriginalInventoryMenuItemSkillInformations GetItemSkillInformations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStoneUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSoulgemUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRepairHammerUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLightArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlchemyToolUsable() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHoveredWeaponDescriptionText(const FText& DescriptionTextFormat, const TMap<FGameplayTag, FText>& WeaponSizeToTextMap, const TMap<FGameplayTag, FText>& WeaponTypeToTextMap, const TMap<FGameplayTag, FText>& WeaponSkillToTextMap) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESForm* GetHoveredObjectTESForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuArmorClothPart GetClothPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuBookType GetBookType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuArmorClothPart GetArmorPart() const;
    
};

