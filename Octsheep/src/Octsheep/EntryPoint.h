#pragma once
#ifdef OC_PLATFORM_WINDOWS

extern Octsheep::Application* Octsheep::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Octsheep::CreateApplication();
	app->Run();
	delete app;
}
#endif // OC_PLATFORM_WINDOWS
