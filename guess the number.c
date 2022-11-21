#include<stdio.h>
#include <stdlib.h>
void menu()
{
	printf("**************************\n");
	printf("**************************\n");
	printf("******** 1.New Game  *****\n");
	printf("********             *****\n");
	printf("******** 0.Exist     *****\n");
	printf("**************************\n");
	printf("**************************\n");
 } 
 
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

void game()
{
	int ans=0,a=0,srand;
	srand = ((unsigned)time(NULL));
	//随机生成一个数 
    a = rand()%101;
    //取余数101使得在1~100 
	printf("Give me a number between 0 to 100:>\n");
	scanf("%d",&ans);
	while(a!=ans)
	{
	if(a>ans)
	{
	printf("less:<\n");
	scanf("%d",&ans);
	}
    else
    {
	printf("bigger:<\n");
	scanf("%d",&ans);
	}	
    }
    printf("YOU GOT IT!!!:>\n");
    printf("BACK TO MENU\n");
    sleep(5);
}
 
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

int main()
{
	int input=0;
	
	do
{
	menu();
	
	scanf("%d",&input);
	switch(input)
    {
	case 1:
	{
		printf("Begin!!\n");
		game();
		break;
	}
	case 0:
	{
		printf("Bye~\n");
		break;
	}
	default:
	{
		printf("Erro:<\n");
	}
    }
}while(input);
	return 0;
}
