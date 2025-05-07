#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "ELegacyPlayerMenuPage.h"
#include "ELoadingScreenType.h"
#include "EModernCategoryPlatormFlag.h"
#include "EVCountryGroup.h"
#include "OnLeftMouseButtonReleasedDelegate.h"
#include "OnToggleWidgetVisibilityDelegate.h"
#include "Templates/SubclassOf.h"
#include "WidgetContext.h"
#include "VAltarUISubsystem.generated.h"

class AActor;
class AExponentialHeightFog;
class AVAltarHud;
class AVGlobalLighting;
class UTESForm;
class UVAltarMenu;
class UVAltarMenuDefaultsTable;
class UVPrimaryGameLayout;
class UVViewModelBase_Deprecated;

UCLASS(Blueprintable)
class ALTAR_API UVAltarUISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVAltarHud* PrimaryHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarMenuDefaultsTable* MenuDefaultsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UVViewModelBase_Deprecated>, UVViewModelBase_Deprecated*> ViewModelsMap_Deprecated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FWidgetContext, UVAltarMenu*> WidgetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInputHintsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHUDVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMenuVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SavePlayerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavePlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdatedPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingScreenType CurrentLoadingScreenLoadContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InventoryHoveredObjectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* InventoryHoveredObjectForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyPlayerMenuPage LastPlayerMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGlobalLighting*> AllGlobalLightingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AExponentialHeightFog*> AllExponentialHeightFogs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeftMouseButtonReleased OnLeftMouseButtonReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleWidgetVisibility OnToggleInputHintVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleWidgetVisibility OnToggleHUDVisibility;
    
public:
    UVAltarUISubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterGlobalLightingActor(AVGlobalLighting* InGlobalLightingActor);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterExponentialHeightFog(AExponentialHeightFog* InExponentialHeightFog);
    
    UFUNCTION(BlueprintCallable)
    void TryGetBrushFromKey(FKey InKey, FSlateBrush& OutBrush);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInputHintVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUDVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNameTextFromLastLoadedSave(const FText& InNewPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLevelFromLevelUp(const int32 InNewPlayerLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLevelFromLastLoadedSave(const int32 InNewPlayerLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryHoveredObjectForm(UTESForm* InNewForm);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryHoveredObjectActor(AActor* InNewActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLoadingScreenContext(const ELoadingScreenType InNewLoadingScreenContext);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGlobalLightingActor(AVGlobalLighting* InNewGlobalLightingActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExponentialHeightFog(AExponentialHeightFog* InNewExponentialHeightFog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputHintsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVPrimaryGameLayout* GetPrimaryGameLayout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerNameTextFromLastLoadedSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLevelFromLastLoadedSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EModernCategoryPlatormFlag GetPlatformTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMenuDefaultLayer(TSoftClassPtr<UVAltarMenu> MenuClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UVAltarMenu> GetMenuDefaultClass(TSoftClassPtr<UVAltarMenu> MenuClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTESForm* GetInventoryHoveredObjectForm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInventoryHoveredObjectActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AVGlobalLighting*> GetGlobalLightingActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentUpdatedPlayerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingScreenType GetCurrentLoadingScreenContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVCountryGroup GetCoutryGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AExponentialHeightFog*> GetAllExponentialHeightFogs() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUIInputMode(bool bShowMouseCursor);
    
    UFUNCTION(BlueprintCallable)
    void ForceGameplayInputMode();
    
};

