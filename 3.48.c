#include<stdio.h>
int main()
{
	int arr[3],num,temp,i=0;
	do
	{
	printf("Input four-digit integers: ");
	scanf("%d",&num);
	}while(num<0||num>9999);
    arr[0]=num/1000;	
    arr[1]=(num/100)%10;
    arr[2]=(num/10)%10;
    arr[3]=num%10;
    for(;i<4;i++)
    {
    if(arr[i]>=7)
    {
    	arr[i]-=7;
	}
	else
    {
    	arr[i]+=3;
	}
    }
	temp=arr[0];
	arr[0]=arr[2];	
	arr[2]=temp;
	temp=arr[1];
	arr[1]=arr[3];	
	arr[3]=temp;
    printf("%d%d%d%d",arr[0],arr[1],arr[2],arr[3]);
	return 0;
}
