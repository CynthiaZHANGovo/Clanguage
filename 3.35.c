#include<stdio.h>
#include<math.h>
int main()
{
	int num,n=10,i=0,sum=0,mod,num1;
	do
	{
	printf("Input an integer (5 digits or fewer) containing only 0s and 1s (i.e., a ¡°binary¡± integer): ");
	scanf("%d",&num);
	num1=num;
	}while(num<1||num>11111);
	for(;n<=num;)
	{
	mod=num1%10;	
	num1=num1/10;
	sum+=mod*pow(2,i);
	n=n*10;
	i++;
	//printf("%d\n",sum);
	}
	mod=num1%10;	
	sum+=num1*pow(2,i);
	printf("%d\n",sum);	
	return 0;
}
