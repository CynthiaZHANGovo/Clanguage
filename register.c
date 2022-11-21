#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[]="welcome to our world!";
	char arr2[]="                     ";
	
	int left=0;
	int right=strlen(arr1)-1;
	
	while(left<=right)
	{
		arr2[left]=arr1[left];
		printf("%s\n",arr2);
		sleep(1);
		system("cls");//Çå¿ÕÖ¸Áî 
		left++;
	}
	
	return 0;
}


