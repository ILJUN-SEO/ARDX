#pragma once
#include "IJ_Enums.h"
#include "CommonInclude.h"
#include "IJ_Engine.h"
#include "IJ_Math.h"
#include "IJ_GraphicsDevice_DX11.h"

#include "IJ_Mesh.h"
#include "IJ_Shader.h"
#include "IJ_ConstantBuffer.h"


using namespace IJ::graphics;
using namespace IJ::enums;
using namespace IJ::math;

namespace IJ::renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	CBUFFER(TransformCB, CBSLOT_TRANSFORM)
	{
		Vector3 pos;
		int padd1;

		Vector3 scale;
		int padd2;
	};

	extern Mesh* mesh;
	extern Shader* shader;
	extern ConstantBuffer* constantBuffers[];

	// Initialize the renderer
	void Initialize();
	void Release();
}
