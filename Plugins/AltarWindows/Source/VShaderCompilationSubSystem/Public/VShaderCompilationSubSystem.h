#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "VShaderCompilationSubSystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Anderson)
class VSHADERCOMPILATIONSUBSYSTEM_API UVShaderCompilationSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVShaderCompilationSubSystem();

    UFUNCTION(BlueprintCallable)
    void ReCompileGlobalComputeShaders();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPrecompilesRemaining();
    
};

