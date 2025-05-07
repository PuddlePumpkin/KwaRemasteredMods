#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECharacterFadeState.h"
#include "VCharacterFadeInOutComponent.generated.h"

class AActor;
class AVPairedCharacter;
class AVPairedCreature;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVCharacterFadeInOutComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerCamera;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterFadeState FadeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> CharacterMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentActorBetweenCamAndPlayer;
    
public:
    UVCharacterFadeInOutComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetDitherOnCreatureVisibleComponents(AVPairedCreature* PairedCreature, bool bDoDither, float DitherScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherOnCharacterVisibleComponents(AVPairedCharacter* PairedCharacter, bool bDoDither, float DitherScale);
    
};

