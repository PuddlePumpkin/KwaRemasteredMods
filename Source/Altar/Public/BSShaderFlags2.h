#pragma once
#include "CoreMinimal.h"
#include "BSShaderFlags2.generated.h"

UENUM()
enum class BSShaderFlags2 : uint32 {
    ZBuffer_Write = 1,
    LOD_Landscape,
    LOD_Building = 4,
    No_Fade = 8,
    Refraction_Tint = 16,
    Vertex_Colors = 32,
    Unknown1 = 64,
    First_Light_is_Point_Light = 128,
    Second_Light = 256,
    Third_Light = 512,
    Vertex_Lighting = 1024,
    Uniform_Scale = 2048,
    Fit_Slope = 4096,
    Billboard_and_Envmap_Light_Fade = 8192,
    No_LOD_Land_Blend = 16384,
    Envmap_Light_Fade = 32768,
    Wireframe = 65536,
    VATS_Selection = 131072,
    Show_in_Local_Map = 262144,
    Premult_Alpha = 524288,
    Skip_Normal_Maps = 1048576,
    Alpha_Decal = 2097152,
    No_Transparecny_Multisampling = 4194304,
    Unknown2 = 8388608,
    Unknown3 = 16777216,
    Unknown4 = 33554432,
    Unknown5 = 67108864,
    Unknown6 = 134217728,
    Unknown7 = 268435456,
    Unknown8 = 536870912,
    Unknown9 = 1073741824,
    Unknown10 = 2147483648,
};

