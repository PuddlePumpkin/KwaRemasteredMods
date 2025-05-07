#pragma once
#include "CoreMinimal.h"
#include "EEffectID.h"
#include "EMagicSchool.h"
#include "VFormPtr.h"
#include "ScriptEffectItemData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FScriptEffectItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicSchool MagicSchool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EffectName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EffectIsHostile;
    
    FScriptEffectItemData();
};

