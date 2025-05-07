#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BP_OnLevelSequenceEndDelegate.h"
#include "VCinematicSubsystem.generated.h"

class UVCinematicSaveData;

UCLASS(Blueprintable)
class ALTAR_API UVCinematicSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBP_OnLevelSequenceEnd BP_OnLevelSequenceEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVCinematicSaveData* CinematicSaveData;
    
public:
    UVCinematicSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartInGameCinematic();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelSequenceEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCinematic() const;
    
};

