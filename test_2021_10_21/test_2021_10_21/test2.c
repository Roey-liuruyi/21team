#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
////1.	�����������������ж��Ƿ��ܹ�����ֱ��������
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d%d", &a, &b, &c);
//	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
//	{
//		printf("�ܹ���ֱ��������\n");
//	}
//	else
//	{
//		printf("���ܹ���ֱ��������\n");
//	}
//}
//2.	��̼���n!����n��1��20֮������������n < 1����n>20����ʾError��
//int main()
//{
//	int n = 0;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	int i = 0;
//	unsigned long long sub = 1;
//	if ((n >= 1) || (n <= 20))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sub = i * sub;
//		}
//		printf("%llu", sub);
//	}
//	else
//	{
//		printf("Error\n");
//	}
//}
// ��ӡ1000����������
//int ISORNOT(int x)
//{
//	int ret = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(x)+1; j++)//jҪ����2��ʼ.ƽ���㷨.
//	{
//		if (x % j == 0)//�ж�����
//		{
//			ret = 0;
//			break;
//		}//�������䲻ִ����.
//		else
//		{
//			ret = 1;
//		}
//
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 3;; i+=2)
//	{
//		if (ISORNOT(i) && ISORNOT(i + 2))
//		{
//			count++;
//			printf("��%d������������%d��%d\n", count, i, i + 2);
//		}
//		if (count == 1000)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%2d  ", i);
//	}
//	printf("\n");
//	int j = 0;
//	for(j=1;j<=5;j++)
//	{
//		printf("%2d  ", j*j);
//	}
//	printf("\n");
//	int k = 0;
//	int tal = 0;
//	for (k = 2; k <= 10; k+=2)
//	{
//		tal = tal + k;
//		printf("%2d  ",tal);
//	}
//	printf("\n");
//	int k2 = 0;
//	int tal2 = 0;
//	for (k2 = 3; k2 <= 19; k2 += 4)
//	{
//		tal2 = tal2 + k2;
//		printf("%2d  ", tal2);
//	}
//	printf("\n");
//}
// 
// 
// ͨ���͵���ʽ����ӡ
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int arr[20] = { 0 };
//	for (i = 0; i <= 4; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[5] = 1;
//	for (i = 6; i <= 9; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 6] + arr[i - 5];
//	}
//	for (i = 10; i <= 19; i++)
//	{
//		arr[i] = arr[i - 5] + arr[i - 10];
//	}
//	for (i = 0; i <= 19; i++)
//	{
//		printf("%2d ", arr[i]);
//		count++;
//		if (count % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//}
//���㼫��
//int main()
//{
//	int sign = -1.0;
//	int i = 0;
//	double sum = 0;
//	double tmp = 0;
//	double lim = 0.69314718055995;
//	for (i = 1;; i++)
//	{
//		sign = -sign;
//		tmp = sign*(1.0 / i);
//		sum = sum + tmp;
//		if (fabs(sum-lim) <= 1e-6)
//		{
//			break;
//		}
//	}
//	printf("����ֵ��%10.8lf\n", sum);
//}
//1.ͨ�������ĵ���,ʵ���������ĳ���
//double div(double x, double y)
//{
//	double z = (x / y);
//	return z;
//}
//int main()
//{
//	double a = 0;
//	double b = 0;
//	printf("��������������뱻�������ÿո����:");
//	scanf("%d%d", &a, &b);
//	if (b == 0)
//	{
//		printf("error");
//	}
//	else
//	{
//		printf("%lf", div(a, b));
//	}
//
//}
//2.����һ������int max(int x ,int y)�������������ֵ��
//��ͨ���ú����������������������ֵ��
//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������������ÿո����:");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("�������%d", max(max(a, b), c));
//}
//3.	ͨ���������ã���������������С������
//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//void make(int x,int y)
//{
//	int i = 0;
//	int z = max(x, y);
//	for (i = z;; i++)
//	{
//		if (((i % x) == 0) && ((i % y) == 0))
//		{
//			printf("������������С��������%d",i);
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("���������������ÿո����:");
//	scanf("%d%d", &a, &b);
//	make(a, b);
//}
//1.	�۲����У�1, 2, 1, 3, 2, 5, 3, 8,4,12,5,17,6,23,7,30,8,38,9,47���������ǰ20�Ȼ�����������
//int main()
//{
//	int arr[20] = { 1, 2, 1, 3, 2, 5, 3, 8,4,12,5,17,6,23,7,30,8,38,9,47 };
//	int i=0;
//	for (i = 19; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//----------------------------------------------------------
//2.��һ��һά����a[9]�и�Ԫ�ص�ֵ���е�˳������ά����b[3][3]��
//int main()
//{
//	int a[9] = { 0 };
//	int i = 0;
//	printf("������9�����ݽ���¼�뵽ԭһά������:");
//	while (9 - i)
//	{
//		scanf("%d", &a[i]);
//		i++;
//	}
//	int b[3][3] = { 0 };
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = a[k];
//			k++;
//		}
//	}
//	printf("��ά�����Ԫ�طֱ���:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("b[%d][%d]=%d    ",i,j,b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//----------------------------------------------------------
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("n��������\n");
//			break;
//		}
//		else
//		{
//			printf("n������\n");
//		}
//	}
//	return 0;
//}
//-----------------------------------------------------
//3.��һ��n�׷���S���Խ����ϵ�Ԫ����Ϊ1������Ԫ����Ϊ0��
//������÷���
//#include<stdio.h>
//#define n 20
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[n][n] = { 0 };
//	
//}
//----------------------------------------------------------
//C����11-24.��һ��һά����a[9]�и�Ԫ�ص�ֵ���е�˳������ά����b[3][3]��
//int main()
//{
//	int a[9] = { 0 };
//	int i = 0;
//	printf("������9�����ݽ���¼�뵽ԭһά������:");
//	while (9 - i)
//	{
//		scanf("%d", &a[i]);
//		i++;
//	}
//	int b[3][3] = { 0 };
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[i][j] = a[k];
//			k++;
//		}
//	}
//	printf("��ά�����Ԫ�طֱ���:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("b[%d][%d]=%d    ",i,j,b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//----------------------------------------------------------
//#include<stdio.h>
//#define row 3
//#define col 3
//int main()
//{
//	int D[row][col] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int tmpi = 0;
//	int tmpj = 0;
//	printf("���������һ��������(�Կո����ÿ��Ԫ�ز��ûس���������)\n");
//	printf("�þ�����%d��%d��\n",row,col);
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			scanf("%d", &D[i][j]);
//		}
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (D[i][j] > tmp)
//			{
//				tmp = D[i][j];
//				tmpi = i;
//				tmpj = j;
//			}
//		}
//	}
//	printf("����Ԫ��D[%d][%d]=%d�ڵ�%d��,��%d��\n", tmpi,tmpj,D[tmpi][tmpj], tmpi+1, tmpj+1);
//}
//#include<stdio.h>
//#define row 3
//#define col 3
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[row][col] = { 0 };
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			printf(" %d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//һ������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,4,4,5,6,4,6};
//	int sz1 = sizeof(arr) / sizeof(int);
//	int i = 0;
//	int out = 0;
//	int j = 0;
//	int count = 0;
//	printf("����ǰ: \n");
//	for (i = 0; i <= 9; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	printf("\n������Ҫɾ������:");
//	scanf("%d", &out);
//	for (i = 9; i >= 0; i--)//��������,��ȫ����out����������ұ�
//	{
//		if (arr[i] == out)
//		{
//			sz1--;
//			arr[9 - count] = out;
//			for (j = i; j <9 - count; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//		}
//	}
//	printf("\n������: ");
//	for(i = 0; i <sz1; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}
//ʹ����������
//#include<stdio.h>
//int main()
//{
//	int arrold[10] = { 1,2,3,4,4,4,5,6,4,6 };
//	int arrnew[10] = {0};
//	int i = 0;
//	int out = 4;
//	int j = 0;
//	int count = 0;
//	printf("����ǰ: ");
//	for (i = 0; i <= 9; i++)
//	{
//		printf(" %d ", arrold[i]);
//	}
//	printf("\n");
//	printf("������ɾ��������");
//	scanf("%d", &out);
//	for (i = 0; i <=9; i++)//�ѷ�out��Ԫ�طŵ�����������
//	{
//		if (arrold[i] != out)
//		{
//			arrnew[j++] = arrold[i];
//			count++;
//		}
//	}
//	printf("\n�����: ");
//	for (i = 0; i < count; i++)
//	{
//		printf(" %d ", arrnew[i]);
//	}
//	return 0;
//}
//---��һ��������и���
//#include<stdio.h>
//int del(int arr[], int sz)
//{
//    int out = 0;
//    int m = sz;
//    int i = 0;
//    int j = 0;
//    printf("ɾ��ǰ�����飺\n");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%3d", arr[i]);
//    }
//    printf("\n������ɾ��������");
//    scanf("%d", &out);
//    for (i = sz - 1; i >= 0; i--)//��������
//    {
//        if (out == arr[i])
//        {
//            m--;
//            for (j = i; j <= sz - 2; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//        }
//    }
//    return m;//���ص��Ƿ�out�ĸ���
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,4,4,5,6,4,6 };
//    int sz= sizeof(arr) / sizeof(int);//Ԫ�ظ���
//    int ret=del(arr, sz);//��out�ĸ���
//    int i=0;
//    printf("ɾ���������Ϊ��\n");
//    for (i = 0; i < ret; i++)//
//        printf("%3d", arr[i]);
//---ʵ���ϲ�δ�ı����������Ԫ�صĸ���,ֻ�Ǵ�ӡ����Ҫ�Ĳ���
//    return 0;
//}





