#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Move_(char From, char Dest)					//移动一个圆盘，将圆盘从来源移动到目的地  从From 移动到Dest 
//{
//	printf("将一个圆盘从%c柱子 -> %c柱子\n", From, Dest);
//}
////分为两步,一步是转移上面的,一步是转移最后的
////每步转移上面的都要分为这两步
////AB两柱在整个过程中地位是在动态的转换的
////n-1从A借助C到B
////1直接A到C
////此刻B的地位相当于了上一步A的地位
////如何把n-1从A借助C到B?
////n-2从B借助C到A
////1直接B到C
////此刻AB的地位又要互换了
//void Hanoi(char A, char B, char C, int  n)	//总共有n个圆盘，将这n个圆盘  借助 B 柱子 从 A 柱子移动到  C 柱子
//{
//	if (n == 1)								//当只有一个圆盘时，直接圆盘从 A 柱 移动到 C 柱
//	{
//		Move_(A, C);
//	}
//	
//	else//此时的相法只是把形参n给移动了(仍回到原模型)
//	{
//		Hanoi(A, C, B, n - 1);			//当不只一个圆盘时，我们先将上面 （n -1）个圆盘 借助 C柱子  从 A 柱子移动到 B 柱子
//		Move_(A, C);					//A柱剩余一个圆盘，将剩下的一个圆盘从 A 移动到 C-----A空.
//		Hanoi(B, A, C, n - 1);			//再将（n-1）个圆盘 借助 A柱子 从 B柱子 移动到 C柱子(上一步大动作)-----嵌套
//	}
//}
//int main()
//{
//
//	int  n = 0;							//汉诺塔层数
//	char A = 'A';						//A柱子
//	char B = 'B';						//B柱子
//	char C = 'C';						//C柱子
//	scanf("%d", &n);
//
//	Hanoi(A, B, C, n);						//将n个圆盘，借助于B柱子，从A柱子移动到C柱子
//	return 0;
//}
#include<stdio.h>

int del_element(int arr[], int n) //n为数组的元素个数
{
    int delect = 0;
    int k;
    int m = n;
    printf("删除操作前的数组：\n");
    for (k = 0; k < n; k++)
    {
        printf("%4d", arr[k]);
    }
    printf("\n");

    printf("请输入你要删除的数：");
    scanf("%d", &delect);
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        if (delect == arr[i])
        {
            m--;
            for (j = i; j <= n - 2; j++)
            {
                arr[j] = arr[j + 1];//覆盖
            }
        }
    }
    return m;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,0,2,1,2,2,1 };
    int length_arr = sizeof(arr) / sizeof(int);
    int m;
    m = del_element(arr, length_arr);
    printf("完成操作后的数组：\n");
    int i;
    for (i = 0; i < m; i++)
    {
        printf("%4d", arr[i]);
    }
    return 0;
}

