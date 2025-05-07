#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "VModern_CharacCreationGenericSettingsTitle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_CharacCreationGenericSettingsTitle : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UVModern_CharacCreationGenericSettingsTitle();

};

