#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImageType.h"
#include "NiObject.h"
#include "NiRawImageData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiRawImageData : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Width;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Height;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ImageType ImageTypeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> RGBImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> RGBAImageData;
    
    UNiRawImageData();

};

