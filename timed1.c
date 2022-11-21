// 20412269 scyxz Xinyi ZHANG
#include<stdio.h>
#include<math.h>
int main() 
{

	int n=0,j,i,Seven=0,Sodd=0;
	int num,arr[30];
    printf("Enter number of values: ");
again:   
	scanf("%d",&num);
    if(num<=0) 
    {  
	printf("Invalid array length!\nEnter a positive number:");   
    goto again;
	}
	else
	{
	n=num; 
	//////////////////////////////////////////////////////////
	printf("Enter position %d value:",0);
	scanf("%d",&arr[0]);
	/////////////////////////////////////////////
	for(j=1;j<n;j++)
	{
	do
	{
	printf("Enter position %d value:",j);
	scanf("%d",&arr[j]);
    }while(arr[j]<=arr[0]);
    }
////////////////////////////////////////////////////////////
    for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		    Seven++;
		    printf("%d\n",arr[i]);	
	    }
	    else
	    {
	    	Sodd++;
		}
    }
	printf("%d even numbers and %d odd numbers.",Seven,Sodd);
////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
	return 0;
}
}

