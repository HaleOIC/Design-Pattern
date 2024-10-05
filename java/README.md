# Design Pattern in JAVA

## Behavioral Pattern

### Template Method

Pattern provides a way to define the skeleton of an algorithm in the superclass while allowing subclasses to provide specific implementations for certain steps. This promotes code reuse and ensures that the overall algorithm structure remains consistent across different implementations.

The Template Method pattern should be used

- to implement the invariant parts of an algorithm once and leave it up to subclasses to implement the behavior that can vary.
- when common behavior among subclasses should be factored and localized in a common class to avoid code duplication. You first identify the differences in the existing code and then separate the differences into new operations. Finally, you replace the differing code with a template method that calls one of these new operations.
- to control subclasses extensions. You can define a template method that calls "hook" operations (see Consequences) at specific points, thereby permitting extensions only at those points.

Key points include:

- It allows flexibility in handling variations of sub-steps.
- It exemplifies the "Don't call us, we'll call you" inversion of control structure.
- The virtual methods called by the Template Method can have implementations or be abstract (pure virtual), but they are generally recommended to be set as protected methods.

### Strategy

Strategy method or Strategy Design Pattern, also known as Policy, defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

When to use Strategy Method:

- Many related classes differ only in their behavior. Strategies provide a way to configure a class with one of many behaviors.
- We need different variants of an algorithm. For example, you might define algorithms reflecting different space/time trade-offs. Strategies can be used when these variants are implemented as a class hierarchy of algorithms.
- An algorithm uses data that clients shouldn’t know about. Use the Strategy pattern to avoid exposing complex, algorithm-specific data structures.
- A class defines many behaviors, and these appear as multiple conditional statements in its operations. Instead of many conditionals, move related conditional branches into their own Strategy class.

key points include:

1. The Strategy pattern and its subclasses provide a series of reusable algorithms for components, allowing classes to easily switch between different algorithms at runtime as needed.
2. The Strategy pattern offers an alternative to conditional statements, effectively eliminating them and promoting decoupling. Code that contains numerous conditional statements often benefits from the application of the Strategy pattern.
3. If a Strategy object doesn't have instance variables, multiple contexts can share the same Strategy object, thereby reducing object overhead.



### Observer 

Observer method or Observer design pattern is also known as dependents and publish-subscribe. It defines a one-to-many dependency between objects so that when one objects so that when one object changes state, all its dependents are notified and updated automatically.

### When to use the Observer Method:

Use the Observer pattern in any of the following situations:

- When an abstraction has two aspects, one dependent on the other. Encapsulating these aspects in separate objects lets you vary and reuse them independently.
- When a change to one object requires changing others, and you don’t know how many objects need to be changed.
- When an object should be able to notify other objects without making assumptions about who these objects are.In other words, you don’t want these objects tightly coupled.

Key Points Summary:

- Using object-oriented abstraction, the Observer pattern allows us to independently change the target and observers, thereby achieving loose coupling between them.
- When the target sends notifications, it does not need to specify the observers; the notification (which can carry information as parameters) will automatically propagate.
- Observers decide for themselves whether to subscribe to notifications; the target object has no knowledge of this.
- The Observer pattern is a very common design pattern in event-based UI frameworks and is also an important component of the MVC pattern.



## Structural Pattern

### Decorator Pattern 

The Decorator Method or Decorator Design Patterns also known as a wrapper, it is attached with additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

### When to use Decorator Methodthe 

- To add responsibilities to individual objects dynamically and transparently, that is, without affecting other objects.
- For responsibilities that can be withdrawn.
- When extension by subclassing is impractical. Sometimes a large number of independent extensions are possible and would produce an explosion of subclasses to support every combination. Or a class definition may be hidden or otherwise unavailable for subclassing.

By employing composition rather than inheritance, the Decorator pattern enables the dynamic extension of an object's functionality at runtime. It allows for the extension of multiple functionalities as needed, avoiding the "lack of flexibility" and "proliferation of subclasses" issues associated with inheritance.

- The Decorator class exhibits an "is-a" relationship with the Component interface, meaning the Decorator class inherits the interface of the Component class. However, in implementation, it shows a "has-a" relationship through composition, as the Decorator class uses another Component class.
- The purpose of the Decorator pattern is not to solve the problem of "multiple inheritance due to subclass proliferation." Instead, the key application of the Decorator pattern is to address the "extension of the main class in multiple directions"—which is the essence of "decoration."

### Bridge Method

Bridge Method or Bridge Design Patterns also known as Handle/Body. Decouple an abstraction from its implementation so that the two can vary independently.

### When to use Bridge Method

- You want to avoid a permanent binding between an abstraction and its implementation. This might be the case,for example,when the implementation must be selected or switched at run-time.
- Both the abstractions and their implementations should be extensible by subclassing. In this case, the Bridge pattern lets you combine the different abstractions and implementations and extend them independently.
- Changes in the implementation of an abstraction should have no impact on clients; that is, their code should not have to be recompiled.
- You want to hide the implementation of an abstraction completely from clients.
- You have a proliferation of classes as shown earlier in the first Motivation diagram. Such a class hierarchy indicates the need for splitting an object into two parts. Rumbaugh uses the term “nested generalizations” to refer to such class hierarchies.
- You want to share an implementation among multiple objects(perhaps using reference counting), and this fact should be hidden from the client.

The Bridge pattern uses "composition relationships between objects" to decouple the inherent binding between abstraction and implementation, allowing them to vary independently along their respective dimensions. This means that both abstraction and implementation can be "subclassed" independently.

- The Bridge pattern sometimes resembles a multiple inheritance scheme, but multiple inheritance often violates the Single Responsibility Principle (i.e., a class should have only one reason to change) and tends to have poor reusability. The Bridge pattern is a better solution than multiple inheritance.
- The Bridge pattern is typically applied when there are "two very strong dimensions of change." Sometimes a class may have more than two dimensions of change, in which case an extended form of the Bridge pattern can be used.
