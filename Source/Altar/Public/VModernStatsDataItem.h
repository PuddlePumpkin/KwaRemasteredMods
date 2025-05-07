#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatGroupType.h"
#include "VModernStatsDataItem.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ALTAR_API UVModernStatsDataItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* RowIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* TileIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatGroupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UVModernStatsDataItem();

    UFUNCTION(BlueprintCallable)
    void SetBaseValues(EStatGroupType InType, FText InName, float InValue);
    
};

