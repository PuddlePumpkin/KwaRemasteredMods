#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OblivionDateTimeInfo.h"
#include "VAltarGameDateTimeSystem.generated.h"

class UVAltarGameDateTimeSystem;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API UVAltarGameDateTimeSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOblivionDateTimeInfo Dateinfo;
    
public:
    UVAltarGameDateTimeSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOblivionYear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOblivionMonth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOblivionGameDayPassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOblivionDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOblivionDateTimeInfo GetOblivionDateInfo() const;
    
    UFUNCTION(BlueprintCallable)
    static UVAltarGameDateTimeSystem* Get(UWorld* World);
    
};

