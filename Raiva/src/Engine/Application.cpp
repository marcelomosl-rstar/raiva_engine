#include "rvpch.h"
#include "Application.h"
#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Raiva {
	// Constructor
	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	//Destructor
	Application::~Application() {

	}
	// "Main" Function -> The function responsible for starting the Engine
	void Application::Run() {

		// Example of Event Listener Usage
		//WindowResizeEvent e(100, 100);
		//RV_TRACE(e.ToString());



		while (true) {
			m_Window->OnUpdate();
		}
	}

};