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

//ѭ��