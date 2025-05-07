#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiPSysModifier.h"
#include "NiPSysDragModifier.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiPSysDragModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiAvObject* DragObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DragAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeFalloff;
    
    UNiPSysDragModifier();

};

