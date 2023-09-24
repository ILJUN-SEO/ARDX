#pragma once
#include "..\\IJ_SOURCE\\IJ_Script.h"


namespace IJ
{
	class PlayerScript : public Script
	{
	public:
		PlayerScript();
		virtual ~PlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;

	private:

	};
}
