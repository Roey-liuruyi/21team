#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1,使用指针变量按从小到大的顺序输出三个整数
//void sort(int *p1,int *p2)
//{
//	int tmp = 0;
//	if (*p1 > *p2)
//	{
//		tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	sort(p1, p2);
//	sort(p1, p3);
//	sort(p2, p3);
//	printf("%d %d %d", *p1, *p2, *p3);
//}


//2.用12个月份的英文名称初始化为一个字符指针数组,当键盘输入整数为1-12时
//显示相应的月份名,键入其他整数时显示错误信息
//#include<stdio.h>
//int main()
//{
//	char* arr[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
//	int i = 0;
//	printf("请输入月份\n");
//	while (scanf("%d", &i))
//	{
//		if (i > 12 || i < 1)
//		{
//			printf("输入错误\n");
//			break;
//		}
//		else
//		{
//			printf("%s\n", arr[i - 1]);
//		}
//		printf("请输入月份\n");
//	}
//}
//3.求一个子串在一个字符串中出现的次数,如果该字符不出现则返回 0;
//#include<stdio.h>
//#include<string.h>
//int judge(char* str, char* sonStr) 
//{
//
//    int len_str, len_sonStr;
//    char* p = str;
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    len_sonStr = strlen(sonStr);
//    len_str = strlen(str);
//    for (i = 0; i < len_str - len_sonStr + 1; i++) 
//    {
//        for (j = 0; j < len_sonStr; j++) 
//        {
//            if (p[i + j] != sonStr[j]) 
//            {
//                break;
//            }
//            else if (j == len_sonStr - 1)
//            {
//                count++;
//            }
//        }
//    }
//    return count;
//}
//int main() 
//{
//    char a[1000];
//    char b[100];
//    gets(a);
//    gets(b);
//    printf("%d", judge(a, b));
//    return 0;
//}
//--设有三个学生,4门功课,试编写两个函数,1.求每个学生的平均分
//2.找出课程不及格的学生并统计门次
//#include<stdio.h>
//double ave(int* p)
//{
//	int i = 0;
//	int* p1 = p;
//	double add = 0;
//	for (i = 0; i <=3;i++)
//	{
//		add += *(p1 + i);
//	}
//	return add / i;
//}
//int  find(int* p)
//{
//	int i = 0;
//	int* p1 = p;
//	int count = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		if (*(p1 + i) < 60)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[4][5] = {0};
//	int i = 0;
//	for (i = 1; i < 4; i++)//输入成绩
//	{
//		printf("请依次输入第%d个学生的功课1,功课2,功课3,功课4,并以回车结束每行\n",i);
//		scanf("%d%d%d%d", &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	for (i = 1; i < 4;i++)
//	{
//		int* p = &arr[i][1];
//		printf("第%d个学生的平均分为%lf\n", i, ave(p));
//	}
//	for (i = 1; i < 4; i++)
//	{
//		int* p2 = &arr[i][1];
//		if ((find(p2)) > 0)
//		{
//			printf("第%d个学生不及格的科目数为%d\n", i, find(p2));
//		}
//	}
//}
//设计一个函数,把两个整形形参中较大那个数的地址作为函数值返回,并写主函数
//实现调用
//#include<stdio.h>
//int* cmp(int* p1,int *p2)
//{
//	return (*p1 > *p2) ? p1 : p2;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	printf("请输入两个数并用空格隔开:");
//	scanf("%d%d", &a, &b);
//	int* p1 = &a; int* p2 = &b;
//	int *p=cmp(p1, p2);
//	printf("较大的数%d的地址为%p\n",*p, p);
//}
//输入5个字符串,从中找出最大的字符串并输出
//要求要用二维数组存放此字符串组
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char a[5][1] = {""};
//	char*a1 = a;
//	for (i = 0; i < 5; i++)
//	{
//		gets((a1 + i));
//	}
//	a1 = a;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s", (a1 + i));
//	}
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char s[5][100], i, j;
	for (i = 0; i < 5; ++i)
	{
		gets(*(s+i));
	}
	for (j = 0, i = 1; i < 5; ++i)
	{
		if (strcmp(*(s+j), *(s+i)) < 0)
		{
			j = i;
		}
	}
	printf("\n最长的字符串是:");
	puts(*(s + j));
	return 0;
}