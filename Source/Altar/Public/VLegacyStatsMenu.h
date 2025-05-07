#pragma once
#include "CoreMinimal.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VLegacyStatsMenu.generated.h"

class UVLegacyStatsMenuPage1;
class UVLegacyStatsMenuPage2;
class UVLegacyStatsMenuPage3;
class UVLegacyStatsMenuPage4;
class UVLegacyStatsMenuPage5;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyStatsMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
    UVLegacyStatsMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToNextPage(const bool Right);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenuPage5* GetPage5() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenuPage4* GetPage4() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenuPage3* GetPage3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenuPage2* GetPage2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UVLegacyStatsMenuPage1* GetPage1() const;
    
};

