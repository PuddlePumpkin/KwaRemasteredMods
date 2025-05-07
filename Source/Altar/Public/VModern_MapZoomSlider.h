#pragma once
#include "CoreMinimal.h"
#include "OnZoomLevelReachedDelegateDelegate.h"
#include "VDotedAltarNavigableSlider.h"
#include "VModern_MapZoomSlider.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVModern_MapZoomSlider : public UVDotedAltarNavigableSlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomLevelReachedDelegate OnZoomLevelReached;
    
    UVModern_MapZoomSlider();

    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 newLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
};

