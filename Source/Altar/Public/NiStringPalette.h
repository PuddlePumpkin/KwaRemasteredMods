#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NiStringPalette.generated.h"

class UStringPalette;

UCLASS(Blueprintable)
class ALTAR_API UNiStringPalette : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringPalette* Palette;
    
    UNiStringPalette();

};

