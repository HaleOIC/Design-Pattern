#ifndef IMPLEMENTOR_HPP
#define IMPLEMENTOR_HPP

// Implementor
class Implementor {
public:
    virtual void OperationImpl() = 0;
    virtual ~Implementor() = default;
};

#endif // IMPLEMENTOR_HPP