#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EVBossCategory.h"
#include "VPairingInitializationDelegateDelegate.h"
#include "VUnpairedDelegateDelegate.h"
#include "VTESObjectRefComponent.generated.h"

class UTESForm;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVTESObjectRefComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 FormIDInstance;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CellName;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CellNameAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESForm* TESForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bIsPaired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPairingInitializationDelegate OnInitializedAndPaired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVUnpairedDelegate OnUnpaired;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVBossCategory BossTag;
    
public:
    UVTESObjectRefComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHexFormRefID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVBossCategory GetBossTag() const;
    
};

