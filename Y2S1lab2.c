////////////////////2.31//////////////////////
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	float num,squ,cube;
//	printf("a num pls: ");
//	scanf("%f",&num);
//	squ=pow(num,2);
//	cube=pow(num,3);
//	printf("square is %f\n",squ);
//	printf("cube is %f\n",cube);
// } 
//////////////////////////////////////////////
////////////////////2.20//////////////////////

//////////////////////////////////////////////
////////////////////2.30//////////////////////
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int num=0,n=0; 
//	printf("a num pls: ");
//	scanf("%d",&num);
//	while(num>10)
//	{
//		n=num%10;
//		num=num/10;
//		printf("%d",n);
//	}	
//}
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num=0,a=0,n=1; 
	printf("a num pls: ");
	scanf("%d",&num);
	while(n>0)
	{
		a=pow(10,sizeof(num)-1);
		printf("%d\n",a);
		n=num/a;
		num=num-n*a;
		printf("%d\n",n);
	}	
}

