#pragma once
#include "IJ_Component.h"
#include "IJ_Enums.h"
#include "IJ_Entity.h"
#include "IJ_Math.h"


namespace IJ
{
	class Script : public Entity
	{
	public:
		friend GameObject;

		Script();
		virtual ~Script();

		virtual void Initialize() = 0;
		virtual void Update() = 0;
		virtual void LateUpdate() = 0;
		virtual void Render() = 0;

		GameObject* GetOwner() { return mOwner; }
		void SetOwner(GameObject* obj) { mOwner = obj; }

	private:
		GameObject* mOwner;
	};
}
