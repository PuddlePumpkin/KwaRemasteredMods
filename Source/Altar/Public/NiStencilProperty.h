#pragma once
#include "CoreMinimal.h"
#include "NiProperty.h"
#include "StencilAction.h"
#include "StencilDrawMode.h"
#include "StencilFlags.h"
#include "StencilTestFunc.h"
#include "NiStencilProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiStencilProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StencilEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    StencilTestFunc StencilFunction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 StencilRef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 StencilMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    StencilAction FailAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    StencilAction ZFailAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    StencilAction PassAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    StencilDrawMode DrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStencilFlags StencilFlags;
    
    UNiStencilProperty();

};

