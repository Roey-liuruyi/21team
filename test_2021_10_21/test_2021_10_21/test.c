#define _CRT_SECURE_NO_WARNINGS 1
//���������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������:");
//	scanf("%d", &a);
//	b = a;
	//while (b != 0)
	//{
	//	c = c * 10 + b % 10;
	//	b = b / 10;
	//}
//	if (c == a)
//	{
//		printf("�������ǻ�����");
//	}
//	else
//	{
//		printf("�����ֲ��ǻ�����");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������ת������:");
//	scanf("%d", &a);
//	b = a;
//	while (b != 0)
//	{
//		c = c * 10 + b % 8;
//		b = b / 8;
//	}
//	printf("%d",c);
//}
//����ʮ������������λ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������һ��������:");
//	scanf("%d", &a);
//	b = a;
//	int i = 0;
//	while (a)
//	{
//		a = a / 10;
//		i++;
//	}
//	printf("��������һ����%dλ\n", i);
//}
//#include<stdio.h>
//int main()
//{
//	unsigned long long int n, t, num;
//	for (n = 2, t = 1; n <= 20; n++)
//	{
//		num = t * n;
//		t = num;
//	}
//	printf("%d", num);
//}



//շת����������Լ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int tmp = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//��֤a�ǽϴ��Ǹ�
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	while(c)
//	{
//		c = a % b;
//		if (c != 0)
//		{
//			a = b;
//			b = c;
//		}
//	}
//	printf("�������������Լ����%d\n", b);
//}



//��ٷ������Լ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int tmp = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//��֤a�ǽϴ��Ǹ�
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	for (i = b; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("���Լ��Ϊ%d\n", i);
//			break;
//		}
//	}
//}

//��������������С������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int tmp = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//��֤a�ǽϴ��Ǹ�
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	for (i = a; ; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("��С��������Ϊ%d\n", i);
//			break;
//		}
//	}
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 4;
//	double x = 1.414;
//	double num = 0;
//	num = a * x * x * x + b * x * x + c;
//	printf("����ʽ��ֵΪ%lf\n", num);
//}
//#include<stdio.h>
//int main()
//{
//	printf("%s","��ѯ�˵�\n  1 ����������\n  2 �����߲���\n  3 �������Ų���\n  4 �����������\n  0 ����");
//	printf("%s", "��ѯ�˵�\n");
//	printf("%s", "  1 ����������\n");
//	printf("%s", "  2 �����߲���\n");
//	printf("%s", "  3 �������Ų���\n");
//	printf("%s", "  4 �����������\n");
//	printf("%s", "  0 ����");
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		printf("��ѯ�˵�\n");
//		printf("��ѯ���:");
//		scanf("%d", &a);
//		switch (a)
//		{
//			case 1:
//				printf("  ����������\n");
//				break;
//			case 2:
//				printf("  �����߲���\n");
//				break;
//			case 3:
//				printf("  ���������Ų���\n");
//				break;
//			case 4:
//				printf("  �����������\n");
//				break;
//			case 0:
//				printf("  ����\n");
//				break;
//			default:
//				printf("  error\n");
//				break;
//		}
//		if (a != 0)
//		{
//			break;
//		}
//	}
//}
//��һԪ���η��̵ĸ�
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������һԪ���η��̵Ķ�����,һ����,�ͳ������ֵ,���ÿո����:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a != 0)
//	{
//		if (b* b == 4 * a * c)
//		{
//			printf("��������ȵ�ʵ��\n");
//		}
//		else if(b * b > 4 * a * c)
//		{
//			printf("����������ȵ�ʵ��\n");
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	else
//	{
//		printf("���Ƕ��η���\n");
//	}
//}
//��ҵ���ŵĽ�������������
//#include<stdio.h>
//int main()
//{
//	double B = 0;
//	double w = 0;
//	printf("�����������ֵB(��Ԫ):");
//	scanf("%lf", &B);
//	if (B <= 10)
//	{
//		w = B * 0.1;
//	}
//	else if (B > 10 && B <= 20)
//	{
//		w = (B - 10) * 0.075+10*0.1;
//	}
//	else if (B > 20 && B <=40)
//	{
//		w = (B - 20)*0.05+10 * 0.075 + 10 * 0.1;
//	}
//	else if (B > 40 && B <= 60)
//	{
//		w = (B - 40)*0.03+20* 0.05 + 10 * 0.075 + 10 * 0.1;
//	}
//	else if (B > 60 && B <= 100)
//	{
//		w = (B - 60)*0.015 +20* 0.03 + 20 * 0.05 + 10 * 0.075 + 10 * 0.1;
//	}
//	else
//	{
//		w = (B - 100)*0.01+40 * 0.015 + 20 * 0.03 + 20 * 0.05 + 10 * 0.075 + 10 * 0.1;
//	}
//	printf("������Ϊ%lfԪ\n",w*10000);
//}
//��ݼݼ��
//#include<stdio.h>
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	if (x == 3.21)
//	{
//		printf("��ȷ");
//	}
//	else
//	{
//		printf("����");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char c;
//	c=getchar();
//	if(c)
//}

#include<stdio.h>
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	if (c >= '0' && c <= '9') printf("This is a digit.\n");
//	else if (c >= 'A' && c <= 'Z') printf("This is a capital letter.\n");
//	else if (c >= 'a' && c <= 'z') printf("This is a small letter.\n");
//	else printf("Other character.\n");
//	return 0;
//}

