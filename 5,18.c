#include<stdio.h>
int isEven(int x);
int main()
{
    int j,i,n,a[100];
    for(j=0;j<2;j++)
    {
		printf("n");
        //scanf("%d",a+i);
        scanf("%d",&a[i]);  
    }
    
   //scanf("%d",&a[i])  ;   
	for(i=0;i<j;i++){
		n=a[i];
		printf("isEven?=%d",isEven(n));
	}
	return 0;
}

int isEven(int x){
	if(x%2==0)
	return 1;
	else
	return 0;
}
