#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Reaper {
	class REAPER_API Log
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

// Core log macros
#define RP_CORE_TRACE(...)    ::Reaper::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RP_CORE_INFO(...)     ::Reaper::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RP_CORE_WARN(...)     ::Reaper::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RP_CORE_ERROR(...)    ::Reaper::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RP_CORE_FATAL(...)    ::Reaper::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define RP_TRACE(...)	      ::Reaper::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RP_INFO(...)	      ::Reaper::Log::GetClientLogger()->info(__VA_ARGS__)
#define RP_WARN(...)	      ::Reaper::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RP_ERROR(...)	      ::Reaper::Log::GetClientLogger()->error(__VA_ARGS__)
#define RP_FATAL(...)	      ::Reaper::Log::GetClientLogger()->fatal(__VA_ARGS__)
