#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "VAltarUISettings.generated.h"

class UVPrimaryGameLayout;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UVAltarUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVPrimaryGameLayout> PrimaryGameLayoutDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MenuDefaultsTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NavigationMappingsTable;
    
public:
    UVAltarUISettings();

};

