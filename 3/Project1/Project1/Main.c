#include<stdio.h>
#include<stdlib.h>

int ss(int, int);
void main()
{
	int a, b, ans;
	printf("Enter base and exponent:");
	scanf("%d%d", &a, &b);
	ans = ss(a, b);
	printf("ANS=%d", ans * a);
}

int ss(int a, int b )
{
	int i,ans=1;
	for (i = b - 1; i >= 1; i--)
	{
		ans = ans * a;
	}
	return ans;
}