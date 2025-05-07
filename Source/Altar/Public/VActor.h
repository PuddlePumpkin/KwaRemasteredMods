#pragma once
#include "CoreMinimal.h"
#include "ActorHiddenInGameChangedSignatureDelegate.h"
#include "ECharacterSex.h"
#include "VModdableBlueprintInterface.h"
#include "VStatusEffectTarget.h"
#include "VActor.generated.h"

class AVPairedCharacter;

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVActor : public AVStatusEffectTarget, public IVModdableBlueprintInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemStackCount;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorHiddenInGameChangedSignature OnHiddenInGameChanged;
    
    AVActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetAnimation(const FString& AnimationName, float FramePosRatio, bool _bIsDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAnimation(const FString& AnimationName);
    
public:

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVPairedCharacter* GetVariantReferenceCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterSex GetDroppedItemSexVariant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindVariantUpdates();
    

    // Fix for true pure virtual functions not being implemented
};

