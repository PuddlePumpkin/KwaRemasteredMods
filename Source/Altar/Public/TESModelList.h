#pragma once
#include "CoreMinimal.h"
#include "TESBaseFormComponent.h"
#include "TESModelList.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESModelList : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> Models;
    
    UTESModelList();

};

