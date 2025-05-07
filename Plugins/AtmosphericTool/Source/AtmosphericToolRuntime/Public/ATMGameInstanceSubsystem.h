#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ATMGameInstanceSubsystem.generated.h"

class UATMSubsystem;

UCLASS(Blueprintable)
class ATMOSPHERICTOOLRUNTIME_API UATMGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UATMSubsystem* Impl;
    
public:
    UATMGameInstanceSubsystem();

};

