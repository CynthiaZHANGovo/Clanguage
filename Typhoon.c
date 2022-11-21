#include<stdio.h>
void Result(int speed)
 {
 	if(speed<=62)
 	printf("Tropical Depression \n");
 	else if(speed>62&&speed<=118)
 	printf("Typhoon\n");
 	else if(speed>118&&speed<=156)
 	printf("Strong Typhoon\n");
 	else if(speed>156&&speed<=192)
 	printf("Very Strong Typhoon\n");
 	else
 	printf("Violent Typhoon\n");
 }
int main()
{
	int speed;char*a;
	printf("Pls enter the wind speed(km/h):");
	scanf("%d",&speed);
	Result(speed,*a);
	printf("%s",a);
	return 0;
 } 
