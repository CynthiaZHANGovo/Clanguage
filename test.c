//cmd shutdown -s -t 60
// shutdown -a
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#inlcude<windows.h>

int main() 
{

	char input[20]={0};
	system("shutdown -s -t 60");
again:
	printf("ע�⣡��ĵ��Խ���60���ڹػ���������\"������\"\n");
    scanf("%s", input);

    if(strcmp(input,"������") == 0)
    {
    	system("shutdown -a");
    	printf("congratulations!");
    	//break;
	}
	else
	{
		goto again;
	}
    return 0;
}
