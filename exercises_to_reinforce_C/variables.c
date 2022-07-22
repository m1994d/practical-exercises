/*
 VARIABLES
 */
#include <stdio.h>
int main()
{
	char C = 'y'; //tamaño 1 byte 0...225
	int a = 20; // 2 byte -32768 ... 32767
	short e = -1;//2 byte -128 ... 127
	unsigned int u = 25; // 2 byte 0 ... 65535
	long l = 5932; //4 bytes -2147483648 ... 2147483647
	float f = 72.538; // 4 bytes 
	double d = 12323.877658; // 8 bytes 
	printf("%.2lf\n",d);
	return 0; /*TERMINA EL PROGRAMA*/
}
