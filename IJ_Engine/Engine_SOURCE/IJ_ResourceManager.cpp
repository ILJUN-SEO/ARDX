#include "IJ_ResourceManager.h"


namespace IJ
{
	std::map<std::wstring , Resource*> ResourceManager::mResources;

	void ResourceManager::Release()
	{
		std::map<std::wstring , Resource*>::iterator iter = ResourceManager.begin();
		for ( ; iter != mResources.end(); ++iter )
		{
			delete iter->second;
			iter->second = nullptr;
		}
	}
}