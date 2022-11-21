#include<stdio.h>
#include<math.h>
int main(void)
{
	int year=1;
	double origin=1000;
	double rate=0.05;
	double amount;
	for(;year<=10;year++)
	{
		amount=origin*pow(1+rate,year);
		printf("the amount of money is %.2f in the account at the end of %d year\n",amount,year);
	}
	return 0;
}
