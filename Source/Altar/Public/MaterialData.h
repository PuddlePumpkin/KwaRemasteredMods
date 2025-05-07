#pragma once
#include "CoreMinimal.h"
#include "NifString.h"
#include "NifType.h"
#include "MaterialData.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UMaterialData : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNifString ShaderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShaderExtraData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumMaterials;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialExtraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaterialNeedsUpdate;
    
    UMaterialData();

};

