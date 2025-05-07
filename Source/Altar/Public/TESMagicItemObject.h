#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESMagicItemObject.generated.h"

class UTESEffectSetting;

UCLASS(Blueprintable)
class ALTAR_API UTESMagicItemObject : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTESEffectSetting>> EffectSettings;
    
    UTESMagicItemObject();

};

