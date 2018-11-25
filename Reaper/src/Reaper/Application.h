#pragma once

#include "Core.h"

namespace Reaper {

	class REAPER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

