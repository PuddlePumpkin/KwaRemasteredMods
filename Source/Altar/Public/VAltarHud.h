#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VDebugTextContent.h"
#include "VAltarHud.generated.h"

class UVPrimaryGameLayout;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API AVAltarHud : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOblivionDebugTextIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVDebugTextContent> OblivionDebugTextContent;
    
    AVAltarHud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVPrimaryGameLayout* GetPrimaryGameLayout() const;
    
};

