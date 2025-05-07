#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QMPGameInstance.generated.h"

class AAIController;
class AController;
class APawn;
class APlayerController;
class UGameLocationRecorder;
class USpecificClassUtils;
class USubsegmentSavesManager;

UCLASS(Abstract, Blueprintable)
class QMPUNREALINTEGRATION_API UQMPGameInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* PlayerAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameLocationRecorder* RecorderLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecificClassUtils* SpecificUtils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsegmentSavesManager* SubsegmentSavesManager;
    
public:
    UQMPGameInstance();

    UFUNCTION(BlueprintCallable)
    void OnPawnControllerChange(APawn* Pawn, AController* Controller);
    
};

