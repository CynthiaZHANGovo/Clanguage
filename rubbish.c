//cmd shutdown -s -t 60
// shutdown -a
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#inlcude<windows.h>

//int main() 
//{
//	//shutdown 
//	char input[20]={0};//input
//	system("shutdown -s -t 600");
////again:
//	printf("ATTENTION!!! Your computer will shut down in 1min unless an input of \"I m rubbish\"\n");
//    scanf("%s", input);
//    //string.h
//    if(strcmp(input,"I m rubbish")==0)
//    {
//    	system("shurdown -a");
//    	printf("congratulations!");
//	}
//	else
//	{
////		goto again;
//	}
//    return 0;
//}

int main() 
{

	char input[20]={0};
	system("shutdown -s -t 60");
again:
	printf("ATTENTION!!! Your computer will shut down in 1min unless an input of \"Iamrubbish\"\n");
    scanf("%s", input);

    if(strcmp(input,"Iamrubbish") == 0)
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
