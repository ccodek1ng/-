#define _CRT_SECURE_NO_WARNINGS 1
//C语言  结构化  顺序结构，选择结构，循环结构
;//空语句
int g;//语句
#include<stdio.h>
//int main()
//{
//	int size;
//	scanf("%d", &size);
//	if (size > 0 && size < 10)//   为真则执行这一条分支，并 不判断别的分支
//		printf("a\n");
//	else if (size >= 10 && size < 20)//         10<=size<20  ->  0<20 = 1
//		printf("b\n");
//	else
//	{
//		printf("c\n");
//		printf("too big\n");
//	}//代码块用{}             多分支
//	if (size == 15)
//		printf("best size\n");//单分支
//
//	int a = 1, b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("if2\n");
//	else//                  悬空else 应与if（b==2）对齐      else匹配：与最近的未匹配if匹配
//			printf("if1\n");
//	return 0;
//}

//return
//int main()
//{
//	int x = 5, y = -1;
//	if (x > 0)
//	{
//		return ;//return 终止了函数
//	}
//	return 0;
//}

//防止错误
//int main()
//{
//	int a = 2;
//	if (4 == a)//变量常量比较时，常量在前，防止a = 4
//		printf("细节");
//	return 0;
//}

////判断是否是奇数，输出0~100的奇数
//int main()
//{
//	int i, a;
//	i = 1;
//	scanf("%d", &a);
//	if (0 == a || a % 2 == 0)
//		printf("%d不是奇数\n",a);
//	else
//		printf("%d是奇数\n",a);
//	while (i <= 99)
//	{
//		if (i % 2 == 1)//     或      printf("%d",i);      
//			printf("%d\n",i);//       i+=2;
//		i++;//
//	}
//	return 0;
//}

////switch  多分支
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//（整型表达式）
//	{
//	case 1:printf("星期%d", day); break; //case 整型常量表达式:语句；(break;)
//	case 2:printf("星期%d", day); break;
//	case 3:printf("星期%d", day); break;
//	case 4:printf("星期%d", day); break;
//	case 5:printf("星期%d", day); break;
//	case 6:printf("星期%d", day); break;
//	case 7:printf("星期日", day); break;
//	default:printf("输入错误"); break;
//	}
//	return 0;
// }

////switch允许嵌套
//int main()
//{
//	int m = 1, n = 2;
//	switch (n)
//	{
//	case 1:
//	case 2:
//		switch (m)
//		{
//		case 1:n++;
//		case 2:m++;
//		}
//	}
//	return 0;
//}

//循环