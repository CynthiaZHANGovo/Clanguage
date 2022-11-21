#include<stdio.h>
int main(void)
{
	int input = 0;
	int sum = 0;
	
	printf("Please enter an input: ");
//	scanf("%d", &input);
//	
//	sum = sum + input;
//	
//	printf("Please enter an input: ");
//	scanf("%d", &input);
//	
//	sum = sum + input;
    scanf("%d",&input);
    scanf("%d",&input);
    sum=sum+input;
	
	printf("The sum of two numbers is %d\n", sum);
	
	// DIY: try enter 1 and 2 at the first prompt and second prompt 
	//      respectively, then try to enter 1 2 at the first prompt,
	//      compare the output
	
	return 0;
}
