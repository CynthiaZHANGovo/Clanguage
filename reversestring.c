#include<stdio.h>

int my_strlen(char *str) //strlen
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char *str)
//{
//	int left=0;
//	int right=my_strlen(str)-1;
//	
//	while(right>left)
//	{
//	char a;
//	a=str[right];  //  or a=*(str+right);  they are the same
//	str[right]=str[left];
//	str[left]=a;
//	right--;
//	left++;
//    } 
//}

void reverse_string(char *str)
{
	char tmp=*str;
	int len=my_strlen(str);
	*str=*(str+len-1);
	*(str+len-1)='\0';

	if(my_strlen(str+1)>=2)
	{
	reverse_string(str+1);
	}
	*(str+len-1)=tmp;
}


int main()
{
 char arr[]="abcdef";
 reverse_string(arr);
 
 printf("%s\n",arr);//fedcba 
 
 return 0;	
} 
