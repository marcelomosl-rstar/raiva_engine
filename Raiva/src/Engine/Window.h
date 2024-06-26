#pragma once

#include "rvpch.h"
#include "Engine/Core.h"
#include "Engine/Events/Event.h"

namespace Raiva {
	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Raiva Engine",
			unsigned int width = 1280, unsigned int height = 720)
			: Title(title), Width(width), Height(height) {};

	};

	class RAIVA_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {};

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;


		// Window Attributes	

		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVsync(bool enabled) = 0;
		virtual bool isVsync() const = 0;


		static Window* Create(const WindowProps& props = WindowProps());
	};
}

