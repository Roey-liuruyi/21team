#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int f(int a, int b)
//{
//	int c;
//	if (b == 1)
//	{
//		return  a;
//	}
//	else
//	{
//		c = a * f(a, b - 1);
//		printf("%d\n", c);
//	}
//	return c;
//}
//int main()
//{
//	int c = 0;
//	f(2, 5);
//	//c=f(2, 5);
//	//printf("%d", c);
//}
//#include<stdio.h>
//int f(int a, int b)
//{
//	int c;
//	if (b == 1)
//	{
//		return  c=a;
//	}
//	else {
//		c = a * f(a, b - 1);
//		printf("%d\n", c);
//	}
//	return c;
//}
//int main()
//{
//	f(2, 5);
//}
//#include<stdio.h>
////实现x的n次方
//double f(double x,int n)
//{
//	if (n == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return x * f(x, n - 1);
//	}
//
//}
//int main()
//{
//	double x = 0;
//	int n = 0;
//	double res = 0;
//	printf("请依次输入x,n的值并用空格隔开:");
//	scanf("%lf%d", &x,&n);
//	res = f(x, n);
//	printf("%lf",res);
//}
//2.用递归的方法实现十进制到八进制的转换。
//#include<stdio.h>
//void fun(int n)//只需要执行动作而不必返回值
//{
//	int tmp = 0;
//	if(n!=0)
//	{
//		tmp = n % 8;
//		n = n / 8;
//		fun(n);
//		printf("%d", tmp);//放在被嵌套函数的后面是为了实现逆序输出;
//	}
//}
//int main()
//{
//	int n = 0;
//	int res = 0;
//	printf("请输入十进制数");
//	scanf("%d", &n);
//	printf("其对应的八进制是:");
//	fun(n);
//	return 0;
//}
//---------------------------------我是分割线-------------------------------------
//1.将两个无序的一维数组排序，然后将其合并到一个一维数组中，仍保持数组有序。
//#include<stdio.h>
//void sort(int *p,int sz)//冒泡排序
//{
//	int *p1 = p;
//	int tmp = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0, p1 = p; j < sz-1-count; j++, p1++)
//		{
//			if (*p1 > *(p1 + 1))//交换
//			{
//				tmp = *p1;
//				*p1 = *(p1 + 1);
//				*(p1 + 1) = tmp;
//			}
//		}
//		count++;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,3,5,6,3,4,26,9 };
//	int arr2[] = { 1,2,3,2,4,5,2,4,9,6,7 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	printf("排序前arr1:");
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%4d", arr1[i]);
//	}
//	printf("\n排序前arr2:");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%4d", arr2[i]);
//	}
//	sort(arr1, sz1);
//	sort(arr2, sz2);
//	printf("\n排序后arr1:");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%4d", arr1[i]);
//	}
//	printf("\n排序前arr1:");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%4d", arr2[i]);
//	}
//	for (i = 0; i < sz1; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	for (i = 0; i <sz2; i++)
//	{
//		arr[i+sz1] = arr2[i];
//	}
//	sort(arr, sz1 + sz2);
//	printf("\n合并后arr3:");
//	for (i = 0; i < sz1 + sz2; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//}
//---------------------------------我是分割线-------------------------------------
////输入一个分数,将其化为最简
//#include<stdio.h>
////先找分子与分母的最大公约数-辗转相除法
//void make_it(int a,int b)
//{
//	int c = 1;
//	int tmp = 0;
//	int a1 = a;
//	int b1 = b;
//	int c1 = 0;
//	if (a < b)//---确保a是最大的那个
//	{
//		tmp = b;
//		b = a;
//		a = tmp;
//	}
//	while (c)
//	{
//		c = a % b;
//		if (c != 0)
//		{
//			a = b;
//			b = c;
//		}
//	}
//	a1 /= b;
//	b1 /= b;
//	printf("其化简后为%d/%d\n", a1, b1);
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请以分数形式输入一个分数:");
//	scanf("%d/%d", &x, &y);
//	make_it(x, y);
//	return 0;
//}
//---------------------------------我是分割线-------------------------------------
