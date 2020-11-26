#include <PathTracer.h>
#include <iostream>

class Sandbox : public PathTracer::Application {
public:
	Sandbox() {
		std::cout << "sandbox\n";
	}
	~Sandbox() {

	}
};

PathTracer::Application* PathTracer::CreateApplication() {
	return new Sandbox();
}