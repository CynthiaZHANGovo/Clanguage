#include<stdio.h>

void print_table(int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf("%d X %d = %d  ",i,j,i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n=0;
	scanf("%d",&n);//9
	print_table(n);
	
	
	return 0;
 } 
