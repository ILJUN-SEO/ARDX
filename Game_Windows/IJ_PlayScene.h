#pragma once
#include "..\\IJ_SOURCE\\IJ_Scene.h"


namespace IJ
{
	class PlayScene : public Scene
	{
	public:
		PlayScene();
		virtual ~PlayScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;

	private:

	};
}
