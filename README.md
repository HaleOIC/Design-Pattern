# Design Pattern

There are a lot of codes written by myself, but the key thinking is not understood, sometime, we may make the codes longer and harder to understand and mountain with the requirement taking place in the designing process. the `design pattern` is to simplify the process and make it easy to write the better codes for mountain and changing.

## Creational Patterns

- Abstract Factory: Provide an interface for creating families of related or dependent objects without specifying their concrete classes.
- Builder: Separate the construction of a complex object from its representation so that the same construction process can create different representations.
- Factory Method: Define an interface for creating an obje ct,but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
- Prototype: Specify the kinds of obj ectsto crea te using a prototypical instance, and create new objects by copying this prototype.
- Singleton: Ensure a class only has one instance, and provide a global point of access to it.

## Structural Patterns

- Adapter: Convert the interface of a class into another interface clients expect. Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.
- Bridge: Decouple an abstraction from its implementation so that the two canvary independently.
- Composite: Compose obje cts into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.
- Decorator: Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.
- Facade: Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interfa ce that makes the subsystem easier to use.
- Flyweight: Use sharing to support large numbers of fine-grained objects efficiently.
- Proxy: Provide a surrogate or placeholder for another object to control access to it.

## Behavioral Patterns

- Chain of Responsibility: Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the request along the chain until an object handles it.
- Command: Encapsulate a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.
- Interpreter: Given a language, define a represention for its grammar along with an interpreter that uses the representation to interpret sentences in the language.
- Iterator: Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
- Mediator: Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
- Memento: Without violating encapsulation, capture and externali ze an object's internal state so that the object can be restored to this state later.
- Observer: Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
- State: Allow an object to alter its behavior when its internal state changes. The object will appear to change its class.
- Strategy: Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.
- Template Method: Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm 's structure.
- Visitor: Represent an operation to be performed on the elements of an object structure. Visi tor lets you define a new operation without changing the classes of the elements on which it operates.

## The rules for object-oriented-program design

1. Dependency Inversion Principle
   - High-level modules (stability) should not depend on low-level modules (changes), both should depend In abstraction (stability).
   - Abstraction (stability) should not depend on implementation details (variations), implementation details should depend on Abstract (stable)
2. Open Closed Principle
   - Open to extensions, closed to changes.
   - Class modules should be extensible, but not modifiable
3. Single Responsibility Principle
   - A class should have only one reason for its change.
   - The direction of change implies class responsibility
4. Liskov Substitution Principle
   - Subclasses must be able to replace their base class (IS-A).
   - Inheritance expresses type abstraction
5. Interface Isolation Principle
   - Client programs should not be forced to rely on methods they do not use.
   - The interface should be small and complete.
6. Preference is given to object composition over class inheritance
   - Class inheritance is usually "white box multiplexing" and object composition is usually "black box reuse".
   - Inheritance destroys encapsulation to some extent, and the parent class of the child class has a high degree of coupling.
   - Object composition, on the other hand, only requires that the objects being grouped have a well-defined interface, coupling Low degree.
7. Package change point
   - Use encapsulation to create a boundary layer between objects, allowing designers to create a boundary layer between objects
   - Layers are achieved by modifying one side without adversely affecting the other **Loose coupling** between the seconds
8. Programming for interfaces, not implementations
   - Do not declare a variable type as a specific concrete class, but as an interface.
   - The client does not need to know the specific type of object, only what the object has Interface.
   - Reduce dependencies on various parts of the system, resulting in "high cohesion, loose coupling" type of design scheme.
