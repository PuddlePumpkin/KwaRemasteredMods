#pragma once
#include "CoreMinimal.h"
#include "LegacyMenuActionBinding.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VLegacyMapMenu.generated.h"

class UVLegacyMapMenuMapPage;
class UVLegacyMapMenuQuestsPage;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyMapMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMenuActionBinding ClickIconData;
    
public:
    UVLegacyMapMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickedIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToNextPage(const bool bRight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMapMenuMapPage* GetWorldMapPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMapMenuQuestsPage* GetQuestsPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyMapMenuMapPage* GetLocalMapPage() const;
    
};

