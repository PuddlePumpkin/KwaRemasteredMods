#pragma once
#include "CoreMinimal.h"
#include "VActor.h"
#include "VLeveledCreature.generated.h"

class UVAltarAkComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVLeveledCreature : public AVActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarAkComponent* AkAudioComponent;
    
    AVLeveledCreature(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetNameOptions() const;
    
};

