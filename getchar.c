//int main()
//{
//	int ch=0;
//	//ctrl+z=getchar �Ͷ�ȡ����
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
	//��������
    //	getchar();//����'\n' 
    //
    //����������еĶ���ַ� 
//	int tmp=0;
//	while((tmp=getchar())!='\n')
//	{
//		;
//	 } 
	
//	int ch=getchar();
//getchar ���뺯�� 1234\n �س�������ʱ�Դ�ת���ַ�\n 
    
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

//if(strcmp(password,"1232123")==0) �����Ƚ������ַ�������ʹ��==��Ӧ����strcmp 
