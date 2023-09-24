#include "IJ_Transform.h"
#include "IJ_GraphicsDevice_DX11.h"
#include "IJ_Renderer.h"

namespace IJ
{
	Transform::Transform()
		: Component(COMPONENTTYPE::TRANSFORM)
	{}

	Transform::~Transform()
	{}

	void Transform::Initialize()
	{}

	void Transform::Update()
	{}

	void Transform::LateUpdate()
	{}

	void Transform::Render()
	{}

	void Transform::SetConstantBuffer()
	{
		ConstantBuffer* cb = renderer::constantBuffers[(UINT)graphics::eCBType::Transform];

		renderer::TransformCB data = {};
		data.pos = mPosition;
		data.scale = mScale;
		cb->SetData(&data);

		cb->Bind(graphics::eShaderStage::VS);
	}
}