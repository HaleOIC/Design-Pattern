#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>

using namespace std;

class Library {
protected:
	/** stable part*/
	void step1();
	void step3();
	void step5();

	/* variant parts and can be realized by the user*/
	virtual bool step2() = 0;
	virtual void step4() = 0;

public:
	// stable skeleton
	Library();
	void run();

	// variant part
	virtual ~Library();

};


/** stable skeleton for run*/
void Library::run() {
	step1();

	if (step2()) {
		step3();
	}

	for (int i = 0; i < 4; i++) {
		step4();
	}

	step5();
}

/** functions in the stable parts as the member of the stable skeleton*/
void Library::step1() {
	cout << "this is the stable part step1 function " << endl;
}

void Library::step3() {
	cout << "this is the stable part step3 function " << endl;
} 

void Library::step5() {
	cout << "this is the stable part step5 function" << endl;
}


Library::Library() {

}

Library::~Library() {
	
}
#endif