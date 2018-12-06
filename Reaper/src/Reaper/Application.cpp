#include "rppch.h"
#include "Application.h"

#include "Reaper/Events/ApplicationEvent.h"
#include "Reaper/Log.h"

namespace Reaper {

	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run() {
		WindowsResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			RP_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			RP_TRACE(e);
		}

		while (true);
	}

}