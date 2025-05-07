#pragma once
#include "CoreMinimal.h"
#include "BSShaderFlags1.generated.h"

UENUM()
enum class BSShaderFlags1 : uint32 {
    Specular = 1,
    Skinned,
    LowDetail = 4,
    Vertex_Alpha = 8,
    Unknown_1 = 16,
    Single_Pass = 32,
    Empty = 64,
    Environment_Mapping = 128,
    Alpha_Texture = 256,
    Unknown_2 = 512,
    FaceGen = 1024,
    Parallax_Shader_Index_15 = 2048,
    Unknown_3 = 4096,
    Non_Projective_Shadows = 8192,
    Unknown_4 = 16384,
    Refraction = 32768,
    Fire_Refraction = 65536,
    Eye_Environment_Mapping = 131072,
    Hair = 262144,
    Dynamic_Alpha = 524288,
    Localmap_Hide_Secret = 1048576,
    Window_Environment_Mapping = 2097152,
    Tree_Billboard = 4194304,
    Shadow_Frustum = 8388608,
    Multiple_Textures = 16777216,
    Remappable_Textures = 33554432,
    Decal_Single_Pass = 67108864,
    Dynamic_Decal_Single_Pass = 134217728,
    Parallax_Occulsion = 268435456,
    External_Emittance = 536870912,
    Shadow_Map = 1073741824,
    ZBuffer_Test = 2147483648,
};