//#include<stdio.h>
//int* make(int arr1[],int sz1,int arr2[],int sz2,int arr3[])
//{
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//	for (i = sz1; i < (sz2+sz1); i++)
//	{
//		arr3[i] = arr2[i - sz1];
//	}
//	int* p = arr3;
//	return p;
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[] = { 7,8,9,10,11,12 };
//	int sz2 = sizeof(arr1) / sizeof(arr1[0]);
//	int arr3[] = { 0 };
//	int* p = make(arr1, sz1, arr2, sz2, arr3);
//	for (i = 0; i < (sz1 + sz2-1); i++)
//	{
//		printf("%3d", *(p + i));
//	}
//}

//----�ϲ����鲢��������
//#include<stdio.h>
//void sort(int *p, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int count = 0;
//	for (j = 0;j < sz; j++)
//	{
//		for (i = 0; i < sz - count; i++)
//		{
//			if (*p > *(p+1))
//			{
//				tmp = *(p + 1);
//				*(p + 1) = *p;
//				*p = tmp;
//			}
//			p++;
//		}
//		count++;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,3 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	sort(arr1, sz1);
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	int arr2[] = { 7,8,9,10,11,12 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int arr3[] = {0};
//	for (i = 0; i <(sz2 + sz1); i++)
//	{
//		if (i < sz1)
//		{
//			arr3[i] = arr1[i];
//		}
//		else
//		{
//			arr3[i] = arr2[i - sz1];
//		}
//	}
//	for (i = 0; i <(sz1 + sz2);i++)
//	{
//		printf(" %d ", arr3[i]);
//	}
//	return 0;
//}



//-------------Բ������
//#include<stdio.h>
//int main()
//{
//	int outer = 0;
//	int p[100] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p[i] = i + 1;//��ʼ��
//	}
//	i = 0;
//	while (outer < 100)
//	{
//		if (p[i] != 0)
//		{
//			count++;
//		}
//		if (p[i] != 0&&count%13==0)
//		{
//			outer++;
//			printf("��%2dλout������%2d��\n", outer, p[i]);
//			p[i] = 0;
//		}
//		i = (i + 1) % 100;
//	}
//}







//C����3
//int ISORNOT(int x)
//{
//	int ret = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(x)+1; j++)//jҪ����2��ʼ.ƽ���㷨.
//	{
//		if (x % j == 0)//�ж�����
//		{
//			ret = 0;
//			break;
//		}//�������䲻ִ����.
//		else
//		{
//			ret = 1;
//		}
//
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 99;; i-=2)
//	{
//		if (ISORNOT(i))
//		{
//			count++;
//			printf("��%d���������%d\n", count, i);
//		}
//		if (count == 3)
//		{
//			break;
//		}
//	}
//}

