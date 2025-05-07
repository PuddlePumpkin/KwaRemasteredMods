#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESResponse.h"
#include "TESTopicInfo.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESTopicInfo : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTESResponse> Responses;
    
    UTESTopicInfo();

};

