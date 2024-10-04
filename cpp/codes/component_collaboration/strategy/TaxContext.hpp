#ifndef TAXCONTEXT_H
#define TAXCONTEXT_H

#include "TaxStrategy.hpp"

class TaxContext
{
  private:
    TaxStrategy *strategy;

  public:
    TaxContext(TaxStrategy *strategy) : strategy(strategy) {}

    void setStrategy(TaxStrategy *newStrategy)
    {
        strategy = newStrategy;
    }

    double calculateTax(const double &totalMoney)
    {
        return strategy->calculateTax(totalMoney);
    }
};

#endif
