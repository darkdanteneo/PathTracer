#pragma once
#include "core.h"

namespace PathTracer {
	class TRACER_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	}; 
	//implemented in sandbox
	Application* CreateApplication();
}