#pragma once
#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "VActivatableWidgetStack.generated.h"

class UCommonActivatableWidget;
class UVAltarUISubsystem;
class UVUINavigationGlobalSubsystem;

UCLASS(Blueprintable)
class ALTAR_API UVActivatableWidgetStack : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* LastDisplayedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVUINavigationGlobalSubsystem> UINavigationSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVAltarUISubsystem> AltarUISubsystem;
    
public:
    UVActivatableWidgetStack();

};

