#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EBipedModularBodySlot.h"
#include "VPairedCharacter.h"
#include "VInventoryPlayerCharacter.generated.h"

class UTESForm;
class UVCharacterPhenotypeData;

UCLASS(Blueprintable)
class AVInventoryPlayerCharacter : public AVPairedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInItemPreviewMode;
    
    AVInventoryPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLightChannelOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryPlayerEquipment(EBipedModularBodySlot Slot, const UTESForm* form);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAppearanceRefreshedEnded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAppearanceRefresh(const UVCharacterPhenotypeData* Preset);
    
    UFUNCTION(BlueprintCallable)
    void ForceLOD0OnCharacter();
    
};

