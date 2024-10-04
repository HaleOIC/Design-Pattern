/**
 * The Factory Method design pattern provides an interface for creating objects 
 * in a superclass but allows subclasses to alter the type of objects that will be created. 
 * It defines a method, known as the factory method, that subclasses override to produce objects. 
 * This pattern promotes loose coupling by eliminating the need to bind application-specific classes
 *  into the code, making the code more flexible and extensible.
 */
#include <iostream>
#include <memory>

#include "ConcreteCreator.hpp"
#include "Creator.hpp"

// Main
int main()
{
    std::unique_ptr<Creator> creator = std::make_unique<ConcreteCreator>();
    creator->anOperation();
    return 0;
}
