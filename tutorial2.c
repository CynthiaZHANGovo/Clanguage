#include<stdio.h>
int main() 
{
	int ans=1;
	do{
	Print();
	scanf("%d",&ans);
	switch(ans);
    }while(ans!=8);
    
	return 0;
}

Print(void)
{

	printf("\nMain Menu\n");
	printf("1: Load Data From File\n");	
	printf("2: Save Current Data to File\n");	
	printf("3: View Students\n");	
	printf("4: Add Student\n");
	printf("5: Delete Student\n");	
	printf("6: Show Class Stats\n");	
	printf("7: Show Final Grades\n");	
	printf("8: Quit\n");
}
int Swich(int ans)
{
	switch(ans)
	{
	case 1:
	printf("1: Load Data From File\n");	
	break;	
	case 2:
	printf("2: Save Current Data to File\n");
	break;
	case 3:
	printf("3: View Students\n");
	break;
	case 4:	
	printf("4: Add Student\n");
	break;
	case 5:
	printf("5: Delete Student\n");
	break;
	case 6:	
	printf("6: Show Class Stats\n");
	break;
	case 7:	
	printf("7: Show Final Grades\n");
	break;			
    }
}
