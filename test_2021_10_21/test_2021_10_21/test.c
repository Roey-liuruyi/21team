#define _CRT_SECURE_NO_WARNINGS 1
//回文数检测
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入待检测的数:");
//	scanf("%d", &a);
//	b = a;
	//while (b != 0)
	//{
	//	c = c * 10 + b % 10;
	//	b = b / 10;
	//}
//	if (c == a)
//	{
//		printf("该数字是回文数");
//	}
//	else
//	{
//		printf("该数字不是回文数");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入待转化的数:");
//	scanf("%d", &a);
//	b = a;
//	while (b != 0)
//	{
//		c = c * 10 + b % 8;
//		b = b / 8;
//	}
//	printf("%d",c);
//}
//计算十进制正整数的位数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入一个正整数:");
//	scanf("%d", &a);
//	b = a;
//	int i = 0;
//	while (a)
//	{
//		a = a / 10;
//		i++;
//	}
//	printf("该正整数一共有%d位\n", i);
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



//辗转相除法求最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int tmp = 0;
//	printf("请输入两个数并用空格隔开:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//保证a是较大那个
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
//	printf("这两个数的最大公约数是%d\n", b);
//}



//穷举法求最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int tmp = 0;
//	printf("请输入两个数并用空格隔开:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//保证a是较大那个
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	for (i = b; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数为%d\n", i);
//			break;
//		}
//	}
//}

//计算两个数的最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int tmp = 0;
//	printf("请输入两个数并用空格隔开:");
//	scanf("%d%d", &a, &b);
//	if (a < b)//保证a是较大那个
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	for (i = a; ; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("最小公倍数数为%d\n", i);
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
//	printf("多项式的值为%lf\n", num);
//}
//#include<stdio.h>
//int main()
//{
//	printf("%s","查询菜单\n  1 按书名查找\n  2 按作者查找\n  3 按出版编号查找\n  4 按出版社查找\n  0 返回");
//	printf("%s", "查询菜单\n");
//	printf("%s", "  1 按书名查找\n");
//	printf("%s", "  2 按作者查找\n");
//	printf("%s", "  3 按出版编号查找\n");
//	printf("%s", "  4 按出版社查找\n");
//	printf("%s", "  0 返回");
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		printf("查询菜单\n");
//		printf("查询编号:");
//		scanf("%d", &a);
//		switch (a)
//		{
//			case 1:
//				printf("  按书名查找\n");
//				break;
//			case 2:
//				printf("  按作者查找\n");
//				break;
//			case 3:
//				printf("  按出版社编号查找\n");
//				break;
//			case 4:
//				printf("  按出版社查找\n");
//				break;
//			case 0:
//				printf("  返回\n");
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
//求一元二次方程的根
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请依次输入一元二次方程的二次项,一次项,和常数项的值,并用空格隔开:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a != 0)
//	{
//		if (b* b == 4 * a * c)
//		{
//			printf("有两个相等的实根\n");
//		}
//		else if(b * b > 4 * a * c)
//		{
//			printf("有两个不相等的实根\n");
//		}
//		else
//		{
//			printf("有两个共轭复根\n");
//		}
//	}
//	else
//	{
//		printf("不是二次方程\n");
//	}
//}
//企业发放的奖金根据利润计算
//#include<stdio.h>
//int main()
//{
//	double B = 0;
//	double w = 0;
//	printf("请输入利润的值B(万元):");
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
//	printf("奖金金额为%lf元\n",w*10000);
//}
//向菁菁问
//#include<stdio.h>
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	if (x == 3.21)
//	{
//		printf("正确");
//	}
//	else
//	{
//		printf("错误");
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

