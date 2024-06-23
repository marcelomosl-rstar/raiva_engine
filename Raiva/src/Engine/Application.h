#pragma once
#include "Core.h"

namespace Raiva {

	class RAIVA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in the Client ??? what ever that means.
	 Application* CreateApp();
}
