#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "VRadialMenu.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVRadialMenu : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CenterWidget;
    
    UVRadialMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseCursorDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseCursorAngle() const;
    
};

