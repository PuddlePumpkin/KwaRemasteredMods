#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WwiseExternalSourceSettings.generated.h"

UCLASS(Config=Game)
class WWISESIMPLEEXTERNALSOURCE_API UWwiseExternalSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath MediaInfoTable;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath ExternalSourceDefaultMedia;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath ExternalSourceStagingDirectory;
    
    UWwiseExternalSourceSettings();

};

