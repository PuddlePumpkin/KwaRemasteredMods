#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VAssetNameDebugWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAssetNameDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    UVAssetNameDebugWidget();

    UFUNCTION(BlueprintCallable)
    void TraceToFirstAsset();
    
};

