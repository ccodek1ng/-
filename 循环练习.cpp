#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//n�Ľ׳� 
int main()
{
	int n, i;
	long factn = 1;
	printf("����n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		factn *= i;
	printf("%ld", factn);
	return 0;
}