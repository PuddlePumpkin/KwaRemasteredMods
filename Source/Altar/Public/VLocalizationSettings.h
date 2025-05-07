#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VLocalizationStringTable.h"
#include "VLocalizationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UVLocalizationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVLocalizationStringTable> LocalizationTables;
    
    UVLocalizationSettings();

};

