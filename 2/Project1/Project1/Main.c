#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a, b,m,n,i,ans;
	printf("Enter two integers:");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		m = a;
	}
	else if (b > a)
	{
		m = b;
	}
	ans = a * b;
	for (i = a*b; i>=m ; i--)
	{
		if (i% a == 0 && i % b == 0)
			ans = i;
	}
	printf("LCM is %d\n", ans); 

	return 0;
}