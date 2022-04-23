#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//}
////逆序字符串
//#include<string.h>
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = 0;
//	len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
// gets(arr)
//	//逆序函数
//	reverse(arr);
//	printf("%s", arr);
//}


//打印自幂数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//得到位数
//		int sz = 1;//注意为什么是1
//		int tmp = i;
//		int ret = 0;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			sz++;
//		}
//		tmp = i;
//		//while (1)
//		//{
//		//	ret = tmp % 10;
//		//	sum+=pow(ret, sz);
//		//	tmp = tmp / 10;
//		//	if (tmp < 10)
//		//	{
//		//		sum += pow(tmp, sz);
//		//		break;
//		//	}
//		//}
//		while (tmp)
//		{
//			sum += pow(tmp % 10, sz);//用了但是不改变
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		//得到n次方的总和
//		
//		//判断是否相等
//	}
//}
//打印菱形图案

