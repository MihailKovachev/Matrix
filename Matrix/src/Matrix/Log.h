#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Matrix
{
	class MATRIX_API Log
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

#define MX_CORE_FATAL(...)    ::Matrix::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define MX_CORE_ERROR(...)    ::Matrix::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MX_CORE_WARN(...)     ::Matrix::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MX_CORE_INFO(...)     ::Matrix::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MX_CORE_TRACE(...)    ::Matrix::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define MX_FATAL(...)         ::Matrix::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define MX_ERROR(...)         ::Matrix::Log::GetClientLogger()->error(__VA_ARGS__)
#define MX_WARN(...)          ::Matrix::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MX_INFO(...)          ::Matrix::Log::GetClientLogger()->info(__VA_ARGS__)
#define MX_TRACE(...)         ::Matrix::Log::GetClientLogger()->trace(__VA_ARGS__)
