#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age;
//	int year;
//	printf("����������ͳ�����ݲ��ÿո����:\n");
//	scanf("%d%d",&age,&year);//��������ͳ������
//	printf("������%d��\n", age+year);
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
//	//����һ:
//	//����123��õ�����ÿһλ,123%10=3,123/10=12;12%10=2,12/10=1;1%10=1
//	//���õ�����ÿһλ
//	//������ƾ�%2�õ�����,/2ȥ���������ѭ��
//	/*int num = 0;
//	int count = 0;*/
//	//scanf("%d", &num);
//	////ͳ��num�Ĳ������м���1
//	//while (num)//һֱѭ��
//	//{
//	//	if (count % 2 == 1)//1/2=0
//	//	{
//	//		count++;
//	//		num = num / 2;
//	//	}
//	//	printf("%d", count);
//	//}
//	//return 0; -1%2,��0,��-1.��Ϊ��0��������while(��),����ѭ��
//	//���Դ�������
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//����õ������Ƶ�32λ����λ
//	//��λ��&,��Ϊֻ��11�����Ϊ1
//	//������&��32��11111111111111111111111111111111
//	//�����Ƕ��߼�&������ֽ�����1,�ֳ�������ͬ������,
//	//���뵽��������λ���Ƶ�ĩβ���м���
//	//��ʱ��Ӧ�õ�����λ����
//	int i = 0;
//	for (i = 0; i < 32; i++)//0�ǵ�һλ
//	{
//		if (1 ==( (num >> i)&1))//Ҫ���������Ų��ܷ�ֹ��������ȼ�����
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
//	//sizeof()������ռ���Ϳռ�Ĵ�С,��λΪ�ֽ�
//	printf("%zd\n", sizeof(a));//4//����ʡ������
//	printf("%zd\n", sizeof(int));//4//����������͵Ļ��Ͳ���ʡ��
//
//	printf("%zd\n", sizeof(c));//1
//	printf("%zd\n", sizeof(char));//1
//
//	printf("%zd\n", sizeof(p));//8
//	printf("%zd\n", sizeof(char*));//8,���е�ָ�������x64λ���涼Ϊ8
//
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(int [10]));//40 intΪ4,[10]����40
//}
//int main()
//{
//	short a = 0;
//	int s = 10;
//	printf("%zd\n", sizeof(a = s + 5));//a��ǰ��������������,���Խ��Ϊ2(short)
//	printf("%d\n", a);//sizeof()���������ʵ�ʲ���������,���Խ����ȻΪ0
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//����λΪ��,��λ��ʱ��ȫ����0,00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//����λΪ��,��λ��ʱ��ȫ����0,01111111
//	//00000011
//	//01111111
//	//10000010//����c
//	char c = b + a;
//	//000000000000000000000000
//	printf("%d\n", c);//��ӡһ������,�ַ�����������//11111111111111111111111110000010
//	//11111111111111111111111110000010����
//	//11111111111111111111111110000001����
//	//10000000000000000000000001111110ԭ��
//	//��������Ϊ-126
//	return 0;
//}
//ʵ��1
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
//ͳ�ƶ�������1�ĸ���
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
//}//�˴�����������(����)(unsigned�����ų�������)
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	//дһ�����������������(����)�е�1�ĸ���
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
//	//дһ�����������������(����)�е�1�ĸ���
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
//		printf("�����������7");
//	}
//	else
//	{
//		printf("���������7");
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
//	printf("����������ͳ�����ݲ��ÿո����:\n");
//	scanf("%d.%d",&age,&year);//��������ͳ������
//	printf("������%d��\n", age+year);
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
