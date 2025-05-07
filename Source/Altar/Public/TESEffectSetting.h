#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlueprintParameters.h"
#include "TESForm.h"
#include "Templates/SubclassOf.h"
#include "TESEffectSetting.generated.h"

class AVMagicSpellVFXBlueprint;
class UTESEffectShader;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESEffectSetting : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESForm> AssociatedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESEffectShader> EffectShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTESEffectShader> EnchantEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AssociatedItemID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EffectShaderID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EnchantEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVMagicSpellVFXBlueprint> CastingBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVMagicSpellVFXBlueprint> ProjectileBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVMagicSpellVFXBlueprint> AreaEffectBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVMagicSpellVFXBlueprint> HitEffectBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintParameters BlueprintCastingParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintParameters BlueprintProjectileParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintParameters BlueprintAreaEffectParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintParameters BlueprintHitEffectParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationBeforeDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNameForCastingAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNameForHitEffectAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagAppliedOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUseFlag;
    
    UTESEffectSetting();

    UFUNCTION(BlueprintCallable)
    int64 GetEnchantEffectID();
    
    UFUNCTION(BlueprintCallable)
    int64 GetEffectShaderID();
    
    UFUNCTION(BlueprintCallable)
    int64 GetAssociatedItemID();
    
};

