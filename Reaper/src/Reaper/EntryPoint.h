#pragma once

#ifdef RP_PLATFORM_WINDOWS

extern Reaper::Application* Reaper::CreateApplication();

int main(int argc, char** argv)
{
	Reaper::Log::Init();
	RP_CORE_WARN("Initilized Log!");
	int a = 5;
	RP_INFO("Hello! var={0}", a);
    auto app = Reaper::CreateApplication();
	app->Run();
	delete app;
}

#endif
