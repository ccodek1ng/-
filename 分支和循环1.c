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

////while循环
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//提前结束本次循环，开始下一次循环
//		if (i == 6)
//			break;//终止所有循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)//EOF   end of file = -1
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

////输入缓冲区
//int main()
//{
//	int cfm = 0;
//	char password[20] = { 0 };
//	scanf("%s", &password);//    输入缓冲区 是 行缓冲区遇到\n停止   123456\n
//	cfm = getchar();//           scanf 拿走了123456剩下\n   getchar 直接读取了\n  导致错误
//	if (cfm == 'T')
//		printf("已确认");
//	else
//		printf("已取消确认");
//	return 0;
//}

////清空输入缓冲区
//int main()
//{
//	int cfm = 0, ch = 0;
//	char password[20] = { 0 };
//	scanf("%s", &password);//输入空格' '时，scanf读取结束，导致需要不止一次清除缓冲区
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	cfm = getchar();
//	if (cfm == 'T')
//		printf("已确认");
//	else
//		printf("已取消确认");
//	return 0;
//}

//for  优势：循环变量的集中初始化，判断，调整
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++, i++)
//	{
//		if (i == 5)
//			continue;//并不会死循环，说明i++在循环开始时执行
//		printf("%d", i);
//	}
//	printf("%d", i);
//	return 0;
//}

////在for{}内改变循环变量可能导致死循环；   左闭右开可读性高
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++)   //要输出数组a的10个数，则要循环10次。  循环次数=10-0=10  若写为i<=9  循环次数=9+1-0=10
//	{                          //1到10是10个数（数数），而10与1的差是9（减法），这就是闭‘<=’与开‘<’计数的区别    计算循环次数一般用减法
//		printf("%d", a[i]);
//		i = 5;//寄
//	}
//}

////两种死循环
//int main()
//{
//	int i = 0;
//	for (; i = 3; i++)//== 写成 =  赋值表达式的值就是i
//		printf("o.O ");
//	for (;;)//判断为空 恒为真 o.O
//		printf("o.O ");
//	return 0;
//}

////嵌套循环
//int main()
//{
//	int i = 0, j = 0;
//	for (; i < 10; i++)
//		for (j = 0; j < 10; j++)
//			printf("一百次 ");
//	return 0;
//}

////do while 循环
//int main()
//{
//	int i = 1;
//	do//至少执行一次
//	{
//		printf("%d", i);
//		i++;
//	} 
//	while (i < 11);
//	return 0;
//}