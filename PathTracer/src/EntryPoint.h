#pragma once

#ifdef TRACER_PLATFORM_WINDOWS

extern PathTracer::Application* PathTracer::CreateApplication();
int main(int argc, char** argv) {
	auto app = PathTracer::CreateApplication();
	app->Run();
	delete app;
}
#endif // TRACER_PLATFORM_WINDOWS
