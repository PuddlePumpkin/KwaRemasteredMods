#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LevelStreamingDynamic.h"
#include "VLevelStreaming.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLevelStreaming : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, AActor*> PawnActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LevelBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZKillDistUnderLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ContainedActors;
    
public:
    UVLevelStreaming();

    UFUNCTION(BlueprintCallable)
    void OnInteriorLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnInteriorLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnInteriorLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnInteriorLevelHidden();
    
};

