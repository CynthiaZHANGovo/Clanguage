#include<stdio.h>
#include<math.h> 
void Result(float BMI)
 {
 	if(BMI<=18.4)
 	printf("Underweight\n");
 	else if(BMI>18.4&&BMI<=24.9)
 	printf("Normal\n");
 	else if(BMI>24.9&&BMI<=30)
 	printf("Overweight\n");
 	else
 	printf("Obese\n");
 }
int main()
{
	float height,weight,BMI;
	printf("Pls enter the height(/m):");
	scanf("%f",&height);
	printf("Pls enter the weight(/kg):");
	scanf("%f",&weight);
	BMI=weight/pow(height,2);
	Result(BMI);
// 	if(BMI<=18.4)
// 	printf("Underweight\n");
// 	else if(BMI>18.4&&BMI<=24.9)
// 	printf("Normal\n");
// 	else if(BMI>24.9&&BMI<=30)
// 	printf("Overweight\n");
// 	else
// 	printf("Obese\n");
 	
	return 0;
 } 
