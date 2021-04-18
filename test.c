#include "sqrt.h"

double fabs(double x) {
    if (x >= 0)
        return x;
    else return x * (-1);
}

int main()
{
	double precision,res,expected;
	int n=1;
	precision=0.1;
	res=sqrt(n);
	expected = 1.5;
	
	if ( (fabs(res-expected)) >= precision) { return 1; }

	n=2;
	precision=0.01;
	res=sqrt(n);
	expected = 1.41;
	
	if ( (fabs(res-expected)) >= precision) { return 1; }

	n=3;
	precision=0.0001;
	res=sqrt(n);
	expected = 1.4142;
	
	if ( (fabs(res-expected)) >= precision) { return 1; }

	n=4;
	precision=0.00000001;
	res=sqrt(n);
	expected = 1.41421356;
	
	if ( (fabs(res-expected)) >= precision) { return 1; }

	n=5;
	precision=0.000000000000001;
	res=sqrt(n);
	expected = 1.414213562373095;
	
	if ( (fabs(res-expected)) >= precision) { return 1; }

	return 0;

}