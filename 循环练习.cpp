#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//nµÄ½×³Ë 
int main()
{
	int n, i;
	long factn = 1;
	printf("ÊäÈën:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		factn *= i;
	printf("%ld", factn);
	return 0;
}