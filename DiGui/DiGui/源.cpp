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
////ʵ��x��n�η�
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
//	printf("����������x,n��ֵ���ÿո����:");
//	scanf("%lf%d", &x,&n);
//	res = f(x, n);
//	printf("%lf",res);
//}
//2.�õݹ�ķ���ʵ��ʮ���Ƶ��˽��Ƶ�ת����
//#include<stdio.h>
//void fun(int n)//ֻ��Ҫִ�ж��������ط���ֵ
//{
//	int tmp = 0;
//	if(n!=0)
//	{
//		tmp = n % 8;
//		n = n / 8;
//		fun(n);
//		printf("%d", tmp);//���ڱ�Ƕ�׺����ĺ�����Ϊ��ʵ���������;
//	}
//}
//int main()
//{
//	int n = 0;
//	int res = 0;
//	printf("������ʮ������");
//	scanf("%d", &n);
//	printf("���Ӧ�İ˽�����:");
//	fun(n);
//	return 0;
//}
//---------------------------------���Ƿָ���-------------------------------------
//1.�����������һά��������Ȼ����ϲ���һ��һά�����У��Ա�����������
//#include<stdio.h>
//void sort(int *p,int sz)//ð������
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
//			if (*p1 > *(p1 + 1))//����
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
//	printf("����ǰarr1:");
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%4d", arr1[i]);
//	}
//	printf("\n����ǰarr2:");
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%4d", arr2[i]);
//	}
//	sort(arr1, sz1);
//	sort(arr2, sz2);
//	printf("\n�����arr1:");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%4d", arr1[i]);
//	}
//	printf("\n����ǰarr1:");
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
//	printf("\n�ϲ���arr3:");
//	for (i = 0; i < sz1 + sz2; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//}
//---------------------------------���Ƿָ���-------------------------------------
////����һ������,���仯Ϊ���
//#include<stdio.h>
////���ҷ������ĸ�����Լ��-շת�����
//void make_it(int a,int b)
//{
//	int c = 1;
//	int tmp = 0;
//	int a1 = a;
//	int b1 = b;
//	int c1 = 0;
//	if (a < b)//---ȷ��a�������Ǹ�
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
//	printf("�仯���Ϊ%d/%d\n", a1, b1);
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("���Է�����ʽ����һ������:");
//	scanf("%d/%d", &x, &y);
//	make_it(x, y);
//	return 0;
//}
//---------------------------------���Ƿָ���-------------------------------------
