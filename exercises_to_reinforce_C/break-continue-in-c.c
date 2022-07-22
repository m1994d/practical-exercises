/*
 *BREAK Y CONTINUE EN C
 * */
#include <stdio.h>
int main()
{
	int num = 0;
	while(num <= 7)
	{
		num++;
		if (num ==2)
		{
			continue;
		}
		printf("%i\n",num);
	}
	return 0;
}
