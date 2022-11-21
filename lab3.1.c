#include<stdio.h>

void Print()
{

	printf("\nMain Menu\n");
	printf("1: 2 numbers and add them\n");	
	printf("2: 2 numbers and multiply them\n");	
	printf("3: 2 numbers and calculate the modulus\n");		
	printf("4: exit\n");
}

int main() 
{
	int ans,num1,num2;
	float result;
	//menu
menu:
	do{
	Print();
	scanf("%d",&ans);
	//exit
	if(ans==4)
goto end;
    }while(ans>4);
    //scan 2num
   	printf("\n2number\n");
   	scanf("%d",&num1);
	scanf("%d",&num2);
	//Switch(num1,num2,ans,result);
	switch(ans)
	{
	case 1:
	{	
	result=num1+num2;
	printf("%f\n",result);	
	//break;
	goto menu;
    }
	case 2:
	{
	result=num1*num2;
	printf("%f\n",result);	
	//break;
	goto menu;
    }
	case 3:
	{
	result=num1%num2;
	printf("%f\n",result);	
	//break;
	goto menu;
    }
//goto menu;
    }
end:			
	return 0;
}

//void Switch(int num1,int num2,int ans,float result)
