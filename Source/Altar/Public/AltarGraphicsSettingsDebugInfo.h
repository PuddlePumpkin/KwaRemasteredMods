#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AltarGraphicsSettingsDebugInfo.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UAltarGraphicsSettingsDebugInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FPSTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* VRAMTextBlock;
    
    UAltarGraphicsSettingsDebugInfo();

};

