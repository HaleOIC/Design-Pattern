#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"

int main()
{
    ConcreteSubject *subject = new ConcreteSubject();
    ConcreteObserver *observer1 = new ConcreteObserver(subject);
    ConcreteObserver *observer2 = new ConcreteObserver(subject);

    subject->Attach(observer1);
    subject->Attach(observer2);

    subject->SetState(10);
    subject->SetState(20);

    subject->Detach(observer1);

    subject->SetState(30);

    delete observer1;
    delete observer2;
    delete subject;

    return 0;
}
