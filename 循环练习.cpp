#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

////n的阶乘 
//int main()
//{
//	int n, i;
//	long factn = 1;
//	printf("输入n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		factn *= i;
//	printf("%ld", factn);
//	return 0;
//}

////1!+2!+3!+.....+n!
//int main()
//{
//	int i = 1, j = 1,n;
//	long sum = 0, fact = 1;
//	scanf("%d", &n);
//	for (; i <= n; i++)
//	{
//		for (; j <= i; j++)
//		{
//			fact*=j;
//		}
//		sum += fact;
//	}
//	printf("%ld", sum);
//	return 0;
//}
////改良
//int main()
//{
//	int i = 1, n;
//	long sum = 0, fact = 1;
//	scanf("%d", &n);
//	for (; i <= n; i++)
//	{
//		fact *= i;
//		sum += fact;
//	}
//	printf("%ld", sum);
//	return 0;
//}

////二分法查找   单调数组中查找一个数
////int main()
////{
////	int s, sz,p = 0, i = 0, il = 0, ir = 0;//   i->mid   il->left   i->right
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	printf("输入1~10的一个数\n");
////	scanf("%d", &s);
////	sz = ((sizeof(arr) / sizeof(arr[0]))-1);
////	for (i = sz/2,il = 0,ir = sz;p < 4;p++)//不好   应判断il ir 大小
////	{
////		if (arr[i] == s)
////		{
////			printf("找到,下标为%d",i);
////			break;
////		}
////		else if (arr[i] < s)
////		{
////			il = i + 1;
////			i = (il + ir) / 2;
////		}
////		else if (arr[i] > s)
////		{
////			ir = i - 1;
////			i = (ir + il) / 2;
////		}
////	}
////	if (p>=4)
////		printf("乱输尼木");
////	return 0;
////}
//////改良
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	int mid = (left + right) / 2;
//	int s;
//	scanf("%d", &s);
//	while (left <= right)//如果一直找不到 left>right
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == s)
//		{
//			printf("找到,下标为%d", mid);
//			break;
//		}
//		if (arr[mid] < s)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid] > s)
//		{
//			right = mid - 1;
//		}
//	}
//	if(left>right)
//		printf("乱输尼木");
//	return 0;
//}

////一串字符从两边向中间显示
//int main()
//{
//	int l, r, i;
//	char ch1[] = { "wocenimu" };
//	char ch2[] = { "########" };
//	i = 1;
//	r = strlen(ch1) - 1;//等价于 right=sizeof(ch1)/sizeof(ch1[0])-2
//	l = 0;
//	while (l <= r)
//	{
//		ch2[l] = ch1[l];
//		ch2[r] = ch1[r];
//		system("cls");
//		printf("%s\n", ch2);
//		Sleep(700);
//		l++, r--;
//	}
//	return 0;
//}