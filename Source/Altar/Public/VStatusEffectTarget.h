#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnTextureEffectResetDelegate.h"
#include "OnTextureEffectStartDelegate.h"
#include "OnTextureEffectStopDelegate.h"
#include "VStatusEffectTarget.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class AVStatusEffectTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVFXLocatedOnSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VFXLocationStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VFXLocationSkeletalMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectStart OnTextureEffectStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectStop OnTextureEffectStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureEffectReset OnTextureEffectReset;
    
    AVStatusEffectTarget(const FObjectInitializer& ObjectInitializer);

};

