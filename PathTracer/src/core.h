#pragma once
#ifdef TRACER_PLATFORM_WINDOWS
	#ifdef TRACER_BUILD_DLL
		#define TRACER_API __declspec(dllexport)
	#else
		#define TRACER_API __declspec(dllimport)
	#endif // TRACER_BUILD_DLL
#endif // TRACER_PLATFORM_WINDOWS
