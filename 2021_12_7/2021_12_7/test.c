#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1,ʹ��ָ���������С�����˳�������������
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


//2.��12���·ݵ�Ӣ�����Ƴ�ʼ��Ϊһ���ַ�ָ������,��������������Ϊ1-12ʱ
//��ʾ��Ӧ���·���,������������ʱ��ʾ������Ϣ
//#include<stdio.h>
//int main()
//{
//	char* arr[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
//	int i = 0;
//	printf("�������·�\n");
//	while (scanf("%d", &i))
//	{
//		if (i > 12 || i < 1)
//		{
//			printf("�������\n");
//			break;
//		}
//		else
//		{
//			printf("%s\n", arr[i - 1]);
//		}
//		printf("�������·�\n");
//	}
//}
//3.��һ���Ӵ���һ���ַ����г��ֵĴ���,������ַ��������򷵻� 0;
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
//--��������ѧ��,4�Ź���,�Ա�д��������,1.��ÿ��ѧ����ƽ����
//2.�ҳ��γ̲������ѧ����ͳ���Ŵ�
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
//	for (i = 1; i < 4; i++)//����ɼ�
//	{
//		printf("�����������%d��ѧ���Ĺ���1,����2,����3,����4,���Իس�����ÿ��\n",i);
//		scanf("%d%d%d%d", &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//	}
//	for (i = 1; i < 4;i++)
//	{
//		int* p = &arr[i][1];
//		printf("��%d��ѧ����ƽ����Ϊ%lf\n", i, ave(p));
//	}
//	for (i = 1; i < 4; i++)
//	{
//		int* p2 = &arr[i][1];
//		if ((find(p2)) > 0)
//		{
//			printf("��%d��ѧ��������Ŀ�Ŀ��Ϊ%d\n", i, find(p2));
//		}
//	}
//}
//���һ������,�����������β��нϴ��Ǹ����ĵ�ַ��Ϊ����ֵ����,��д������
//ʵ�ֵ���
//#include<stdio.h>
//int* cmp(int* p1,int *p2)
//{
//	return (*p1 > *p2) ? p1 : p2;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d", &a, &b);
//	int* p1 = &a; int* p2 = &b;
//	int *p=cmp(p1, p2);
//	printf("�ϴ����%d�ĵ�ַΪ%p\n",*p, p);
//}
//����5���ַ���,�����ҳ������ַ��������
//Ҫ��Ҫ�ö�ά�����Ŵ��ַ�����
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
	printf("\n����ַ�����:");
	puts(*(s + j));
	return 0;
}