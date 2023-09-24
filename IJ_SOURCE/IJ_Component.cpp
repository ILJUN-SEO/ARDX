#include "IJ_Component.h"


namespace IJ
{
	Component::Component(COMPONENTTYPE type)
		: mType(type)
		, mOwner(nullptr)
	{}

	Component::~Component()
	{}
}