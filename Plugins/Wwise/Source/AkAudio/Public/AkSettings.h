#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "AkAcousticTextureParams.h"
#include "AkGeometrySurfacePropertiesToMap.h"
#include "EAkUnrealAudioRouting.h"
#include "AkSettings.generated.h"

class UAkAcousticTexture;
class UAkAudioEvent;
class UAkAuxBus;
class UAkInitBank;
class UAkRtpc;
class UDataTable;
class UPhysicalMaterial;

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 MaxSimultaneousReverbVolumes;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseProjectPath;
    
    UPROPERTY()
    FDirectoryPath WwiseSoundDataFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath RootOutputPath;
    
    UPROPERTY(Config)
    FDirectoryPath GeneratedSoundBanksFolder;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseStagingDirectory;
    
    UPROPERTY(Config)
    bool bSoundBanksTransfered;
    
    UPROPERTY(Config)
    bool bAssetsMigrated;
    
    UPROPERTY(Config)
    bool bProjectMigrated;
    
    UPROPERTY(Config)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel;
    
    UPROPERTY(Config)
    TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkAcousticTexture> DefaultAcousticTexture;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultTransmissionLoss;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> GeometrySurfacePropertiesTable;
    
    UPROPERTY(Config, EditAnywhere)
    float GlobalDecayAbsorption;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;
    
    UPROPERTY(Config)
    TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> ReverbAssignmentTable;
    
    UPROPERTY(Config, EditAnywhere)
    FString HFDampingName;
    
    UPROPERTY(Config, EditAnywhere)
    FString DecayEstimateName;
    
    UPROPERTY(Config, EditAnywhere)
    FString TimeToFirstReflectionName;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> HFDampingRTPC;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;
    
    UPROPERTY(Config)
    TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap;
    
    UPROPERTY(Config)
    bool SplitSwitchContainerMedia;
    
    UPROPERTY(Config)
    bool SplitMediaPerFolder;
    
    UPROPERTY(Config)
    bool UseEventBasedPackaging;
    
    UPROPERTY()
    FString CommandletCommitMessage;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FString> UnrealCultureToWwiseCulture;
    
    UPROPERTY(Config, EditAnywhere)
    FString DefaultAssetCreationPath;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkInitBank> InitBank;
    
    UPROPERTY(Config, EditAnywhere)
    EAkUnrealAudioRouting AudioRouting;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWwiseSoundEngineEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bWwiseAudioLinkEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAkAudioMixerEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultScalingFactor;
    
    UPROPERTY(Config)
    bool AskedToUseNewAssetManagement;
    
    UPROPERTY(Config)
    bool bEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool MigratedEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool FixupRedirectorsDuringMigration;
    
    UPROPERTY(Config)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config)
    FFilePath WwiseMacInstallationPath;
    
    UAkSettings();

};

