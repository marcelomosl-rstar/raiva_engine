#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#include <memory>


namespace Raiva {
	class RAIVA_API Log
	{
		public:
			static void Init();

			inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
			inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	

		private:
			static std::shared_ptr<spdlog::logger> s_CoreLogger;
			static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};
}

// Core Log Macros
#define RV_CORE_ERROR(...) ::Raiva::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RV_CORE_WARN(...)  ::Raiva::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RV_CORE_INFO(...)  ::Raiva::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RV_CORE_TRACE(...) ::Raiva::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RV_CORE_FATAL(...) ::Raiva::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client Log Macros
#define RV_ERROR(...) ::Raiva::Log::GetClientLogger()->error(__VA_ARGS__)
#define RV_WARN(...)  ::Raiva::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RV_INFO(...)  ::Raiva::Log::GetClientLogger()->info(__VA_ARGS__)
#define RV_TRACE(...) ::Raiva::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RV_FATAL(...) ::Raiva::Log::GetClientLogger()->fatal(__VA_ARGS__)

	