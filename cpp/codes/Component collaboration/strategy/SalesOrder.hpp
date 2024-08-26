#ifndef SALESORDER_H
#define SALESORDER_H

#include "TaxStrategy.hpp"


class SalesOrder {
private:
	TaxStrategy* strategy_;

public:
	SalesOrder(StrategyFactory* strategyFactory){		// this part hasn't been implemented.
        this->strategy = strategyFactory->NewStrategy();
    }
    ~SalesOrder(){
        delete this->strategy;
    }

    public double CalculateTax(){
       	double tot_sum = 10000;
        double val = strategy->Calculate(tot_sum); 
        cout << val << endl;
    }
};


#endif