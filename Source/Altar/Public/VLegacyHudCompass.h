#pragma once
#include "CoreMinimal.h"
#include "VAltarButton.h"
#include "VLegacyHudCompass.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyHudCompass : public UVAltarButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Heading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrameVisible;
    
public:
    UVLegacyHudCompass();

    UFUNCTION(BlueprintCallable)
    void SetHeading(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameVisible(bool Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadingUpdated(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrameVisibleUpdated(bool Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFrameVisible() const;
    
};

