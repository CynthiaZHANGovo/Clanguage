#include<stdio.h>

int main()
{
//	int arr[2][3]={1,2,3,4,5,6};
//	int arr1[2][3]={{1,2},{3,4},{5,6}};

    int arr[][4]={{1,2},{3,4},{5,6}};
    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
	    for(j=0;j<4;j++)
    	{
    		printf("%d",arr[i][j]);
    	    //printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
	    }
	    printf("\n"); 
    }
	
	return 0; 
 } 
