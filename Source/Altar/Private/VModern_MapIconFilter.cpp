#include "VModern_MapIconFilter.h"

UVModern_MapIconFilter::UVModern_MapIconFilter() {
    this->FilterIconBox = NULL;
    this->ControlFilterBox = NULL;
    this->FilterIconClass = NULL;
    this->IconDesignTable = NULL;
}







bool UVModern_MapIconFilter::IsFilterHasAtLeastOneDisplayedIcon() {
    return false;
}

bool UVModern_MapIconFilter::IsFilterFlagAll() const {
    return false;
}

UCommonUserWidget* UVModern_MapIconFilter::GetControlFilter() const {
    return NULL;
}

void UVModern_MapIconFilter::DesactivateIconFilter(UCommonUserWidget* Activator) {
}

void UVModern_MapIconFilter::DesactivateFilter(UCommonUserWidget* Activator) {
}

void UVModern_MapIconFilter::ActivateSpecificFilterFromEnum(ELegacyMapMenuIcon ActivatorEnum) {
}

void UVModern_MapIconFilter::ActivateIconFilter(UCommonUserWidget* Activator) {
}

void UVModern_MapIconFilter::ActivateFilter(UCommonUserWidget* Activator) {
}

void UVModern_MapIconFilter::ActivateControlFilterFromEnum(ELegacyMapMenuIcon ActivatorEnum) {
}

void UVModern_MapIconFilter::ActivateControlFilter(UCommonUserWidget* Activator, bool bIsAll) {
}


