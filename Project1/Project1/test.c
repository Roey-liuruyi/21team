#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age;
//	int year;
//	printf("请输入年龄和出生年份并用空格隔开:\n");
//	scanf("%d%d",&age,&year);//输入年龄和出生年份
//	printf("现在是%d年\n", age+year);
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, area, s;
//	printf("Please enter the length of a,b,c\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("area=%f\n", area);
//	return 0;
//}
//int main()
//{
//	//方法一:
//	//例如123想得到它的每一位,123%10=3,123/10=12;12%10=2,12/10=1;1%10=1
//	//即得到了其每一位
//	//则二进制就%2得到余数,/2去掉余数如此循环
//	/*int num = 0;
//	int count = 0;*/
//	//scanf("%d", &num);
//	////统计num的补码中有几个1
//	//while (num)//一直循环
//	//{
//	//	if (count % 2 == 1)//1/2=0
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//	printf("%d", count);
//	//}
//	//return 0; -1%2,商0,余-1.因为有0出现所以while(假),不再循环
//	//所以存在问题
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//如何拿到二进制的32位比特位
//	//按位与&,因为只有11才真的为1
//	//但若是&上32个11111111111111111111111111111111
//	//则若是对逻辑&后的数字进行数1,又出现了相同的问题,
//	//故想到将其所有位都移到末尾进行计算
//	//此时便应用到了移位运算
//	int i = 0;
//	for (i = 0; i < 32; i++)//0是第一位
//	{
//		if (1 ==( (num >> i)&1))//要用两个括号才能防止其进行优先级运算
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof()计算所占类型空间的大小,单位为字节
//	printf("%zd\n", sizeof(a));//4//可以省略括号
//	printf("%zd\n", sizeof(int));//4//但如果是类型的话就不能省略
//
//	printf("%zd\n", sizeof(c));//1
//	printf("%zd\n", sizeof(char));//1
//
//	printf("%zd\n", sizeof(p));//8
//	printf("%zd\n", sizeof(char*));//8,所有的指针变量在x64位里面都为8
//
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(int [10]));//40 int为4,[10]即是40
//}
//int main()
//{
//	short a = 0;
//	int s = 10;
//	printf("%zd\n", sizeof(a = s + 5));//a在前面其主导性作用,所以结果为2(short)
//	printf("%d\n", a);//sizeof()里面的内容实际不参与运算,所以结果仍然为0
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//符号位为零,则补位的时候全部补0,00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//符号位为零,则补位的时候全部补0,01111111
//	//00000011
//	//01111111
//	//10000010//即是c
//	char c = b + a;
//	//000000000000000000000000
//	printf("%d\n", c);//打印一个整形,又发生整形提升//11111111111111111111111110000010
//	//11111111111111111111111110000010补码
//	//11111111111111111111111110000001反码
//	//10000000000000000000000001111110原码
//	//所以其结果为-126
//	return 0;
//}
//实例1
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//统计二进制中1的个数
//#include<stdio.h>
//#include<stdlib.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//	
//}//此代码会出现问题(负数)(unsigned可以排除此问题)
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	//写一个函数返回其二进制(补码)中的1的个数
//	int count=count_bit_one(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i)&1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & n - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	//写一个函数返回其二进制(补码)中的1的个数
//	int count=count_bit_one(a);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int get_different(int a, int b)
//{
//	int count = 0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & tmp - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = get_different(a,b);
//	printf("%d", count);
//}
//#include<stdio.h>
//int main()
//{
//
//}
//#include<stdio.h>
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	if (number != 7)
//	{
//		printf("这个数补等于7");
//	}
//	else
//	{
//		printf("这个数等于7");
//	}
//		
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age;
//	int year;
//	printf("请输入年龄和出生年份并用空格隔开:\n");
//	scanf("%d.%d",&age,&year);//输入年龄和出生年份
//	printf("现在是%d年\n", age+year);
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {2, 3, 4, 5, 6}, {7,8,9,10,11},{12,13,14,15,16} };
//	int(*p1)[5] = arr;
//	int(*p2)[5]= &arr;
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	printf("%p\n", *p1);
//	printf("%p\n", *p2);
//	printf("%p\n", **p1);
//	printf("%p\n", **p2);
//	printf("%p\n", *p1+1);
//	printf("%p\n", *p2+1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2+1);
//	printf("%p\n", *(p1 + 1));
//	printf("%p\n", *(p2 + 1));
//	printf("%p\n", **(p1 + 1));
//	printf("%p\n", **(p2 + 1));
//	printf("%p\n", *(*p1 + 1));
//	printf("%p\n", *(*p2 + 1));
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	char a[] = { '0' };
	scanf("%s", &a);
	printf("%s",a);
	return 0;
}
