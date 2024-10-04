#ifndef TAXSTRATEGY_H
#define TAXSTRATEGY_H

#include <iostream>

using namespace std;

// Define the strategy interface
class TaxStrategy
{
  public:
    virtual double calculateTax(const double &) = 0;
    virtual ~TaxStrategy() {}
};

// Concrete strategy for China
class CNTax : public TaxStrategy
{
  private:
    double alpha = 0.3;

  public:
    virtual double calculateTax(const double &totalMoney) override
    {
        return totalMoney * alpha;
    }
};

// Concrete strategy for the USA
class USTax : public TaxStrategy
{
  private:
    double alpha = 0.18;

  public:
    virtual double calculateTax(const double &totalMoney) override
    {
        return totalMoney * alpha;
    }
};

// Concrete strategy for Japan
class JPTax : public TaxStrategy
{
  private:
    double alpha = 0.16;

  public:
    virtual double calculateTax(const double &totalMoney) override
    {
        return totalMoney * alpha;
    }
};

// Concrete strategy for Germany
class DETax : public TaxStrategy
{
  private:
    double alpha = 0.43;

  public:
    virtual double calculateTax(const double &totalMoney) override
    {
        return totalMoney * alpha;
    }
};

#endif
