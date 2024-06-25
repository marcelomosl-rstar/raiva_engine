#pragma once
#include "Engine/Window.h"
#include <GLFW/glfw3.h>

namespace Raiva {


	class WindowsWindow : public Window {
	public:
		WindowsWindow(const WindowProps& props);

		virtual ~WindowsWindow();

		void OnUpdate() override;

		inline unsigned int GetWidth() const override { return m_Data.Width; }
		inline unsigned int GetHeight() const override { return  m_Data.Height; }

		inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }

		void SetVsync(bool enabled) override;
		bool isVsync() const override;
	private:
		virtual void Init(const WindowProps& props);
		virtual void ShutDown();

	private:
		GLFWwindow* m_Window;

		struct WindowData
		{
			std::string Title;
			unsigned int Width, Height;
			bool Vsync;


			EventCallbackFn EventCallback;
		};

		WindowData m_Data;

	};
}