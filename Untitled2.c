#include<stdio.h>
int main() 
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int *pa=arr;
	//printf("%p\n",&arr);	
	printf("%d\n",*pa);
	printf("%d\n\n",*pa+9);
	
	printf("%d\n",pa);
	printf("%d\n",pa+9);
	printf("%d\n\n",(&pa+9)-&pa);	
	
	printf("%d\n",&arr[9]);
	printf("%d\n",&arr[0]);
	printf("%d\n\n",&arr[9]-&arr[0]);
	
	printf("%p\n",pa);
	printf("%p\n",pa+9);
	printf("%p\n\n",(&pa+9)-&pa);
		
	//printf("%p\n",&pa);
	return 0;
}
