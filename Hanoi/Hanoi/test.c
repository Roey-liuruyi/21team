#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Move_(char From, char Dest)					//�ƶ�һ��Բ�̣���Բ�̴���Դ�ƶ���Ŀ�ĵ�  ��From �ƶ���Dest 
//{
//	printf("��һ��Բ�̴�%c���� -> %c����\n", From, Dest);
//}
////��Ϊ����,һ����ת�������,һ����ת������
////ÿ��ת������Ķ�Ҫ��Ϊ������
////AB���������������е�λ���ڶ�̬��ת����
////n-1��A����C��B
////1ֱ��A��C
////�˿�B�ĵ�λ�൱������һ��A�ĵ�λ
////��ΰ�n-1��A����C��B?
////n-2��B����C��A
////1ֱ��B��C
////�˿�AB�ĵ�λ��Ҫ������
//void Hanoi(char A, char B, char C, int  n)	//�ܹ���n��Բ�̣�����n��Բ��  ���� B ���� �� A �����ƶ���  C ����
//{
//	if (n == 1)								//��ֻ��һ��Բ��ʱ��ֱ��Բ�̴� A �� �ƶ��� C ��
//	{
//		Move_(A, C);
//	}
//	
//	else//��ʱ���෨ֻ�ǰ��β�n���ƶ���(�Իص�ԭģ��)
//	{
//		Hanoi(A, C, B, n - 1);			//����ֻһ��Բ��ʱ�������Ƚ����� ��n -1����Բ�� ���� C����  �� A �����ƶ��� B ����
//		Move_(A, C);					//A��ʣ��һ��Բ�̣���ʣ�µ�һ��Բ�̴� A �ƶ��� C-----A��.
//		Hanoi(B, A, C, n - 1);			//�ٽ���n-1����Բ�� ���� A���� �� B���� �ƶ��� C����(��һ������)-----Ƕ��
//	}
//}
//int main()
//{
//
//	int  n = 0;							//��ŵ������
//	char A = 'A';						//A����
//	char B = 'B';						//B����
//	char C = 'C';						//C����
//	scanf("%d", &n);
//
//	Hanoi(A, B, C, n);						//��n��Բ�̣�������B���ӣ���A�����ƶ���C����
//	return 0;
//}
#include<stdio.h>

int del_element(int arr[], int n) //nΪ�����Ԫ�ظ���
{
    int delect = 0;
    int k;
    int m = n;
    printf("ɾ������ǰ�����飺\n");
    for (k = 0; k < n; k++)
    {
        printf("%4d", arr[k]);
    }
    printf("\n");

    printf("��������Ҫɾ��������");
    scanf("%d", &delect);
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        if (delect == arr[i])
        {
            m--;
            for (j = i; j <= n - 2; j++)
            {
                arr[j] = arr[j + 1];//����
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
    printf("��ɲ���������飺\n");
    int i;
    for (i = 0; i < m; i++)
    {
        printf("%4d", arr[i]);
    }
    return 0;
}

