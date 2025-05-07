#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "LegacyStatsMenuEvents.h"
#include "VLegacyStatsMenuPage2.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyStatsMenuPage2 : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuFocusEvent OnItemFocussed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuUnfocusEvent OnItemUnfocussed;
    
    UVLegacyStatsMenuPage2();

};

