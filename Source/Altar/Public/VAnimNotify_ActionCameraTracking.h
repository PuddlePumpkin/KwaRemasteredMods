#pragma once
#include "CoreMinimal.h"
#include "CameraTrackingSettings.h"
#include "VAnimNotify_ActionNotifyState.h"
#include "VAnimNotify_ActionCameraTracking.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotify_ActionCameraTracking : public UVAnimNotify_ActionNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTrackingSettings CameraSettings;
    
    UVAnimNotify_ActionCameraTracking();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ShouldIgnoreTrackingOnTargetedPawn(AVPairedPawn* ControlledPawn, AVPairedPawn* TargetedPawn) const;
    
};

