#include<stdio.h>
int main() 
{
    int a=1,i;
    for(i=1;i<=100;i++)
{
	if(a%2==0)
    a++;
    else
	{
    printf("%d\n",a);
    a++;
    } 
}
	return 0;
}
