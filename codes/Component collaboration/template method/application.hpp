#ifndef APPLICATION_H
#define APPLICATION_H

#include "library.hpp"

class Application: public Library {
public:
	// overload the function in the base class
	bool step2();
	void step4();


	// stable part
	Application();
	~Application();
};

bool Application::step2() {
	cout << "this is the overloaded function step2 in the variant part" << endl;
	return true;
}

void Application::step4() {
	cout << "this is the overloaded function step4 in the variant part" << endl;
}

Application::Application() {

}

Application::~Application() {

}

#endif