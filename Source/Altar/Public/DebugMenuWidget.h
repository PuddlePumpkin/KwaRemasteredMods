#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugMenuWidget.generated.h"

class APlayerController;
class UCheckBox;
class UHorizontalBox;
class ULambdaWrapper;
class UMaterial;
class UScrollBox;
class UVShowroomSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UDebugMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* VerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* LocalMapUIMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULambdaWrapper*> CommandLinesLambdas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* ToggleInventoryPreviewDebugCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* InventoryItemLocationOffsetHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* InventoryItemRotationOffsetHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* InventoryItemScaleOffsetHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVShowroomSubsystem* ShowroomSubsystem;
    
public:
    UDebugMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void ToggleShowroomPropsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowroomLightsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLocalMapUIDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLevelList();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInventoryDebugMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void SwitchShowroomSpawnType();
    
    UFUNCTION(BlueprintCallable)
    void SwitchShowroomBackground();
    
    UFUNCTION(BlueprintCallable)
    void SpawnCreature();
    
    UFUNCTION(BlueprintCallable)
    void SetUpperBody();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDay();
    
    UFUNCTION(BlueprintCallable)
    void SetShowroomSkylightIntensity();
    
    UFUNCTION(BlueprintCallable)
    void SetShowroomBackdropRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetLowerBody();
    
    UFUNCTION(BlueprintCallable)
    void SetHelmet();
    
    UFUNCTION(BlueprintCallable)
    void SetHands();
    
    UFUNCTION(BlueprintCallable)
    void SetFeet();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSex();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRace();
    
    UFUNCTION(BlueprintCallable)
    void SetAmulet();
    
    UFUNCTION(BlueprintCallable)
    void SelectCreature();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RunDebugMenuCommand(UPARAM(Ref) FString& Command);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReloadUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrintDamageLogToScreen(const FString& DamageLogString, const float AttackerDistFromPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnItemScaleOffsetZChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemScaleOffsetYChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemScaleOffsetXChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRotationOffsetZChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRotationOffsetYChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRotationOffsetXChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemLocationOffsetZChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemLocationOffsetYChanged(float InNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnItemLocationOffsetXChanged(float InNewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideDebugMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecuteUICommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSpawnObjectCommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSpawnActorCommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteQACommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecutePefCommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteCommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAICommandLineFromComboBoxSelection();
    
    UFUNCTION(BlueprintCallable)
    void DisplayShowroomUI();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayDebugMenu(APlayerController* PlayerControllerDebug);
    
private:
    UFUNCTION(BlueprintCallable)
    void ComboBoxCategoryDelegate();
    
};

