#pragma once
#include "CoreMinimal.h"
#include "TESBaseFormComponent.h"
#include "TESTextureList.h"
#include "TESModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESModel : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTESTextureList TextureList;
    
    UTESModel();

};

