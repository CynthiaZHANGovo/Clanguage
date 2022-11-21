#include<stdio.h>
int main()
{
	int num=10,i,j,n=1,max=1;
    for(i=0;i<max;i++)
    {
	for(j=0;j<max;j++)
	{
	printf("%d ",n);
	n++;
    }
    printf("\n");
    max++;
    if(num<max)
    break;
    }  
	return 0;
}
