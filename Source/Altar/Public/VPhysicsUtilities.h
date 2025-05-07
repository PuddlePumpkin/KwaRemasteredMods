#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VPhysicsUtilities.generated.h"

class AActor;
class APawn;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ALTAR_API UVPhysicsUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVPhysicsUtilities();

    UFUNCTION(BlueprintCallable)
    static void RestoreOriginalProfile(AActor* Actor, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllOriginalProfilesToDefault(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveInvisibilityProfiles(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGhostProfiles(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsingTemporaryProfile(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollisionProfilePurelyCodeDriven(const UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollisionProfileNameValid(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollisionProfileCodeDrivable(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool FindNavigableTeleportSpot(const APawn* Pawn, const FRotator TeleportRotation, UPARAM(Ref) FVector& TeleportLocation);
    
    UFUNCTION(BlueprintCallable)
    static FName FindDefaultCollisionProfileName(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDefaultCanEverAffectNavigation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllCollisionTags(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void CheckIsCollisionProfileNotAnonymous(const UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWaterWalkingProfile(AActor* Actor, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPawnDockingProfile(APawn* aPawn, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPawnDockingOnHorseProfile(APawn* aPawn, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyNoCollisionProfile(AActor* Actor, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyInvisibilityProfiles(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyIgnoreCameraProfiles(AActor* Actor, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGrabbedProfile(AActor* GrabbedActor, const FString& CollisionLockKey);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGhostProfiles(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyEquippedProfile(AActor* EquippedActor, const FString& CollisionLockKey);
    
};

