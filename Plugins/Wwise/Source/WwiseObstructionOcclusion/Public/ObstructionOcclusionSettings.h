#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ObstructionOcclusionSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class WWISEOBSTRUCTIONOCCLUSION_API UObstructionOcclusionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float ObjectDimensionLowerBound;
    
    UPROPERTY(Config, EditAnywhere)
    float ObjectDimensionUpperBound;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ObjectDimensionOmitCount;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxObjectsToAccount;
    
    UPROPERTY(Config, EditAnywhere)
    float SameOutdoorRoomMin;
    
    UPROPERTY(Config, EditAnywhere)
    float SameOutdoorRoomMax;
    
    UPROPERTY(Config, EditAnywhere)
    float SameIndoorRoomMin;
    
    UPROPERTY(Config, EditAnywhere)
    float SameIndoorRoomMax;
    
    UPROPERTY(Config, EditAnywhere)
    float DifferentOutdoorRoomsMin;
    
    UPROPERTY(Config, EditAnywhere)
    float DifferentOutdoorRoomsMax;
    
    UPROPERTY(Config, EditAnywhere)
    float DifferentIndoorRoomsMin;
    
    UPROPERTY(Config, EditAnywhere)
    float DifferentIndoorRoomsMax;
    
    UPROPERTY(Config, EditAnywhere)
    float FromOutdoorToIndoorRoomMin;
    
    UPROPERTY(Config, EditAnywhere)
    float FromOutdoorToIndoorRoomMax;
    
    UPROPERTY(Config, EditAnywhere)
    float FromIndoorToOutdoorRoomMin;
    
    UPROPERTY(Config, EditAnywhere)
    float FromIndoorToOutdoorRoomMax;
    
    UObstructionOcclusionSettings();

};

