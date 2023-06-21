# Design Pattern

There are a lot of codes written by myself, but the key thinking is not understood, sometime, we may make the codes longer and harder to understand and mountain with the requirement taking place in the designing process. the `design pattern` is to simplify the process and make it easy to write the better codes for mountain and changing.

There are twenty three kinds of design patterns and we can make some classifications:

- Component collaboration
  - `Template Method`
  - `Observer / Event`
  - `Strategy`
- Single responsibility
  - `Decorator`
  - `Bridge`
- object creation
  - `Factory Method`
  - `Abstract Factory`
  - `Prototype`
  - `Builder`
- Object performance
  - `Singleton`
  - `Flyweight`
- Interface isolation
  - `Facade`
  - `Proxy`
  - `Mediator`
  - `Adapter`
- status change
  - `Memento`
  - `State`
- data structure
  - `composite`
  - `Iterator`
  - `Chain of Responsibility`
- behavior change
  - `command`
  - `visitor`
- Domain Issues
  - `Interpreter`

Each part of the design pattern has a corresponding code example, and the useful reference is [:sailboat:refer](https://www.bilibili.com/video/BV1Yr4y157Ci/)



## The rules for object-oriented-program design

1. Dependency Inversion Principle
   - High-level modules (stability) should not depend on low-level modules (changes), both should depend In abstraction (stability).
   -  Abstraction (stability) should not depend on implementation details (variations), implementation details should depend on Abstract (stable)
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

