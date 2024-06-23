#include <Raiva.h>

class Sandbox : public Raiva::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Raiva::Application* Raiva::CreateApp()
{
	return new Sandbox();
}
