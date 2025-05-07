#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RetainerBox.h"
#include "AnimatableRetainerBox.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UAnimatableRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UAnimatableRetainerBox();

};

