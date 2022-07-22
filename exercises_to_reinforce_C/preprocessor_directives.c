/*
 DIRECTIVAS DEL PREPROCESADOR
 */

#include <stdio.h>
#define PI 3.14159
#define CUB(a) a*a*a
int main()
{
	//int sum;
	//sum = PI + 3;
	int a = 3;
	printf("the CUB of variable a is: %i\n",CUB(a));       
	return 0;
}
