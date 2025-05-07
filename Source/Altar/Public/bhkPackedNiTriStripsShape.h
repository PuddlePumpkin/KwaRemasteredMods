#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "bhkShapeCollection.h"
#include "bhkPackedNiTriStripsShape.generated.h"

class UhkPackedNiTriStripsData;
class UhkSubPartData;

UCLASS(Blueprintable)
class ALTAR_API UbhkPackedNiTriStripsShape : public UbhkShapeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UhkSubPartData*> SubShapes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Unused1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Unused2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UhkPackedNiTriStripsData* Data;
    
    UbhkPackedNiTriStripsShape();

};

