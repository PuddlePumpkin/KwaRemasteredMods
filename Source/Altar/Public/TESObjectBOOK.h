#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectBOOK.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectBOOK : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESObjectBOOK();

};

