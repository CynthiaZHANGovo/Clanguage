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
        for(j=i+1;j<n;j++)	//��num[i]����һλ��ʼ�Ƚϣ�ֱ�����һλ
            if(arr1[i]==arr1[j])	//��������ظ�
            {
                for(k=j;k<n-1;++k)	//��num[j]��ʼ����������ǰ��һλ
                    arr1[k]=arr1[k+1];
                --n;              //���鳤��-1
    		    --j;				//��Ϊ��++j�����������ȼ�һ�£�����num[i]�Ƚϵ����ƶ�֮�����һλ����©��һ����
   	   		}
   }
    ///////////////////////////////////// 
	 for(i=0;i<n-1;i++)	
	{
        for(j=i+1;j<n;j++)	//��num[i]����һλ��ʼ�Ƚϣ�ֱ�����һλ
            if(arr2[i]==arr2[j])	//��������ظ�
            {
                for(k=j;k<n-1;++k)	//��num[j]��ʼ����������ǰ��һλ
                    arr2[k]=arr2[k+1];
                --n;              //���鳤��-1
    		    --j;				//��Ϊ��++j�����������ȼ�һ�£�����num[i]�Ƚϵ����ƶ�֮�����һλ����©��һ����
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
