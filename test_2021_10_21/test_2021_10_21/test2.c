#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
////1.	输入三个正整数，判定是否能够构成直角三角形
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数并用空格隔开:");
//	scanf("%d%d%d", &a, &b, &c);
//	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
//	{
//		printf("能构成直角三角形\n");
//	}
//	else
//	{
//		printf("不能构成直角三角形\n");
//	}
//}
//2.	编程计算n!。（n是1到20之间的整数，如果n < 1或者n>20则提示Error）
//int main()
//{
//	int n = 0;
//	printf("请输入n的值:");
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
// 打印1000对孪生素数
//int ISORNOT(int x)
//{
//	int ret = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(x)+1; j++)//j要等于2开始.平方算法.
//	{
//		if (x % j == 0)//判断整数
//		{
//			ret = 0;
//			break;
//		}//后面的语句不执行了.
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
//			printf("第%d对孪生素数是%d和%d\n", count, i, i + 2);
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
// 通过和的形式来打印
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
//计算极限
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
//	printf("极限值是%10.8lf\n", sum);
//}
//1.通过函数的调用,实现两个数的除法
//double div(double x, double y)
//{
//	double z = (x / y);
//	return z;
//}
//int main()
//{
//	double a = 0;
//	double b = 0;
//	printf("请依次输入除数与被除数并用空格隔开:");
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
//2.构建一个函数int max(int x ,int y)求两个数的最大值，
//并通过该函数求任意三个整数的最大值。
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
//	printf("请输入三个正整数并用空格隔开:");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("最大数是%d", max(max(a, b), c));
//}
//3.	通过函数调用，计算两个数的最小公倍数
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
//			printf("这两个数的最小公倍数是%d",i);
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数并用空格隔开:");
//	scanf("%d%d", &a, &b);
//	make(a, b);
//}
//1.	观察数列：1, 2, 1, 3, 2, 5, 3, 8,4,12,5,17,6,23,7,30,8,38,9,47求出该数列前20项，然后逆序输出。
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
//2.将一个一维数组a[9]中各元素的值按行的顺序放入二维数组b[3][3]中
//int main()
//{
//	int a[9] = { 0 };
//	int i = 0;
//	printf("请输入9个数据将其录入到原一维数组中:");
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
//	printf("二维数组的元素分别是:\n");
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
//			printf("n不是素数\n");
//			break;
//		}
//		else
//		{
//			printf("n是素数\n");
//		}
//	}
//	return 0;
//}
//-----------------------------------------------------
//3.将一个n阶方阵S反对角线上的元素置为1，其余元素置为0。
//并输出该方阵
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
//C语言11-24.将一个一维数组a[9]中各元素的值按行的顺序放入二维数组b[3][3]中
//int main()
//{
//	int a[9] = { 0 };
//	int i = 0;
//	printf("请输入9个数据将其录入到原一维数组中:");
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
//	printf("二维数组的元素分别是:\n");
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
//	printf("请给矩阵赋予一定的数据(以空格隔开每个元素并用回车结束输入)\n");
//	printf("该矩阵有%d行%d列\n",row,col);
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
//	printf("最大的元素D[%d][%d]=%d在第%d行,第%d列\n", tmpi,tmpj,D[tmpi][tmpj], tmpi+1, tmpj+1);
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
//一个数组
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,4,4,5,6,4,6};
//	int sz1 = sizeof(arr) / sizeof(int);
//	int i = 0;
//	int out = 0;
//	int j = 0;
//	int count = 0;
//	printf("交换前: \n");
//	for (i = 0; i <= 9; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	printf("\n请输入要删除的数:");
//	scanf("%d", &out);
//	for (i = 9; i >= 0; i--)//从右向左,把全部的out置于数组的右边
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
//	printf("\n交换后: ");
//	for(i = 0; i <sz1; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}
//使用两个数组
//#include<stdio.h>
//int main()
//{
//	int arrold[10] = { 1,2,3,4,4,4,5,6,4,6 };
//	int arrnew[10] = {0};
//	int i = 0;
//	int out = 4;
//	int j = 0;
//	int count = 0;
//	printf("处理前: ");
//	for (i = 0; i <= 9; i++)
//	{
//		printf(" %d ", arrold[i]);
//	}
//	printf("\n");
//	printf("请输入删除的数：");
//	scanf("%d", &out);
//	for (i = 0; i <=9; i++)//把非out的元素放到新数组里面
//	{
//		if (arrold[i] != out)
//		{
//			arrnew[j++] = arrold[i];
//			count++;
//		}
//	}
//	printf("\n处理后: ");
//	for (i = 0; i < count; i++)
//	{
//		printf(" %d ", arrnew[i]);
//	}
//	return 0;
//}
//---对一个数组进行更改
//#include<stdio.h>
//int del(int arr[], int sz)
//{
//    int out = 0;
//    int m = sz;
//    int i = 0;
//    int j = 0;
//    printf("删除前的数组：\n");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%3d", arr[i]);
//    }
//    printf("\n请输入删除的数：");
//    scanf("%d", &out);
//    for (i = sz - 1; i >= 0; i--)//从右往左
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
//    return m;//返回的是非out的个数
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,4,4,5,6,4,6 };
//    int sz= sizeof(arr) / sizeof(int);//元素个数
//    int ret=del(arr, sz);//非out的个数
//    int i=0;
//    printf("删除后的数组为：\n");
//    for (i = 0; i < ret; i++)//
//        printf("%3d", arr[i]);
//---实际上并未改变这个数组中元素的个数,只是打印了需要的部分
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

