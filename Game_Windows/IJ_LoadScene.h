#pragma once
#include "..\\IJ_SOURCE\\IJ_SceneManager.h"
#include "IJ_PlayScene.h"


namespace IJ
{
	void InitializeScenes()
	{
		SceneManager::CreateScene<PlayScene>(L"PlayScene");

		SceneManager::LoadScene(L"PlayScene");
	}
}