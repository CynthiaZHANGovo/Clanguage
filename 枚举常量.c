#include<stdio.h>

enum Sex
{
	MALE,  //MALE=3 ����ֵ��3��4��5 
	FEMALE,
	SECRET
};
int main()
{
	//enum Sex s=MALE; sΪ�����ֵ 
	//MALE=3; Erro
	printf("%d\n%d\n%d\n",MALE,FEMALE,SECRET);
	
	return 0;
 } 
