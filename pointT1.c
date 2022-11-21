#include<stdio.h>
#include <stdlib.h>
int main()
{
/*
int a = 1;
int b = 2;
int *p1 = &a;
int *p2 = &b;
printf("%d, %d", *p1, *p2);
p1 = p2;
*p1 = 3;
printf("%d, %d", a, b);
printf("%d, %d", *p1, *p2);
*/
/////////////////////////////////////// 
/*
int a[] = {1, 2, 3};
printf("%d, %d, %d\n", a[0], a[1], a[2]);
printf("%p, %p, %p\n", &a[0], &a[1], &a[2]);
int b[] = {1, 2, 3};
printf("%p, %p\n", a, b);
char* s1 = "Paul";
char* s2 = "Paul";
printf("%p, %p\n", s1, s2);
*/
//////////////////////////////////////
char s[100];
char* str=s;
char *str_n=s;
//char *strrev1=str;
printf("Input a string :");
	gets(str);
	//puts(str);
int i=0,j=0,k=0,n=0;
//int len=sizeof(str);

    //for(i=0;i<len;i++)
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			str_n[j]=str[i];
			j++;
     	}
    }
	str_n[j]='\0';
	printf("new1:%s\n",str_n);
 /*
 while(j>=0){
     strrev1[k++]=str_n[--j];    
    }
    strrev1[k]='\0';
*/
	//str=str_n;
//	for(i=0;i<sizeof(str_n);i++)
//	{
//		str[i]=str_n[j-1-i];
//	}
//	str[i]='\0';
   printf("\nnew2:"); 
   for(;j>=1;j--)
   printf("%c",str_n[j-1]);
   
   
return 0;	
 } 
