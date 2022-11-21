#include <stdio.h>
#include <stdbool.h>
int main()
{
bool a = true; // true == 1
char x = 'A'; // ¡®A¡¯ == 65
int b = 2;
float c = 3;
double d = 3.1415926;
b = b/3*c;
printf("%d\n", b); // question 1
c = a/2.0*c;
printf("%f\n", c); // question 2
d = d*2/a;
printf("%f\n", d); // question 3
a = a+1;
printf("%d\n", a); // question 4
x = x+1;
printf("%c\n", x); // question 5
return 0;
}
