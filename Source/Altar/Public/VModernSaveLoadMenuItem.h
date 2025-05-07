#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnExpandedStateChangedDelegate.h"
#include "VSaveGameDetails.h"
#include "VModernSaveLoadMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSaveLoadMenuItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVSaveGameDetails> AssignedSaves;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpandedStateChanged OnExpandedStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavePlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveGameSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSectionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSaveMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAchievementDisabled;
    
public:
    UVModernSaveLoadMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetTimeText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotName(const FString& NewSlotName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerName(const FString& NewPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSectionHeader(const bool InNewBool);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInSaveMenu(const bool InNewBool);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(const bool InNewBool);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAchievementDisabled(const bool InNewBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTimeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSectionHeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOnExpandedBound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInSaveMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExpanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAchievementDisabled() const;
    
};

