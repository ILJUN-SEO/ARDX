#pragma once
#include "IJ_Enums.h"
#include "IJ_Entity.h"
#include "IJ_Layer.h"


namespace IJ
{
	class Scene :public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

		Layer* GetLayer(UINT index) { return&mLayers[index]; }
		void AddGameObject(GameObject* gameObject, UINT layerIndex);

	private:
		Layer mLayers[LAYER::MAX];
	};
}
