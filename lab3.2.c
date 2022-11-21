#include<stdio.h>
int main()
{
	int n=0,i=0,j=0,k=0;
	//int newn;
	int arr[30];
	//length of array
	do
	{
	printf("Enter number of marks:");
	scanf("%d",&n);
    }while(n<=0);
	//newn=n;
	//scan
	do
	{
	printf("Enter mark %d:",i+1);
	scanf("%d",&arr[i]);
	i++;
	}while(i<n);
	//bubble sort
	int temp=0;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
		if(arr[j]<arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		//if(j=newn-1)
		//newn--;
	}
    }
	
	for (i = 0; i<n; i++)
	{
	printf("%d\n", arr[i]);
    } 
	return 0;
}
