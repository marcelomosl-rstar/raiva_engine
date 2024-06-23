#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

#include <iostream>
namespace Raiva {
	// Constructor
	Application::Application() {

	}

	//Destructor
	Application::~Application() {

	}
	// "Main" Function -> The function responsible for starting the Engine
	void Application::Run() {

		// Example of Event Listener Usage
		WindowResizeEvent e(100, 100);
		RV_TRACE(e.ToString());



		while (true);
	}

};