#include<stdio.h>
//#include"game.h"
//#include <stdlib.h>

void game()
{
	int ROW,COL;
	TnitBoard();
}

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
 
 //��ʼ������ 
 void TnitBoard(char board[ROW][COL],int row, int col)
 {
 	int i=0;
 	int j=0;
 	for(i=0;i<row;i++)
 	{
 	    for(j=0;j<row;j++)
 	    {
 		  board[i][j]=' ';
	    }
 		
	 }
 }
 //��ӡ���� 
 void displayboard(char board[ROW][COL],int row, int col)
{
	int i=0;
	printf("");
	for(i=0;i<row;i++)
	{
		printf("%c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		printf("---|----|----\n");
	}
	
 } 
 
 void game()
 {
 	int ROW,COL;
 	
 	//�洢���� ��ά����
	char board[ROW][COL]; 
	
	//��ʼ������ - ��ʼ���ո�
	TnitBoard(board,ROW,COL);
	
	//��ӡ����
	displayboard(board,ROW,COL); 
 	
	  
 }
 
 
 int main()
 {
 	int input=0;
 	
 	do
 	{
 		menu();
 		printf("please make your choice:>");
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
   
