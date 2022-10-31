#include<stdio.h>
#include<stdlib.h>

void main()
{
	unsigned long long int a=0, b=1, c= 0,d;
	while (c <= 4633372036854775810)
	{
		c = a + b;
		printf("%lld+%lld=%lld\n", a, b, c);
		a = b;
		b = c;
	}
	c = a + b;
	printf("%lld+%lld=%lld\n", a, b, c);
}