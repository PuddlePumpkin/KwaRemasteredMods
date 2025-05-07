#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "NifString.h"
#include "NiImage.generated.h"

class UNiRawImageData;

UCLASS(Blueprintable)
class ALTAR_API UNiImage : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseExternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiRawImageData* ImageData;
    
    UNiImage();

};

