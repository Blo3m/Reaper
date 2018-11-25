#include <Reaper.h>

class Sandbox : public Reaper::Application 
{

public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}

};

Reaper::Application* Reaper::CreateApplication()
{
	return new Sandbox();
}