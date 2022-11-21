#include<stdio.h>

int is_leap_year(int a)
{
//	if((a%4==0) &&(a%100!=0) ||(a%400==0))	
//	return 1;	
//	else
//	return 0;
return((a%4==0) &&(a%100!=0) ||(a%400==0));
}

int main()
{
	int y=0;
	for(y=1000;y<=2000;y++)
	{
		if(is_leap_year(y)==1)
		printf("%d\n",y);
	}
	return 0;
}
