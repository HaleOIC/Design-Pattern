#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <mutex>

class Singleton
{
  public:
    static Singleton &getInstance()
    {
        if (uniqueInstance == nullptr) {
            std::lock_guard<std::mutex> lock(mutex_);
            if (uniqueInstance == nullptr) {
                uniqueInstance = new Singleton();
            }
        }
        return *uniqueInstance;
    }

    // Example operations
    void singletonOperation()
    {
        // Operation code here
    }

    int getSingletonData() const
    {
        return singletonData;
    }

  private:
    Singleton() : singletonData(0) {} // Private constructor
    ~Singleton() = default;
    Singleton(const Singleton &) = delete;            // Delete copy constructor
    Singleton &operator=(const Singleton &) = delete; // Delete assignment operator

    static Singleton *uniqueInstance;
    static std::mutex mutex_;
    int singletonData;
};

// Define static members
Singleton *Singleton::uniqueInstance = nullptr;
std::mutex Singleton::mutex_;

#endif // SINGLETON_HPP
