#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESGameSetting.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESGameSetting : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    UTESGameSetting();

};

