#ifndef BUILDER_HPP
#define BUILDER_HPP

class Builder
{
  public:
    virtual void buildPart() = 0;
    virtual ~Builder() = default;
};

#endif // BUILDER_HPP
