#include "VAnimNotify_ActionCameraTracking.h"

UVAnimNotify_ActionCameraTracking::UVAnimNotify_ActionCameraTracking() {
}

bool UVAnimNotify_ActionCameraTracking::ShouldIgnoreTrackingOnTargetedPawn(AVPairedPawn* ControlledPawn, AVPairedPawn* TargetedPawn) const {
    return false;
}


