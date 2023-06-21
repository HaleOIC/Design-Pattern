#include "application.hpp"
#include "library.hpp"

using namespace std;

int main() {
	Library* lptr = new Application();

	lptr->run();

	return 0;
}