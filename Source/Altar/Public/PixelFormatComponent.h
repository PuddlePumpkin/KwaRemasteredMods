#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "PixelComponent.h"
#include "PixelRepresentation.h"
#include "PixelFormatComponent.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UPixelFormatComponent : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PixelComponent Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PixelRepresentation Convention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitsPerChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSigned;
    
    UPixelFormatComponent();

};

