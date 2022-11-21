//int main()
//{
//	int ch=0;
//	//ctrl+z=getchar 就读取结束
//	
//	while ((ch=getchar())!="EOF")
//	{
//		putchar(ch);
//	} 
//	return 0;
//}
#include<stdio.h>
int main()
{
	char password[20]={0},repassword[20]={0};
	printf("Enter your password:>\n");
	scanf("%s",password);
	
	int i;
	for(i=0;i<3;i++)
//	while(i<=3)
{

	
	printf("Confirm your password:>\n");
	//清理缓冲区
    //	getchar();//处理'\n' 
    //
    //清除缓冲区中的多个字符 
//	int tmp=0;
//	while((tmp=getchar())!='\n')
//	{
//		;
//	 } 
	
//	int ch=getchar();
//getchar 输入函数 1234\n 回车键摁下时自带转义字符\n 
    
	scanf("%s",repassword);
	
	if(strcmp(repassword,password)==0)     
//	if(ch=='Y')
	{
	printf("Success!\n");
	break;
    }
	else
	{
	printf("Fault\n");
	}
}
    if(i==3)
    {
    printf("Fault to set your password:<\n");
	}
	return 0;
}

//if(strcmp(password,"1232123")==0) 用来比较两个字符串，不使用==，应该用strcmp 
