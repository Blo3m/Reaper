#pragma once

#ifdef RP_PLATFORM_WINDOWS
	#ifdef RP_BUILD_DLL
		#define REAPER_API __declspec(dllexport)
	#else
		#define REAPER_API __declspec(dllimport)
	#endif
#else
	#error Reaper only support Windows!
#endif

#define BIT(x) (1 << x)