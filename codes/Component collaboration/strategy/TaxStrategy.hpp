#ifndef TAXSTRATEGY_H
#define TAXSTRATEGY_H

#include <iostream>

using namespace std;

class TaxStrategy{
public:
	virtual double tex_calculate(const double&) = 0;
	~TaxStrategy() {}
};


/** just simulate the tex calculation by just using the linear function*/
class CNTex: public TaxStrategy{
private:
	double alpha = 0.3;
public:
	virtual double tex_calculate(const double& tot_money) {
		return tot_money * alpha;
	}
};

class USTex: public TaxStrategy {
private:
	double alpha = 0.18;
public:
	virtual double tex_calculate(const double& tot_money) {
		return tot_money * alpha;
	}
};

/** extension part**/
class JPTex: public TaxStrategy {
private:
	double alpha = 0.16;
public:
	virtual double tex_calculate(const double& tot_money) {
		return tot_money * alpha;
	}
};

class DETex: public TaxStrategy {
private:
	double alpha = 0.43;
public:
	virtual double tex_calculate(const double& tot_money) {
		return tot_money * alpha;
	}
};


#endif 