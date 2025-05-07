#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AvailableEffectData.h"
#include "VAvailableEffectItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAvailableEffectItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableEffectData Properties;
    
public:
    UVAvailableEffectItem();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FAvailableEffectData& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAvailableEffectData GetProperties() const;
    
};

