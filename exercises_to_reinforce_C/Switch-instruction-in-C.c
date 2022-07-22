/*
 *INSTRUCCION SWITCH EN C
 * */

#include <stdio.h>
int main()
{
	int casos;
	printf("enter a number\n");
	scanf("%i", &casos);
	switch(casos)
	{
		case 1:
		printf("chose the first case\n");
		break;

		case 2:
		printf("chose the second case\n");
		break;
		
		case 3:
		printf("chose the third case\n");
		break;
		
		case 4:
		printf("chose the fourth case\n");
		break;

		case 5:
		printf("chose the fifth case\n");
		break;
		
		default:
		printf("sorry, we did not find your case\n");
		break;
	}
	return 0;
}
