#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Templates/SubclassOf.h"
#include "AltarCheatManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class ALTAR_API UAltarCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> GraphicsDebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGraphicsDebugWidgetShown;
    
public:
    UAltarCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void XSXC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLocalMapMode();
    
    UFUNCTION(BlueprintCallable)
    void SkipTutorialQuest();
    
    UFUNCTION(BlueprintCallable)
    void SendMultipleOblivionCommand(const TArray<FString>& CommandeLists);
    
    UFUNCTION(BlueprintCallable)
    void ObvGodMode();
    
    UFUNCTION(BlueprintCallable)
    void ObvConsole(UPARAM(Ref) FString& Arg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ObvConselect(UPARAM(Ref) FString& Arg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGodMode() const;
    
    UFUNCTION(BlueprintCallable)
    void GiveViolence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMenuCommand(UPARAM(Ref) FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void CrashGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AltarSpawn(UPARAM(Ref) FString& Race);
    
};

