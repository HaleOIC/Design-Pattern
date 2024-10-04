#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP

class Prototype {
public:
    virtual Prototype* clone() const = 0;
    virtual ~Prototype() = default;
};

#endif // PROTOTYPE_HPP
