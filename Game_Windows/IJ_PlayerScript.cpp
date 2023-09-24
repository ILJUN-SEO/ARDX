#include "IJ_PlayerScript.h"
#include "IJ_GameObject.h"
#include "IJ_Transform.h"
#include "IJ_Time.h"


namespace IJ
{
	PlayerScript::PlayerScript()
	{}

	PlayerScript::~PlayerScript()
	{}

	void PlayerScript::Initialize()
	{}

	void PlayerScript::Update()
	{
		GameObject* obj = GetOwner();
		Transform* tr = obj->GetComponent<Transform>();
		Vector3 pos = tr->GetPosition();
		pos.x -= 0.1f * Time::DeltaTime();
		tr->SetPosition(pos);
	}

	void PlayerScript::LateUpdate()
	{}

	void PlayerScript::Render()
	{}
}