//c����2
//#include<stdio.h>
//#include<stdlib.h>
//
//void menu(int n,int a,int b)
//{
//	switch (n)
//	{
//	case 1:
//		printf("%d+%d=%d\n",a,b,a+b);
//		break;
//	case 2:
//		printf("%d-%d=%d\n", a, b, a - b);
//		break;
//	case 3:
//		printf("%d/%d=%d\n", a, b, a / b);
//		printf("%dmod%d=%d\n", a, b, a % b);
//		break;
//	case 4:
//		printf("1/%d+1/%d=%lf\n",a,b,1.0/a+1.0/b);
//		break;
//	case 0:
//		printf("�˳�ϵͳ\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//}
//int main()
//{
//	int  a = 0;
//	int  b = 0;
//	int x = 0;
//	while (1)
//	{
//		printf("ѡ��˵�:\n");
//		printf("  1 ���������ĺ�\n");
//		printf("  2 ���������Ĳ�\n");
//		printf("  3 �����������̺�����\n");
//		printf("  4 ���������ĵ���֮��\n");
//		printf("  5 �˳�ϵͳ\n");
//		printf("��ѡ��:");
//		scanf("%d", &x);
//		if (x != 1 && x != 2 && x != 3 && x != 4)
//		{
//			printf("���˳�\n");
//			break;
//		}
//		printf("���������������ÿո����:");
//		scanf("%d%d", &a, &b);
//		menu(x,a,b);
//		printf("����������ظò˵�,����ѡ��");
//		system("pause");
//	}
//	return 0;
//}

