#include "rvpch.h"
#include "Application.h"
#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"
#include <GLFW/glfw3.h>


namespace Raiva {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	// Constructor
	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	//Destructor
	Application::~Application() {}

	void Application::OnEvent(Event& e) {

		EventDispatcher dispatcher(e);

		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));


		RV_CORE_TRACE(e.ToString());
	}

	// "Main" Function -> The function responsible for starting the Engine
	void Application::Run() {

		while (m_Running) {

			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}

	bool Application::OnWindowClose(WindowCloseEvent& e) {

		m_Running = false;
		return true;
	}
};