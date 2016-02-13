#ifndef UIRENDERER_HPP
#define UIRENDERER_HPP

#include <string>

#include <radix/renderer/Renderer.hpp>
#include <radix/shader/Shader.hpp>

namespace glPortal {

class Renderer;
class Viewport;
class Entity;
class Portal;
class Scene;
class Texture;
class Font;

class UiRenderer {
public:
  static void render(Renderer &renderer);
  static void renderScreen(Renderer &renderer);
  static void renderHand(Renderer &renderer);
};

} /* namespace glPortal */

#endif /* UIRENDERER_HPP */