#include<stdio.h>
#include<stdlib.h>

void main()
{
	char a;
	printf("Enter a alphabet:");
	scanf("%c", &a);
	if (a <= 90)
		a = a + 32;
	if (a >= 97)
		a = a - 32;
	printf("Return : %c", a);
	return 0;
}
