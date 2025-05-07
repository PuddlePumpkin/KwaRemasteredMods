#include "VAltarUIHelper.h"
#include "Templates/SubclassOf.h"

UVAltarUIHelper::UVAltarUIHelper() {
}

void UVAltarUIHelper::SetVisibilityRestricted(USceneComponent* InSceneComponent, bool bNewVisibility, bool bPropagateToChildren, const TArray<UClass*>& ExcludedClasses) {
}

void UVAltarUIHelper::SetSceneComponentHiddenInGameRestricted(USceneComponent* InSceneComponent, bool bNewHidden, bool bPropagateToChildren, const TArray<UClass*>& ExcludedClasses) {
}

void UVAltarUIHelper::MarkActorComponentRenderStateDirty(UActorComponent* InActorComponent) {
}

bool UVAltarUIHelper::IsPointInsideBox2D(const FBox2D& InBox, const FVector2D& InPointToCheck) {
    return false;
}

bool UVAltarUIHelper::IsBox2DInsideBox2D(const FBox2D& InBox, const FBox2D& InEnclosingBox) {
    return false;
}

int32 UVAltarUIHelper::GetGreatestCommonDivisor(int32 A, int32 B) {
    return 0;
}

void UVAltarUIHelper::GetActorBoundsRestricted(const AActor* InActor, const TArray<UClass*>& ExcludedClasses, const TArray<FName>& ExcludedActorComponentNames, bool bOnlyCollidingComponents, FVector& OutOrigin, FVector& OutBoxExtent, bool bIncludeFromChildActors) {
}

UActorComponent* UVAltarUIHelper::FindComponentByName(const AActor* InActor, const TSubclassOf<UActorComponent> ComponentClass, const FName& InName) {
    return NULL;
}

void UVAltarUIHelper::DisplayCreditsWidget(bool bNewVisibility, FName CreditMenuName) {
}

bool UVAltarUIHelper::DeprojectActorViewScreenPointToWorld(UCameraComponent* InCameraComponent, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection) {
    return false;
}

void UVAltarUIHelper::CopyToClipboard(const FString& InTextToCopy) {
}


