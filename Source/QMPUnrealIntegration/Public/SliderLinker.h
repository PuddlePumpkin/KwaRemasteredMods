#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SliderLinker.generated.h"

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API USliderLinker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SliderName;
    
public:
    USliderLinker();

    UFUNCTION(BlueprintCallable)
    void OnSliderValueUpdated(float NewValue);
    
};

