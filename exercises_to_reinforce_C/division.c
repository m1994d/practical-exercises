#include<stdio.h>
int main()
{
        int num1, num2, result;
        int a=12;
	int b=3;
        printf("enter the first value\n");
        scanf("%d",&num1);
        printf("enter the second value\n");
        scanf("%d",&num2);
        result = a*(num1 + num2)+ b*(b+num2);
        printf("the result of the sum is:%d\n",result);
        return 0;
}
