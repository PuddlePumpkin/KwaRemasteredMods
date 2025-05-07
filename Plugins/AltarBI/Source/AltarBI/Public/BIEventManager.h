#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BIEventManager.generated.h"

class IVAltarBISaveIdentificationProvider;
class UVAltarBISaveIdentificationProvider;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTARBI_API UBIEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BIEventBulkSendRateMS;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNumberOfBulkBIEventsCallsPerFrame;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ForceWaitCallbackTimeoutMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IVAltarBISaveIdentificationProvider> SaveIdentificationProvider;
    
public:
    UBIEventManager();

};

