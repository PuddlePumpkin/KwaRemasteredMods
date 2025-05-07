#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESMagicItemForm.generated.h"

class UTESEffectSetting;

UCLASS(Blueprintable)
class ALTAR_API UTESMagicItemForm : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTESEffectSetting>> EffectSettings;
    
    UTESMagicItemForm();

};

