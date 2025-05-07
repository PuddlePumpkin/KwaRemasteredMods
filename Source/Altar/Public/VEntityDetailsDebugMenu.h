#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VEntityDetailsDebugMenu.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVEntityDetailsDebugMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVPairedPawn> ControlledPairedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntityDebugIndex;
    
    UVEntityDetailsDebugMenu();

};

