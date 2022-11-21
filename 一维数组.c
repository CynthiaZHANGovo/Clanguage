#include<stdio.h>

//&arr[0]=000000000062FDF0

//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	
//	return 0;
// } 
// 
 
 int main()
{
	int arr[10]={0};
    int*p=arr;//数组名是数组首元素的地址 
    int i=0;
    for(i=0;i<10;i++)
    {
	printf("%p\n",p);
	p++;
    }
	
	return 0;
 } 

