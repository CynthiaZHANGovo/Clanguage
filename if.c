#include<stdio.h>
int main()
{
	int ans,a=0;
	while(ans<3)
	{
	printf("1 or 2 ? \nYOUR ANSWER:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("1\n");
	}
	else
	{
		printf("2\n");
	}
    }
	printf("3");
	
	while(a<5)
	{
		printf("%d\n",a);
		a++;
	}
	printf("fine");
	
	
	
	return 0;
}