//--------------C���Ե�2��
//#include<stdio.h>
//#include<math.h> 
//float f(float x)
//{
//     return  sin(2.0*x)+x;
//}
//float E(float a,float b,int n )
//{
//    int i = 0;
//    float E = 0;
//    float l = 0;
//    l = (a + b) / n;
//    for (i = 0; i < n; i++, a += l)
//    {
//        E += l * (f(a) + f(a + l)) / 2;
//    }
//    return E;
//}
//int  main()
//{
//    float a = 0;
//    float b = 0;
//    int n1 = 0;
//    int n2 = 0;
//    int s1 = 0;
//    int s2 = 0;
//    printf("�������������a,b: ");
//    scanf("%f%f",&a,&b);
//    printf("������n(���ַ���)��ֵ: ");
//    scanf("%d%d",&n1,&n2); 
//    printf("����s1Ϊ%.3f\n",E(a,b,n1));
//    printf("����s1Ϊ%.3f\n", E(a, b, n2));
//    return 0;
// }


//#include<stdio.h>
//#include<math.h> 
//double f(double x)
//{
//    return  sin(2.0 * x) + x;
//}
//double E(double a, double b, int n)
//{
//    int i = 0;
//    double E = 0;
//    double l = 0;
//    l = (a + b) / n;
//    for (i = 0; i < n; i++, a += l)
//    {
//        E += l * (f(a) + f(a + l)) / 2;
//    }
//    return E;
//}
//int  main()
//{
//    double a = 0;
//    double b = 0;
//    int n1 = 0;
//    int n2 = 0;
//    int s1 = 0;
//    int s2 = 0;
//    printf("�������������a,b: ");
//    scanf("%lf%lf", &a, &b);
//    printf("������n(���ַ���)��ֵ: ");
//    scanf("%d%d", &n1, &n2);
//    printf("����s1Ϊ%lf\n", E(a, b, n1));
//    printf("����s1Ϊ%lf\n", E(a, b, n2));
//    return 0;
//}
//#include <stdio.h> 
//void main()
//{
//    char* string = "I  love China!";
//    printf("%s\n", string);
//    //while (*string)
//    //{
//    //    putchar(string[7]);
//    //    string++;
//    //}
//    int i = 0;
//    for (i = 7; string[i] != '\0'; i++)
//    {
//        putchar(string[i]);
//    }
//}
float* search(float(*pointer)[4])//һά����ָ��--��ά�����е�ַ
{
    int i;
    float* pt;//--һ��ָ��
    pt = *(pointer + 1);//(��ʼ��+1)�е�һ�е�ַ,����Ҳ���������Ļ�.
    for (i = 0; i < 4; i++)
    {
        if (*(*pointer + i) < 60)//����ҵ��Ļ�
        {
            pt = *pointer;//��ʼ�е�һ�е�ַ 
            break;
        }
    }
    return(pt);
}
#include <stdio.h>
void main()
{
    float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
    float* p;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        p = search(score + i);
        if (p == *(score + i))//��˼���в������.
        {
            printf("No. %d scores: ", i);
            for (j = 0; j < 4; j++)
            {
                printf("%5.2f\t", *(p + j));//��ӡ��ÿһ��Ԫ��.
            }
            printf("\n");
        }
    }
}
