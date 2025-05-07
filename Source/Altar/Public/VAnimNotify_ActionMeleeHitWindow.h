#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VAnimNotify_ActionNotifyState.h"
#include "VAnimNotify_ActionMeleeHitWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotify_ActionMeleeHitWindow : public UVAnimNotify_ActionNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseHitboxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseHitboxCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalDegreeAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalDegreeAngleLimit;
    
    UVAnimNotify_ActionMeleeHitWindow();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBox ComputeHitbox() const;
    
};

