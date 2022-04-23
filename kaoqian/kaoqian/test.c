#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1 3 2 6 8 5 7 9 4
//冒泡排序是两个两个比较,每次传递给后面的是最大的那个数
//每趟排序会把最大的那个数沉底,故而称为冒泡排序
//1 3-1 3----------- 1 3 2 6 8 5 7 9 4
//3 2-2 3----------- 1 2 3 6 8 5 7 9 4
//3 6-3 6----------- 1 2 3 6 8 5 7 9 4
//6 8-6 8----------- 1 2 3 6 8 5 7 9 4
//8 5-5 8----------- 1 2 3 6 5 8 7 9 4
//8 7-7 8----------- 1 2 3 6 5 7 8 9 4
//8 9-8 9----------- 1 2 3 6 5 7 8 9 4
//9 4-4 9----------- 1 2 3 6 5 7 8 4 9
//以上操作即完成了一趟操作,即是把最大的9放到了最末尾的位置-第一趟比较了8次
//以此类推,第n趟要比较9-n次
//一共需要比较8趟.
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
//选择排序
//选择排序是相对于冒泡排序而言的
//它是一个有跨度的比较而不是单纯的比较挨着的两个
//1 3 2 6 8 5 7 9 4
//每次选择最小的数放在前面是它的中心思想
//1 3-1 3
//1 2-1 2 
//1 6-1 6
//1 8-1 8
//1 5-1 5
//1 7-1 7
//1 9-1 9
//1 4-1 4
//1 3 2 6 8 5 7 9 4
//--这样就完成了一趟8次,但是效果似乎不够明显,而后进行第二趟
//3 2-2 3
//2 6-2 6
//2 8-2 8
//2 5-2 5
//2 7-2 7
//2 9-2 9
//2 4-2 4
//2 3 6 8 5 7 9 4
//1 2 3 6 8 5 7 9 4
//接着进行第三趟7次
//3 6-3 6
//...........实际上3就是最小的了
//然后进行第4趟6次
//6 8-6 8
//6 5-5 6
//5 7-5 7
//5 9-5 9
//5 4-4 5
//4 8 6 7 9 5
//1 2 3 4 8 6 7 9 5
//依次类推一共进行8趟
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


//----------插入排序-----未排序
//已排序            1 2 3 5 6 7 8 9 4
//1 3                  2 6 8 5 7 9 4
//1 3 2                  6 8 5 7 9 4
//1 2 3 6                  8 5 7 9 4
//1 2 3 6 8                  5 7 9 4
//1 2 3 6 8 5                  7 9 4
//1 2 3 5 6 8 7                  9 4
//1 2 3 5 6 7 8 9                  4
//1 2 3 5 6 7 8 9 4
//1 2 3 4 5 6 7 8 9
//可以先理解为分开的---再进行合并的理解
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
//-------合并两个有序数组---------归并排序的前提
//int main()
//{
//	//如果先合并再进行排序的话.....没啥使用的意义
//	//所以?
//	//还是想办法去合并两个有序数组
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

////--------merge排序
////归并排序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
///*先将原序列分成两个子序列，对两个子序列进行排序，排好后再合成一个序列；
//在分别对子序列进行排序的时候，对每个子序列又递归用这种分而治之的方法进行排序 ，
//递归到只剩下两个数比较大小为止，最后再合并成一个序列。*/
//void merge(int arr[], int low, int mid, int high)
//{
//    int i, k;
//    int* tmp = (int*)malloc((high - low + 1) * sizeof(int));
//    //申请空间，使其大小为两个
//    int left_low = low;
//    int left_high = mid;
//    int right_low = mid + 1;
//    int right_high = high;
//    for (k = 0; left_low <= left_high && right_low <= right_high; k++)
//    {  // 比较两个指针所指向的元素
//        if (arr[left_low] < arr[right_low])
//        {//此处为从小到大，若要从大到小，把<改成>即可
//            tmp[k] = arr[left_low++];
//        }
//        else
//        {
//            tmp[k] = arr[right_low++];
//        }
//    }
//    if (left_low <= left_high)
//    {  //若第一个序列有剩余，直接复制出来粘到合并序列尾
//    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
//        for (i = left_low; i <= left_high; i++)
//            tmp[k++] = arr[i];
//    }
//    if (right_low <= right_high)
//    {
//        //若第二个序列有剩余，直接复制出来粘到合并序列尾
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
//        mid = (first + last) / 2; /* 注意防止溢出 */
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