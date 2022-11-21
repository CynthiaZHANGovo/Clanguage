#include<stdio.h>
int main()
{
	float sales=1,salary;

	do
	{
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f",&sales);
    salary=200+sales*0.09;
    if(sales==-1)
    {
    break;
	}
	else
    printf("Salary is: $%.2f\n",salary);
	}while(sales!=-1);	

	return 0;
}
