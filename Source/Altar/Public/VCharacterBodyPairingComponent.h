#pragma once
#include "CoreMinimal.h"
#include "EBipedModularBodySlot.h"
#include "Templates/SubclassOf.h"
#include "VActorPairingComponent.h"
#include "VCharacterBodyPartProperties.h"
#include "VModularBody.h"
#include "VCharacterBodyPairingComponent.generated.h"

class AVModularBodyPartBase;
class UTESForm;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVCharacterBodyPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBodyPartPropertiesChanged, EBipedModularBodySlot, Slot, const FVCharacterBodyPartProperties&, Properties);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBodyPartPropertiesChanged OnBodyPartPropertiesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVModularBody BodyPartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBipedModularBodySlot, FVCharacterBodyPartProperties> SupportedSlotsMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BodySectionBitMask;
    
public:
    UVCharacterBodyPairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSlotCovered(EBipedModularBodySlot Slot, bool bIsCovered);
    
    UFUNCTION(BlueprintCallable)
    void SetNakedOnSlot(EBipedModularBodySlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSupportedSlot(EBipedModularBodySlot Slot);
    
    UFUNCTION(BlueprintCallable)
    void RefreshBodyParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotSupported(EBipedModularBodySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotCovered(EBipedModularBodySlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EBipedModularBodySlot> GetSupportedSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AVModularBodyPartBase> GetClassFromSlot(EBipedModularBodySlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVCharacterBodyPartProperties GetBodyPartProperties(EBipedModularBodySlot BodySlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESForm* GetBodyPartForm(EBipedModularBodySlot Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipFormOnSlot(EBipedModularBodySlot Slot, const UTESForm* form);
    
};

