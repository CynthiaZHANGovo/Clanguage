#include<stdio.h>

enum Sex
{
	MALE,  //MALE=3 赋初值，3，4，5 
	FEMALE,
	SECRET
};
int main()
{
	//enum Sex s=MALE; s为定义的值 
	//MALE=3; Erro
	printf("%d\n%d\n%d\n",MALE,FEMALE,SECRET);
	
	return 0;
 } 
