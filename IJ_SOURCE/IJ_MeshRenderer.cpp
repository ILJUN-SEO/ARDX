#include "IJ_MeshRenderer.h"
#include "IJ_GameObject.h"
#include "IJ_Transform.h"


namespace IJ
{
	MeshRenderer::MeshRenderer()
		: Component(COMPONENTTYPE::MESH)
	{}

	MeshRenderer::~MeshRenderer()
	{}

	void MeshRenderer::Initialize()
	{}

	void MeshRenderer::Update()
	{}

	void MeshRenderer::LateUpdate()
	{}

	void MeshRenderer::Render()
	{
		GetOwner()->GetComponent<Transform>()->SetConstantBuffer();

		mShader->Update();
		mMesh->Render();
	}
}