#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "StringPalette.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UStringPalette : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Palette;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Length;
    
    UStringPalette();

};

