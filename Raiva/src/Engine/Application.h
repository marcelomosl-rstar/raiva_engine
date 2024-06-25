#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Raiva {

	class RAIVA_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
	};

	// to be defined in the Client ??? what ever that means.
	Application* CreateApp();
}