#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AltarBISubsystem.generated.h"

class UBIEventManager;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTARBI_API UAltarBISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlterBIEnabledInBuild;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AlterBIRetryDelayMS;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AlterBIEventBufferSize;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AlterBIResetSessionSuspendTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIEventManager* m_biEventManager;
    
public:
    UAltarBISubsystem();

};

