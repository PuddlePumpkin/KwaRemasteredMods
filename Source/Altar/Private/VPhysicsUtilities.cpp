#include "VPhysicsUtilities.h"

UVPhysicsUtilities::UVPhysicsUtilities() {
}

void UVPhysicsUtilities::RestoreOriginalProfile(AActor* Actor, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ResetAllOriginalProfilesToDefault(const AActor* Actor) {
}

void UVPhysicsUtilities::RemoveInvisibilityProfiles(APawn* Pawn) {
}

void UVPhysicsUtilities::RemoveGhostProfiles(APawn* Pawn) {
}

bool UVPhysicsUtilities::IsUsingTemporaryProfile(AActor* Actor) {
    return false;
}

bool UVPhysicsUtilities::IsCollisionProfilePurelyCodeDriven(const UPrimitiveComponent* PrimitiveComponent) {
    return false;
}

bool UVPhysicsUtilities::IsCollisionProfileNameValid(const FName& Name) {
    return false;
}

bool UVPhysicsUtilities::IsCollisionProfileCodeDrivable(const FName& Name) {
    return false;
}

bool UVPhysicsUtilities::FindNavigableTeleportSpot(const APawn* Pawn, const FRotator TeleportRotation, FVector& TeleportLocation) {
    return false;
}

FName UVPhysicsUtilities::FindDefaultCollisionProfileName(const AActor* Actor) {
    return NAME_None;
}

bool UVPhysicsUtilities::FindDefaultCanEverAffectNavigation(const AActor* Actor) {
    return false;
}

void UVPhysicsUtilities::ClearAllCollisionTags(const AActor* Actor) {
}

void UVPhysicsUtilities::CheckIsCollisionProfileNotAnonymous(const UPrimitiveComponent* PrimitiveComponent) {
}

void UVPhysicsUtilities::ApplyWaterWalkingProfile(AActor* Actor, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyPawnDockingProfile(APawn* aPawn, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyPawnDockingOnHorseProfile(APawn* aPawn, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyNoCollisionProfile(AActor* Actor, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyInvisibilityProfiles(APawn* Pawn) {
}

void UVPhysicsUtilities::ApplyIgnoreCameraProfiles(AActor* Actor, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyGrabbedProfile(AActor* GrabbedActor, const FString& CollisionLockKey) {
}

void UVPhysicsUtilities::ApplyGhostProfiles(APawn* Pawn) {
}

void UVPhysicsUtilities::ApplyEquippedProfile(AActor* EquippedActor, const FString& CollisionLockKey) {
}


