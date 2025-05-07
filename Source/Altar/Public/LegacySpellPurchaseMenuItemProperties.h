#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuItemCategory.h"
#include "ELegacySpellPurchaseMenuItemType.h"
#include "ELegacySpellPurchaseMenuSpellSchool.h"
#include "LegacySpellPurchaseMenuItemProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacySpellPurchaseMenuItemProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Costs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacySpellPurchaseMenuItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacySpellPurchaseMenuItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacySpellPurchaseMenuSpellSchool School;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CannotCastReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImmuneToSilence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpellId;
    
    ALTAR_API FLegacySpellPurchaseMenuItemProperties();
};

