#pragma once

#include "OrthographicCamera.h"

namespace Poto
{
	class Renderer2D
	{
	public:
		static void Init();
		static void ShutDown();

		static void BeginScene(const OrthographicCamera& camera);
		static void EndScene();

		// Primitives
		static void DrawQuad(const glm::vec2& Position, const glm::vec2& size, const glm::vec4& color);
		static void DrawQuad(const glm::vec3& Position, const glm::vec2& size, const glm::vec4& color);
	};

}
