//Write a program to work out the intersection of two sets of 10 integers entered by the user. 
//Don't waste space by having unnecessarily large arrays 
//but don't worry about working out the smallest theoretical array size to use.

#include<stdio.h>
int main(void)
{
	int arr1[10],arr2[10],n=5;
	int i,j,k;
	for(j=0;j<n;j++)
	{
	printf("Enter arr1[%d]",j);
	scanf("%d",&arr1[j]);
	//printf("arr1[%d]",arr1[j]);
    }
   /////////////////////////////////////
    for(i=0;i<n;i++)
	{
	printf("Enter arr2[%d]",i);
	scanf("%d",&arr2[i]);	
    }
  	//dstinct///////////////////////////////
  		 for(i=0;i<n-1;i++)	
	{
        for(j=i+1;j<n;j++)	//从num[i]的下一位开始比较，直到最后一位
            if(arr1[i]==arr1[j])	//如果数字重复
            {
                for(k=j;k<n-1;++k)	//从num[j]开始，所有数字前移一位
                    arr1[k]=arr1[k+1];
                --n;              //数组长度-1
    		    --j;				//因为有++j，所以这里先减一下，否则num[i]比较的是移动之后的下一位，会漏掉一个数
   	   		}
   }
    ///////////////////////////////////// 
	 for(i=0;i<n-1;i++)	
	{
        for(j=i+1;j<n;j++)	//从num[i]的下一位开始比较，直到最后一位
            if(arr2[i]==arr2[j])	//如果数字重复
            {
                for(k=j;k<n-1;++k)	//从num[j]开始，所有数字前移一位
                    arr2[k]=arr2[k+1];
                --n;              //数组长度-1
    		    --j;				//因为有++j，所以这里先减一下，否则num[i]比较的是移动之后的下一位，会漏掉一个数
   	   		}
   }
    /////////////////////////////////////   
    for(j=0;j<n;j++){
    for(i=0;i<n;i++)
	{
	if(arr1[j]==arr2[i])
	{
		printf("%d\n",arr1[j]);
	}	
    }}
    
}
