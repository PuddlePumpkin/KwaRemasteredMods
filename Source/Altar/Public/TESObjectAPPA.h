#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectAPPA.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectAPPA : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESObjectAPPA();

};

