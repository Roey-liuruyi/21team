#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1 3 2 6 8 5 7 9 4
//ð�����������������Ƚ�,ÿ�δ��ݸ�������������Ǹ���
//ÿ�������������Ǹ�������,�ʶ���Ϊð������
//1 3-1 3----------- 1 3 2 6 8 5 7 9 4
//3 2-2 3----------- 1 2 3 6 8 5 7 9 4
//3 6-3 6----------- 1 2 3 6 8 5 7 9 4
//6 8-6 8----------- 1 2 3 6 8 5 7 9 4
//8 5-5 8----------- 1 2 3 6 5 8 7 9 4
//8 7-7 8----------- 1 2 3 6 5 7 8 9 4
//8 9-8 9----------- 1 2 3 6 5 7 8 9 4
//9 4-4 9----------- 1 2 3 6 5 7 8 4 9
//���ϲ����������һ�˲���,���ǰ�����9�ŵ�����ĩβ��λ��-��һ�˱Ƚ���8��
//�Դ�����,��n��Ҫ�Ƚ�9-n��
//һ����Ҫ�Ƚ�8��.
//int main()
//{
//	int arr[9] = { 1,3,2,6,8,5,7,9,4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9 - 1; i++)
//	{
//		for (j = 0; j < 9-1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}


//-----------------------------------------
//ѡ������
//ѡ�������������ð��������Ե�
//����һ���п�ȵıȽ϶����ǵ����ıȽϰ��ŵ�����
//1 3 2 6 8 5 7 9 4
//ÿ��ѡ����С��������ǰ������������˼��
//1 3-1 3
//1 2-1 2 
//1 6-1 6
//1 8-1 8
//1 5-1 5
//1 7-1 7
//1 9-1 9
//1 4-1 4
//1 3 2 6 8 5 7 9 4
//--�����������һ��8��,����Ч���ƺ���������,������еڶ���
//3 2-2 3
//2 6-2 6
//2 8-2 8
//2 5-2 5
//2 7-2 7
//2 9-2 9
//2 4-2 4
//2 3 6 8 5 7 9 4
//1 2 3 6 8 5 7 9 4
//���Ž��е�����7��
//3 6-3 6
//...........ʵ����3������С����
//Ȼ����е�4��6��
//6 8-6 8
//6 5-5 6
//5 7-5 7
//5 9-5 9
//5 4-4 5
//4 8 6 7 9 5
//1 2 3 4 8 6 7 9 5
//��������һ������8��
//#include<stdio.h>
//int main()
//{
//	int arr[9] = { 1,3,2,6,8,5,7,9,4 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9 - 1; i++)
//	{
//		for (j = i+1; j < 9; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}


//----------��������-----δ����
//������            1 2 3 5 6 7 8 9 4
//1 3                  2 6 8 5 7 9 4
//1 3 2                  6 8 5 7 9 4
//1 2 3 6                  8 5 7 9 4
//1 2 3 6 8                  5 7 9 4
//1 2 3 6 8 5                  7 9 4
//1 2 3 5 6 8 7                  9 4
//1 2 3 5 6 7 8 9                  4
//1 2 3 5 6 7 8 9 4
//1 2 3 4 5 6 7 8 9
//���������Ϊ�ֿ���---�ٽ��кϲ������
//int main()
//{
//	int arr[9] = { 1,3,2,6,8,5,7,9,4 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	int tmp = 0;
//	for (i = 1; i < 9; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				tmp = arr[j];
//				arr[j] = arr[i];
//				for (t = i; t > j; t--)
//				{
//					arr[t] = arr[t - 1];
//				}
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//}
//-------�ϲ�������������---------�鲢�����ǰ��
//int main()
//{
//	//����Ⱥϲ��ٽ�������Ļ�.....ûɶʹ�õ�����
//	//����?
//	//������취ȥ�ϲ�������������
//	int a1[4] = { 1,2,5,6};
//	int a2[4] = { 3,4,7,8};
//	int a[8];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i<4&&j<4)
//	{
//		
//		if (a1[i] < a2[j])
//		{
//			a[k++] = a1[i++];
//		}
//		else
//		{
//			a[k++] = a2[j++];
//		}
//	}
//	if (i >= 4)
//	{
//		while (j < 4)
//		{
//			a[k++] = a2[j++];
//		}
//	}
//	else
//	{
//		while (i <= 4)
//		{
//			a[k++] = a1[i++];
//		}
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf(" %d ", a[i]);
//	}
//}

////--------merge����
////�鲢����
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
///*�Ƚ�ԭ���зֳ����������У������������н��������źú��ٺϳ�һ�����У�
//�ڷֱ�������н��������ʱ�򣬶�ÿ���������ֵݹ������ֶַ���֮�ķ����������� ��
//�ݹ鵽ֻʣ���������Ƚϴ�СΪֹ������ٺϲ���һ�����С�*/
//void merge(int arr[], int low, int mid, int high)
//{
//    int i, k;
//    int* tmp = (int*)malloc((high - low + 1) * sizeof(int));
//    //����ռ䣬ʹ���СΪ����
//    int left_low = low;
//    int left_high = mid;
//    int right_low = mid + 1;
//    int right_high = high;
//    for (k = 0; left_low <= left_high && right_low <= right_high; k++)
//    {  // �Ƚ�����ָ����ָ���Ԫ��
//        if (arr[left_low] < arr[right_low])
//        {//�˴�Ϊ��С������Ҫ�Ӵ�С����<�ĳ�>����
//            tmp[k] = arr[left_low++];
//        }
//        else
//        {
//            tmp[k] = arr[right_low++];
//        }
//    }
//    if (left_low <= left_high)
//    {  //����һ��������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
//    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
//        for (i = left_low; i <= left_high; i++)
//            tmp[k++] = arr[i];
//    }
//    if (right_low <= right_high)
//    {
//        //���ڶ���������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
//        //memcpy(tmp+k, arr+right_low, (right_high-right_low+1)*sizeof(int));
//        for (i = right_low; i <= right_high; i++)
//            tmp[k++] = arr[i];
//    }
//    for (i = 0; i < high - low + 1; i++)
//        arr[low + i] = tmp[i];
//    free(tmp);
//}
//void merge_sort(int arr[], int first, int last)
//{
//    int mid = 0;
//    if (first < last)
//    {
//        mid = (first + last) / 2; /* ע���ֹ��� */
//        merge_sort(arr, first, mid);
//        merge_sort(arr, mid + 1, last);
//        merge(arr, first, mid, last);
//    }
//}
//int myinput(int* p) 
//{
//    int i;
//    for (i = 0; i < 100; i++)
//        if (scanf("%d", p + i) != 1)
//        {
//            fflush(stdin);
//            break;
//        }
//    return i;
//}
//int main(int argv, char* argc[])
//{
//    int a[50], i, n;
//    printf("Input some integers(Letter end)...\n");
//    n = myinput(a);
//    merge_sort(a, 0, n - 1);
//    printf("\n");
//    for (i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}

//void trans_10_8(int x)
//{
//	int tmp = 0;
//	if (x != 0)
//	{
//		tmp = x % 8;
//		x = x / 8;
//		trans_10_8(x);
//		printf("%d", tmp);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	trans_10_8(n);
//}