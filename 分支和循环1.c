#define _CRT_SECURE_NO_WARNINGS 1
//C����  �ṹ��  ˳��ṹ��ѡ��ṹ��ѭ���ṹ
;//�����
int g;//���
#include<stdio.h>
//int main()
//{
//	int size;
//	scanf("%d", &size);
//	if (size > 0 && size < 10)//   Ϊ����ִ����һ����֧���� ���жϱ�ķ�֧
//		printf("a\n");
//	else if (size >= 10 && size < 20)//         10<=size<20  ->  0<20 = 1
//		printf("b\n");
//	else
//	{
//		printf("c\n");
//		printf("too big\n");
//	}//�������{}             ���֧
//	if (size == 15)
//		printf("best size\n");//����֧
//
//	int a = 1, b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("if2\n");
//	else//                  ����else Ӧ��if��b==2������      elseƥ�䣺�������δƥ��ifƥ��
//			printf("if1\n");
//	return 0;
//}

//return
//int main()
//{
//	int x = 5, y = -1;
//	if (x > 0)
//	{
//		return ;//return ��ֹ�˺���
//	}
//	return 0;
//}

//��ֹ����
//int main()
//{
//	int a = 2;
//	if (4 == a)//���������Ƚ�ʱ��������ǰ����ֹa = 4
//		printf("ϸ��");
//	return 0;
//}

////�ж��Ƿ������������0~100������
//int main()
//{
//	int i, a;
//	i = 1;
//	scanf("%d", &a);
//	if (0 == a || a % 2 == 0)
//		printf("%d��������\n",a);
//	else
//		printf("%d������\n",a);
//	while (i <= 99)
//	{
//		if (i % 2 == 1)//     ��      printf("%d",i);      
//			printf("%d\n",i);//       i+=2;
//		i++;//
//	}
//	return 0;
//}

////switch  ���֧
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//�����ͱ��ʽ��
//	{
//	case 1:printf("����%d", day); break; //case ���ͳ������ʽ:��䣻(break;)
//	case 2:printf("����%d", day); break;
//	case 3:printf("����%d", day); break;
//	case 4:printf("����%d", day); break;
//	case 5:printf("����%d", day); break;
//	case 6:printf("����%d", day); break;
//	case 7:printf("������", day); break;
//	default:printf("�������"); break;
//	}
//	return 0;
// }

////switch����Ƕ��
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

////whileѭ��
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��ǰ��������ѭ������ʼ��һ��ѭ��
//		if (i == 6)
//			break;//��ֹ����ѭ��
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

////���뻺����
//int main()
//{
//	int cfm = 0;
//	char password[20] = { 0 };
//	scanf("%s", &password);//    ���뻺���� �� �л���������\nֹͣ   123456\n
//	cfm = getchar();//           scanf ������123456ʣ��\n   getchar ֱ�Ӷ�ȡ��\n  ���´���
//	if (cfm == 'T')
//		printf("��ȷ��");
//	else
//		printf("��ȡ��ȷ��");
//	return 0;
//}

////������뻺����
//int main()
//{
//	int cfm = 0, ch = 0;
//	char password[20] = { 0 };
//	scanf("%s", &password);//����ո�' 'ʱ��scanf��ȡ������������Ҫ��ֹһ�����������
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	cfm = getchar();
//	if (cfm == 'T')
//		printf("��ȷ��");
//	else
//		printf("��ȡ��ȷ��");
//	return 0;
//}

//for  ���ƣ�ѭ�������ļ��г�ʼ�����жϣ�����
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++, i++)
//	{
//		if (i == 5)
//			continue;//��������ѭ����˵��i++��ѭ����ʼʱִ��
//		printf("%d", i);
//	}
//	printf("%d", i);
//	return 0;
//}

////��for{}�ڸı�ѭ���������ܵ�����ѭ����   ����ҿ��ɶ��Ը�
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++)   //Ҫ�������a��10��������Ҫѭ��10�Ρ�  ѭ������=10-0=10  ��дΪi<=9  ѭ������=9+1-0=10
//	{                          //1��10��10����������������10��1�Ĳ���9��������������Ǳա�<=���뿪��<������������    ����ѭ������һ���ü���
//		printf("%d", a[i]);
//		i = 5;//��
//	}
//}

////������ѭ��
//int main()
//{
//	int i = 0;
//	for (; i = 3; i++)//== д�� =  ��ֵ���ʽ��ֵ����i
//		printf("o.O ");
//	for (;;)//�ж�Ϊ�� ��Ϊ�� o.O
//		printf("o.O ");
//	return 0;
//}

////Ƕ��ѭ��
//int main()
//{
//	int i = 0, j = 0;
//	for (; i < 10; i++)
//		for (j = 0; j < 10; j++)
//			printf("һ�ٴ� ");
//	return 0;
//}

////do while ѭ��
//int main()
//{
//	int i = 1;
//	do//����ִ��һ��
//	{
//		printf("%d", i);
//		i++;
//	} 
//	while (i < 11);
//	return 0;
//}