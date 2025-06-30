#include "material.h"
#include "render_utils.h"
#include <string>
#include <glad/glad.h>

textureData loadPBRTextures(const std::string& basePath) {
    textureData tex;
    tex.albedo    = loadTexture((basePath + "/albedo.png").c_str());
    tex.normal    = loadTexture((basePath + "/normal.png").c_str());
    tex.metallic  = loadTexture((basePath + "/metallic.png").c_str());
    tex.roughness = loadTexture((basePath + "/roughness.png").c_str());
    tex.ao        = loadTexture((basePath + "/ao.png").c_str());
    return tex;
}

void bindPBRTextures(const textureData& tex) {
    glActiveTexture(GL_TEXTURE3);
    glBindTexture(GL_TEXTURE_2D, tex.albedo);
    glActiveTexture(GL_TEXTURE4);
    glBindTexture(GL_TEXTURE_2D, tex.normal);
    glActiveTexture(GL_TEXTURE5);
    glBindTexture(GL_TEXTURE_2D, tex.metallic);
    glActiveTexture(GL_TEXTURE6);
    glBindTexture(GL_TEXTURE_2D, tex.roughness);
    glActiveTexture(GL_TEXTURE7);
    glBindTexture(GL_TEXTURE_2D, tex.ao);
}