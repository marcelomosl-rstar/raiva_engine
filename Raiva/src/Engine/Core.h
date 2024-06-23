#pragma once


#ifdef RV_PLATFORM_WINDOWS
	#ifdef RV_BUILD_DLL
		#define RAIVA_API __declspec(dllexport)
	#else
		#define RAIVA_API __declspec(dllimport)
	#endif
#else
	#error Raiva Engine only supports windows for now.
#endif