#include "IJ_SceneManager.h"
#include "IJ_ResourceManager.h"
#include "IJ_GameObject.h"
#include "IJ_Transform.h"
#include "IJ_MeshRenderer.h"


namespace IJ
{
	Scene* SceneManager::mActiveScene = nullptr;
	std::map<std::wstring, Scene*> SceneManager::mScenes = {};

	void SceneManager::Initialize()
	{}

	void SceneManager::Update()
	{
		mActiveScene->Update();
	}

	void SceneManager::LateUpdate()
	{
		mActiveScene->LateUpdate();
	}

	void SceneManager::Render()
	{
		mActiveScene->Render();
	}

	Scene* SceneManager::LoadScene(const std::wstring name)
	{
		std::map<std::wstring, Scene*>::iterator iter
			= mScenes.find(name);

		if (iter == mScenes.end())
			return nullptr;

		mActiveScene = iter->second;
		return iter->second;
	}
}