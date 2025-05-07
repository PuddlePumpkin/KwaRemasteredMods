#include "VPairedAssetsLoadingSubsystem.h"

UVPairedAssetsLoadingSubsystem::UVPairedAssetsLoadingSubsystem() {
}

bool UVPairedAssetsLoadingSubsystem::UnregisterPreloadRequestFromRequestID(const int64 InPreloadRequestID, const int64 InOwnerInstanceFormID) {
    return false;
}

bool UVPairedAssetsLoadingSubsystem::UnregisterPreloadRequestFromFormID(const int64 InPairedActorFormID, const int64 InOwnerInstanceFormID) {
    return false;
}

bool UVPairedAssetsLoadingSubsystem::UnregisterPreloadRequestFromForm(const UTESForm* InPairedActorForm, const int64 InOwnerInstanceFormID) {
    return false;
}

int64 UVPairedAssetsLoadingSubsystem::RegisterPreloadRequestFromFormID(const int64 InPairedActorFormID, EVPreloadPriority InPriority, const int64 InOwnerInstanceFormID) {
    return 0;
}

int64 UVPairedAssetsLoadingSubsystem::RegisterPreloadRequestFromForm(const UTESForm* InPairedActorForm, EVPreloadPriority InPriority, const int64 InOwnerInstanceFormID) {
    return 0;
}


