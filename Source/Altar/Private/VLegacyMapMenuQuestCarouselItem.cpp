#include "VLegacyMapMenuQuestCarouselItem.h"

UVLegacyMapMenuQuestCarouselItem::UVLegacyMapMenuQuestCarouselItem() {
    this->Date = FText::FromString(TEXT("{Date}"));
    this->Body = FText::FromString(TEXT("{Body}"));
    this->bIsDecorator = false;
    this->bIsLeftDecorator = false;
}

UVLegacyMapMenuQuestCarouselItem* UVLegacyMapMenuQuestCarouselItem::CreateQuestCarouselItemRightDecorator() {
    return NULL;
}

UVLegacyMapMenuQuestCarouselItem* UVLegacyMapMenuQuestCarouselItem::CreateQuestCarouselItemLeftDecorator() {
    return NULL;
}

UVLegacyMapMenuQuestCarouselItem* UVLegacyMapMenuQuestCarouselItem::CreateQuestCarouselItemFromQuest(const FLegacyMapMenuQuestProperties& Quest) {
    return NULL;
}

UVLegacyMapMenuQuestCarouselItem* UVLegacyMapMenuQuestCarouselItem::CreateQuestCarouselItem(const FText& NewDate, const FText& NewBody) {
    return NULL;
}


