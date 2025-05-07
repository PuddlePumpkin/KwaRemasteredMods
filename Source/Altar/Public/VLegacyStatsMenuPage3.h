#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "LegacyStatsMenuEvents.h"
#include "VLegacyStatsMenuPage3.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyStatsMenuPage3 : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuHoverEvent OnItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuNoHoverEvent OnNoItemsHovered;
    
    UVLegacyStatsMenuPage3();

};

