#ifndef PROXY_HPP
#define PROXY_HPP

#include <iostream>

// Subject Interface
class Subject
{
  public:
    virtual void request() = 0;
    virtual ~Subject() = default;
};

// RealSubject
class RealSubject : public Subject
{
  public:
    void request() override
    {
        std::cout << "RealSubject: Handling request." << std::endl;
    }
};

// Proxy
class Proxy : public Subject
{
  public:
    Proxy() : realSubject_(nullptr) {}

    void request() override
    {
        if (!realSubject_) {
            realSubject_ = new RealSubject();
        }
        std::cout << "Proxy: Delegating request to RealSubject." << std::endl;
        realSubject_->request();
    }

    ~Proxy()
    {
        delete realSubject_;
    }

  private:
    RealSubject *realSubject_;
};

#endif // PROXY_HPP
