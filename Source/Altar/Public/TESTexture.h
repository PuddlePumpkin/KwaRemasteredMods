#pragma once
#include "CoreMinimal.h"
#include "TESBaseFormComponent.h"
#include "TESTexture.generated.h"

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESTexture : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureName;
    
    UTESTexture();

};

