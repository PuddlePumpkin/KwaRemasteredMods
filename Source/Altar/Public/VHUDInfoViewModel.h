#pragma once
#include "CoreMinimal.h"
#include "ELegacyHudInfoIcon.h"
#include "LegacyActionProperties.h"
#include "LegacyIconProperties.h"
#include "VViewModelBase.h"
#include "VHUDInfoViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVHUDInfoViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TargetedItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TargetedDoorDestinationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyIconProperties LastIconModifiedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELegacyHudInfoIcon, FLegacyIconProperties> IconsProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyActionProperties ActionProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTelekinesisActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmptyContainer;
    
public:
    UVHUDInfoViewModel();

    UFUNCTION(BlueprintCallable)
    void SetTargetedItemName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetedDoorDestinationName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetLastIconModifiedProperties(const FLegacyIconProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTelekinesisActive(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEmptyContainer(const bool bIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    void SetIconsProperties(const TMap<ELegacyHudInfoIcon, FLegacyIconProperties>& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetActionProperties(const FLegacyActionProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasContent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTargetedItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTargetedDoorDestinationName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyIconProperties GetLastIconModifiedProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTelekinesisActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEmptyContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ELegacyHudInfoIcon, FLegacyIconProperties> GetIconsProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyActionProperties GetActionProperties() const;
    
};

