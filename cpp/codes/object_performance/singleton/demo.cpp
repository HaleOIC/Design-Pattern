#include "Singleton.hpp"
#include <iostream>

int main()
{
    // Access the singleton instance
    Singleton &instance = Singleton::getInstance();

    // Use the singleton instance
    instance.singletonOperation();

    // Retrieve data from the singleton
    int data = instance.getSingletonData();
    std::cout << "Singleton data: " << data << std::endl;

    return 0;
}
