#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "AltarCommonGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UAltarCommonGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UAltarCommonGameViewportClient();

};

