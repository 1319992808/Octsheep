#pragma once
#include "Core.h"

namespace Octsheep {

	class OC_API Application
	{
	public:
		Application();
		virtual ~Application();
		virtual void Run();
	};
	//To be defined in client
	Application* CreateApplication();
}
