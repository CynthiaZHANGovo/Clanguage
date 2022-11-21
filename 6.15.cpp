//Write a program to work out the intersection of two sets of 10 integers entered by the user. 
//Don't waste space by having unnecessarily large arrays 
//but don't worry about working out the smallest theoretical array size to use.

#include<stdio.h>
int main(void)
{
	int arr1[10],arr2[10];
	int i=0;
	for(i=0;i<10;i++)
	{
	printf("Enter a[%d]",i);
	scanf("%d",&arr1[i]);	
    }
    for(i=0;i<10;i++)
	{
	printf("Enter a[%d]",i);
	scanf("%d",&arr2[i]);	
    }
    for(j=0;j<10;j++){

    for(i=0;i<10;i++)
	{
	if(arr1[j]==arr2[i])
	{
		printf(arr1[j]);
	}	
    }}
}
