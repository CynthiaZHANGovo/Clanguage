//#include<stdio.h>
//int main(int argc, char* argv[ ])
//{
//	int i;
//printf("argc=%d\n", argc);
//for(i=0; i<argc; i++)
//printf("%s\n", argv[i]);
//return 0;
//} 
/*
void swap(int* arg1, int* arg2) {
int* value = NULL;
printf("%d, %d\n", *arg1, *arg2);
value = arg1;
printf("%d, %d\n", *arg1, *arg2);
arg1 = arg2;
printf("%d, %d\n", *arg1, *arg2);
arg2 = value;
printf("%d, %d\n", *arg1, *arg2);
}
int main() {
int a = 1, b = 2;
printf("%d, %d",a, b);
printf("%p, %p\n", &a, &b);
swap(&a, &b);
printf("%d, %d",a, b);
printf("%p, %p\n", &a, &b);
}
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int s[100];
	int *str=s;
	int temp;
	printf("Input a string :");
	gets(s);
	puts(s);
	int i=0,j=0,k=0,n=0;
	
		for(i=1;str[i]!='\0';i++)
	{
		for(j=0;j<i;j++)
		{
		if(str[i]<str[j])
		{
			k=i;
	  while(k>j)
	    {
	  	temp=str[i];
        str[k]=str[k-1]; 
		k--;   
     	}
        }
    }
	}
    puts(str);
return 0;
}
