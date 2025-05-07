#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "VAltarRichInputActionDecorator.generated.h"

class UDataTable;
class UVAltarBoundActionButton;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UVAltarRichInputActionDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVAltarBoundActionButton> BoundActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle KeyTextStyle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DT_InputActions;
    
public:
    UVAltarRichInputActionDecorator();

};

