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
////�����ַ���
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
//	//������
//	reverse(arr);
//	printf("%s", arr);
//}


//��ӡ������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�õ�λ��
//		int sz = 1;//ע��Ϊʲô��1
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
//			sum += pow(tmp % 10, sz);//���˵��ǲ��ı�
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		//�õ�n�η����ܺ�
//		
//		//�ж��Ƿ����
//	}
//}
//��ӡ����ͼ��

