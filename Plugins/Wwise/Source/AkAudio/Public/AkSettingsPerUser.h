#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AkSettingsPerUser.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath RootOutputPathOverride;
    
    UPROPERTY(Config)
    FDirectoryPath GeneratedSoundBanksFolderOverride;
    
    UPROPERTY(Config, EditAnywhere)
    FString WaapiIPAddress;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoSyncSelection;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiTranslatorTimeout;
    
    UPROPERTY(Config)
    bool SuppressGeneratedSoundBanksPathWarnings;
    
    UPROPERTY(Config)
    bool SoundDataGenerationSkipLanguage;
    
    UPROPERTY(Config, EditAnywhere)
    bool AskForWwiseAssetReload;
    
    UPROPERTY(Config, EditAnywhere)
    bool VisualizeRoomsAndPortals;
    
    UPROPERTY(Config, EditAnywhere)
    bool VisualizeSources;
    
    UPROPERTY(Config, EditAnywhere)
    bool VisualizeComposition;
    
    UPROPERTY(Config, EditAnywhere)
    float VisualizationMaxRadius;
    
    UAkSettingsPerUser();

};

