#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Templates/SubclassOf.h"
#include "VAltarNavigableSlider.h"
#include "VDotedAltarNavigableSlider.generated.h"

class UCanvasPanel;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVDotedAltarNavigableSlider : public UVAltarNavigableSlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DotsParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DotsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DotsBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DotsSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DotsOffset;
    
    UVDotedAltarNavigableSlider();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDotCreated(UUserWidget* NewDot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateDot();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDots();
    
};

