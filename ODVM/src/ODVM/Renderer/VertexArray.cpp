#include "odvmpch.h"
#include "VertexArray.h"

#include "Platform/OpenGl/OpenGLVertexArray.h"

#include "Renderer.h"

namespace ODVM
{
	VertexArray* VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None: ODVM_CORE_ASSERT(false, "RendererAPI::API::None is not supported"); return nullptr;
			case RendererAPI::API::OpenGL: return new OpenGLVertexArray();
		}

		ODVM_CORE_ERROR("Unknown API");
		return nullptr;

	}
}

