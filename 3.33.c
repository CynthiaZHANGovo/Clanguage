#include<stdio.h>
int main()
{
	int num=1,i,j;
	do
	{
	printf("scan a num:(1~20)");
	scanf("%d",&num);
	}while(num<1||num>20);
	for(i=1;i<=num;i++)
	{
	for(j=1;j<=num;j++)
	{
	if(j==1||j==num||i==1||i==num)
	printf("*");
	else
	printf(" ");
    }
    printf("\n");
    }  
	return 0;
}
