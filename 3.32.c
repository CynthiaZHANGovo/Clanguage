#include<stdio.h>
int main()
{
	int num=1,i,j;
	printf("scan a num:(1~20)");
	scanf("%d",&num);
	while(num<1||num>20)
	{
	printf("scan a num:(1~20)");
	scanf("%d",&num);
	}
	for(i=0;i<num;i++)
	{
	for(j=0;j<num;j++)
	{
	printf("*");
    }
    printf("\n");
    }  
	return 0;
}
