#pragma once

#ifdef RV_PLATFORM_WINDOWS

extern Raiva::Application* Raiva::CreateApp();

int main(int argc, char** argv ) {

	Raiva::Log::Init();
	RV_CORE_WARN("Raiva Engine is up and Running!");
	RV_INFO("Client INFO log");

	auto app = Raiva::CreateApp();	

	app->Run();

	delete app;
}


#endif
