#pragma once
#include "render_utils.h"
#include <string>

struct textureData {
    unsigned int albedo;
    unsigned int normal;
    unsigned int metallic;
    unsigned int roughness;
    unsigned int ao;
};

textureData loadPBRTextures(const std::string& basePath);
void bindPBRTextures(const textureData& tex);