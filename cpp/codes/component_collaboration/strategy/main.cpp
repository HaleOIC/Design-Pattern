#include "TaxContext.hpp"
#include "TaxStrategy.hpp"
#include <iostream>

int main()
{
    // Create specific tax strategies
    CNTax cnTax;
    USTax usTax;
    JPTax jpTax;
    DETax deTax;

    // Create a context with a specific strategy
    TaxContext context(&cnTax);

    double totalMoney = 1000.0;

    // Calculate tax using the current strategy
    cout << "CN Tax: " << context.calculateTax(totalMoney) << endl;

    // Change strategy to US Tax
    context.setStrategy(&usTax);
    cout << "US Tax: " << context.calculateTax(totalMoney) << endl;

    // Change strategy to JP Tax
    context.setStrategy(&jpTax);
    cout << "JP Tax: " << context.calculateTax(totalMoney) << endl;

    // Change strategy to DE Tax
    context.setStrategy(&deTax);
    cout << "DE Tax: " << context.calculateTax(totalMoney) << endl;

    return 0;
}