//----合并数组并保持有序
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



//-------------圆桌问题
//#include<stdio.h>
//int main()
//{
//	int outer = 0;
//	int p[100] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p[i] = i + 1;//初始化
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
//			printf("第%2d位out的人是%2d号\n", outer, p[i]);
//			p[i] = 0;
//		}
//		i = (i + 1) % 100;
//	}
//}







//C语言3
//int ISORNOT(int x)
//{
//	int ret = 0;
//	int j = 0;
//	for (j = 2; j <= sqrt(x)+1; j++)//j要等于2开始.平方算法.
//	{
//		if (x % j == 0)//判断整数
//		{
//			ret = 0;
//			break;
//		}//后面的语句不执行了.
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
//			printf("第%d大的素数是%d\n", count, i);
//		}
//		if (count == 3)
//		{
//			break;
//		}
//	}
//}

//c语言2
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
//		printf("退出系统\n");
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
//		printf("选择菜单:\n");
//		printf("  1 求两个数的和\n");
//		printf("  2 求两个数的差\n");
//		printf("  3 求两个数的商和余数\n");
//		printf("  4 求两个数的倒数之和\n");
//		printf("  5 退出系统\n");
//		printf("请选择:");
//		scanf("%d", &x);
//		if (x != 1 && x != 2 && x != 3 && x != 4)
//		{
//			printf("已退出\n");
//			break;
//		}
//		printf("请输入两个数并用空格隔开:");
//		scanf("%d%d", &a, &b);
//		menu(x,a,b);
//		printf("按任意键返回该菜单,继续选择");
//		system("pause");
//	}
//	return 0;
//}

//--------------C语言第2题
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
//    printf("请输入积分区间a,b: ");
//    scanf("%f%f",&a,&b);
//    printf("请输入n(均分份数)的值: ");
//    scanf("%d%d",&n1,&n2); 
//    printf("积分s1为%.3f\n",E(a,b,n1));
//    printf("积分s1为%.3f\n", E(a, b, n2));
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
//    printf("请输入积分区间a,b: ");
//    scanf("%lf%lf", &a, &b);
//    printf("请输入n(均分份数)的值: ");
//    scanf("%d%d", &n1, &n2);
//    printf("积分s1为%lf\n", E(a, b, n1));
//    printf("积分s1为%lf\n", E(a, b, n2));
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
float* search(float(*pointer)[4])//一维数组指针--二维数组行地址
{
    int i;
    float* pt;//--一级指针
    pt = *(pointer + 1);//(初始行+1)行第一列地址,如果找不到不及格的话.
    for (i = 0; i < 4; i++)
    {
        if (*(*pointer + i) < 60)//如果找到的话
        {
            pt = *pointer;//初始行第一列地址 
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
        if (p == *(score + i))//意思是有不及格的.
        {
            printf("No. %d scores: ", i);
            for (j = 0; j < 4; j++)
            {
                printf("%5.2f\t", *(p + j));//打印其每一个元素.
            }
            printf("\n");
        }
    }
}
