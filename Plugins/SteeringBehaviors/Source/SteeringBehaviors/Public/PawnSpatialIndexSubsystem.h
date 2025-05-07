#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PawnSpatialIndexSubsystem.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class STEERINGBEHAVIORS_API UPawnSpatialIndexSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> IndexedPawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APawn*> OctreeIdPawns;
    
public:
    UPawnSpatialIndexSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdatePawnLocation(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawn(const APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(const AActor* ActorSpawned);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    void BlueprintGetPawnsInRadius(const FVector& SphereCenter, const double SphereRadius, UPARAM(Ref) TArray<APawn*>& OutPawns) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPawn(const APawn* Pawn);
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULevelVolumeSubsystem, STATGROUP_Tickables); }
};

