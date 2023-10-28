#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>

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

////从大到小输出三个数
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	if (a < c)
//	{
//		t = c;
//		c = a;
//		a = t;
//	}
//	if (b < c)
//	{
//		t = c;
//		c = b;
//		b = t;
//	}
//	printf("%d>=%d>=%d", a, b, c);
//	return 0;
//}

////从大到小输出三个数 函数???
//void cp(int x,int y)
//{
//	int t;
//	if (x < y)
//	{
//		t = y;
//		y = x;
//		x = t;
//	}
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	cp(a, b);
//	cp(a, c);
//	cp(b, c);
//	printf("%d>=%d>=%d", a, b, c);
//	return 0;
//}

////最大公约数  辗转相除法
//int main()
//{
//	int a, b, r;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		r = b;
//		b = a;
//		a = r;
//	}
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}

////素数 试除法
//int main()
//{
//	int i, j;
//	for (i = 100; i <= 200; i++)//     for (i = 101; i <= 199; i += 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//素数  筛法

////数1~100中9的个数  （如何计十位数，个位数）
//int main()
//{
//	int i,n;
//	for (i = 1,n = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("%d", n);
//}

////   1/1-1/2+1/3-1/4+...........+1/100
//int main()
//{
//	int i, t;
//	float sum;
//	for (i = 1, t = 1, sum = 0.0; i <= 100; i++)
//	{
//		sum += (1.0 / i) * t;
//		t *= -1;
//	}
//	printf("%f", sum);
//	return 0;
//}

////找出10个数中最大的数    ？？能否演化为排序
//int main()
//{
//	int a[10] = { 5,6,1,3,8,9,4,2,0,7 };
//	int j = 1,t = 0;
//	while (j<=9)
//	{
//
//		if (a[0] < a[j])
//		{
//			t = a[j];
//			a[j] = a[0];
//			a[0] = t;
//		}
//		else j++;
//	}
//	printf("%d", a[0]);
//	return 0;
//}

////99乘法表
//int main()
//{
//	int i = 1, j = 1;
//	while (i <= 9)
//	{
//		j = 1;
//		while (j <= i)
//		{
//			printf("%d*%d=%-2d  ", j, i, i * j);//  %-2d 2位数向左对其 整齐  
//			j++;
//		}
//		printf("\n\n");
//		i++;
//	}
//	return 0;
//}

//猜数字游戏
int main()
{
	time_t
}