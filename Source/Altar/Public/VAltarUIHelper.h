#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "VAltarUIHelper.generated.h"

class AActor;
class UActorComponent;
class UCameraComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UVAltarUIHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVAltarUIHelper();

private:
    UFUNCTION(BlueprintCallable)
    static void SetVisibilityRestricted(USceneComponent* InSceneComponent, bool bNewVisibility, bool bPropagateToChildren, const TArray<UClass*>& ExcludedClasses);
    
    UFUNCTION(BlueprintCallable)
    static void SetSceneComponentHiddenInGameRestricted(USceneComponent* InSceneComponent, bool bNewHidden, bool bPropagateToChildren, const TArray<UClass*>& ExcludedClasses);
    
    UFUNCTION(BlueprintCallable)
    static void MarkActorComponentRenderStateDirty(UActorComponent* InActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInsideBox2D(const FBox2D& InBox, const FVector2D& InPointToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBox2DInsideBox2D(const FBox2D& InBox, const FBox2D& InEnclosingBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGreatestCommonDivisor(int32 A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActorBoundsRestricted(const AActor* InActor, const TArray<UClass*>& ExcludedClasses, const TArray<FName>& ExcludedActorComponentNames, bool bOnlyCollidingComponents, FVector& OutOrigin, FVector& OutBoxExtent, bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindComponentByName(const AActor* InActor, const TSubclassOf<UActorComponent> ComponentClass, const FName& InName);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayCreditsWidget(bool bNewVisibility, FName CreditMenuName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DeprojectActorViewScreenPointToWorld(UCameraComponent* InCameraComponent, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& InTextToCopy);
    
};

