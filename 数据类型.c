#include <stdio.h>

int main() 
{
	printf("hello world\n");
	printf("hihi\n");
	
	char ch = 'a'; //字符类型 
	int age=20; //整形
	short num =10;//短整型 long / long long
	float weight=55.5;//单精度浮点型
	double d=0.0;//双精度浮点型 
	
	printf("%d\n",199);
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}
