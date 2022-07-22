/*
 *ARREGLOS EN C
 * */

#include <stdio.h>
int main()
{
	int sizeA;
	printf("enter array size\n");
	scanf("%i", &sizeA);
	int age[sizeA];
	for(int i = 0;i < sizeA;i++)
	{
		printf("enter the value %i\n",i+1);
		scanf("%i", &age[i]);
	}
	printf("the array values are\n");
	for(int i = 0; i < sizeA;i++)
	{
		printf("%i -\n", age[i]);
	}
	printf("\n");
	return 0;
}
