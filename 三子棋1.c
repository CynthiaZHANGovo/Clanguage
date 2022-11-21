#define ROW 3
#define COL 3
#include<stdio.h>

void game()
{

//≥ı ºªØ∆Â≈Ã 
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
 //¥Ú”°∆Â≈Ã 
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
 
// int main()
// {
//    TnitBoard();
//    displayboard();
// 	return 0;
// }
 
 
 
 
 
 
}
 
 
 
 
 
 
 
