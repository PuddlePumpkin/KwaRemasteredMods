#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LegacyMapMenuQuestProperties.h"
#include "VLegacyMapMenuQuestCarouselItem.generated.h"

class UVLegacyMapMenuQuestCarouselItem;

UCLASS(Blueprintable)
class ALTAR_API UVLegacyMapMenuQuestCarouselItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ControllerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeyboardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeftDecorator;
    
    UVLegacyMapMenuQuestCarouselItem();

    UFUNCTION(BlueprintCallable)
    static UVLegacyMapMenuQuestCarouselItem* CreateQuestCarouselItemRightDecorator();
    
    UFUNCTION(BlueprintCallable)
    static UVLegacyMapMenuQuestCarouselItem* CreateQuestCarouselItemLeftDecorator();
    
    UFUNCTION(BlueprintCallable)
    static UVLegacyMapMenuQuestCarouselItem* CreateQuestCarouselItemFromQuest(const FLegacyMapMenuQuestProperties& Quest);
    
    UFUNCTION(BlueprintCallable)
    static UVLegacyMapMenuQuestCarouselItem* CreateQuestCarouselItem(const FText& NewDate, const FText& NewBody);
    
};

