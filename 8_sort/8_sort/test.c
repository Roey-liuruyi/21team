#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//插入排序,将第二个数组插入到第一个有序数组中并保持有序
//void swap(int* p,int i,int j)
//{
//	int tmp = p[i];
//	p[i] = p[j];
//	p[j] = tmp;
//}
//void addsort(int *p1,int sz1,int *p2,int sz2,int *p3,int sz3)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int tmp = 0;
//	while (k<sz3)
//	{
//		if (i < sz1)
//		{
//			p3[k++] = p1[i++];
//		}
//		else
//		{
//			p3[k++] = p2[j++];
//		}
//	}
//}
//void insertsort(int arr[], int len)
//{
//	if (arr == NULL || len < 2) //防止越界
//	{
//		return;
//	}
//	//每次将从0-i位置的元素进行排序
//	for (int i = 1; i < len; i++)
//	{ // 0 ~ i 做到有序
//		//int j = i - 1; j >= 0表示左边位置的边界条件
//		//arr[j] > arr[j + 1]表示最右边的数与相邻数的比较
//		//j--表示将这个过程向左推进
//		//swap(arr, j, j + 1)表示进行两个相邻数比较时，左边的数大于右边数时，才交换否则不交换
//		for (int j = i - 1;; j--)
//		{
//			if (j >= 0 && arr[j] > arr[j + 1])
//			{
//				swap(arr, j, j + 1);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr1[6] = { 1,4,3,2,6,5};
//	int arr2[7] = { 1,2,3,8,9,7,6 };
//	int arr3[13] = { 0 };
//	int i = 0;
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	addsort(arr1, sz1, arr2, sz2, arr3, sz3);
//	insertsort(arr3, sz3);
//	for (i = 0; i < sz3; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//}

//------普通版插入排序
//void swap(int arr[], int i, int j)
//{
//	int tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//void insertionSort(int arr[],int len)
//{
//	if (arr == NULL || len < 2) //防止越界
//	{
//		return;
//	}
//	//每次将从0-i位置的元素进行排序
//	for (int i = 1; i < len; i++)
//	{ // 0 ~ i 做到有序
//		//int j = i - 1; j >= 0表示左边位置的边界条件
//		//arr[j] > arr[j + 1]表示最右边的数与相邻数的比较
//		//j--表示将这个过程向左推进
//		//swap(arr, j, j + 1)表示进行两个相邻数比较时，左边的数大于右边数时，才交换否则不交换
//		for (int j = i - 1;; j--) 
//		{
//			if (j >= 0 && arr[j] > arr[j + 1])
//			{
//				swap(arr, j, j + 1);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 3,2,1,6,5 };
//	insertionSort(arr, 5);
//	int i = 0;
//	for (i = 0; i <5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}


//-------------qsort
//void quick_sort(int* a, int left, int right)
//{
//	int i, j, temp;
//	if (left < right)
//	{
//		i = left;
//		j = right;
//		temp = a[left];//其实就是最左边的元素
//		while (i < j)
//		{
//			while (a[j] > temp)//从右往左找小
//			{
//				j--;
//			}//找到了,
//			if (i < j)
//			{
//				a[i++] = a[j];
//			}//放到左边,放后i++
//			while (i < j && a[i] < temp)//从左往右找大
//			{
//				i++;
//			}//找到了
//			if (i < j)
//			{
//				a[j--] = a[i];
//			}//放到上次找到的大的元素的位置上
//			//至此就完成了一对儿交换.
//		}
//		a[i] = temp;//把最左边的元素置中"中是相对位置"
//		quick_sort(a, left, i - 1);
//		quick_sort(a, i + 1, right);
//	}
//}
//int main()
//{
//	int arr[9] = { 3,2,1,5,4,6,7,9,8 };
//	quick_sort(arr, 0, 8);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//float* search(float(*pointer)[4])//一维数组指针--二维数组行地址
//{
//    int i;
//    float* pt;//--一级指针
//    pt = *(pointer + 1);//(初始行+1)行第一列地址,如果找不到不及格的话.
//    for (i = 0; i < 4; i++)
//    {
//        if (*(*pointer + i) < 60)//如果找到的话
//        {
//            pt = *pointer;//初始行第一列地址 
//            break;
//        }
//    }
//    return(pt);
//}
//#include <stdio.h>
//void main()
//{
//    float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
//    float* p;
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        p = search(score + i);
//        if (p == *(score + i))//意思是有不及格的.
//        { 
//            printf("No. %d scores: ", i);
//            for (j = 0; j < 4; j++)
//            {
//                printf("%5.2f\t", *(p + j));//打印其每一个元素.
//            }
//            printf("\n");
//        }
//    }
//}
//
//第一版
//int part1(int *a, int left, int right)
//{
//	int key = a[left];
//	int i = left+1;
//	int j = right;
//	while (i < j)
//	{
//		while ((i < j) && (key < a[j]))   j--;
//		while ((i < j) && (key > a[i]))   i++;
//		if (i < j)
//		{
//			int tmp = a[i];
//			a[i] = a[j];
//			a[j] = tmp;
//			i++; j--;
//		}
//	}
//	if (a[j] < key)
//	{
//		a[left] = a[j];
//		a[j] = key;
//	}
//	return j;
//}
//void quicksort(int* a, int left, int right)
//{
//	if (left<right)
//	{
//		int m = part1(a, left, right);
//		quicksort(a, left, m - 1);
//		quicksort(a, m, right);
//	}
//}
//int myinput(int* p)
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		if (scanf("%d", p + i) != 1)
//			如果有一个未成功录入则刷新缓冲区后跳出循环;
//		{
//			fflush(stdin);
//			break;
//		}
//	}
//	return i;
//}
//int main(int argv, char* argc[])
//{
//	int a[100], i, n;
//	printf("Input some integers...\n");
//	n = myinput(a);
//	printf("quicksort2...\n");
//	quicksort2(a, 0, n - 1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\nquicksort...\n");
//	quicksort(a, 0, n - 1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
 




#include<stdio.h>
//左边的都比key要小
//右边的都比key要大
int part(int* a, int left, int right)
{
    int key = a[left];
    int i = left + 1;//下标为0就是key则没必要比较
    int j = right;
    while (i < j)
    {
        while ((i < j) && (a[j] > key)) j--;//rl找小
        while ((i < j) && (a[i] < key)) i++;//lr找大
        if (i < j) //交换这俩
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            j--; i++;
        }//交换后j放大,i放小
    }
    if (a[j] < key)
        //如果交换完一躺后的较大值-i>j
        //(或相等值-ij碰面)小于了key
        //就把左值和key交换
    {
        a[left] = a[j];
        a[j] = key;
    }
    return j;
}
void quick_sort(int* a, int left, int right)
{
    if (left < right)
    {
        int m = part(a, left, right);
        quick_sort(a, left, m - 1);
        quick_sort(a, m, right);
    }
}
int part2(int s[], int l, int r)
{
    int i = l;
    int j = r;
    int x = s[i];
    while (i < j)
    {
        while (i < j && s[j] > x) j--;
        if (i < j) s[i++] = s[j];
        while (i < j && s[i] < x) i++;
        if (i < j) s[j--] = s[i];
    }
    s[i] = x;
    return i;
}
void quick_sort2(int s[], int left, int right)
{
    if (left < right)
    {
        int j = part2(s, left, right);
        quick_sort2(s, left, j - 1);
        quick_sort2(s, j + 1, right);
    }
}
int myinput(int* p)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        if (scanf("%d", p + i) != 1)
            //如果有一个未成功录入则刷新缓冲区后跳出循环;
        {
            fflush(stdin);
            break;
        }
    }

    return i;
}
int main(int argv, char* argc[])
{
    int a[100], i, n;
    printf("Input some integers...\n");
    n = myinput(a);
    printf("quick_sort2...\n");
    quick_sort2(a, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nquick_sort...\n");
    quick_sort(a, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
 





//#include<stdio.h>
//typedef struct stu
//{
//	long int num;
//	char name[100];
//	int age;
//	float C_points;
//	float math_points;
//	float english_points;
//	float sum_points;
//	float avr_points;
//} stu;
//void pro(stu* ps)
//{
//	scanf("%ld", &ps->num);
//	scanf("%s", &ps->name);
//	scanf("%d%f%f%f", &ps->age, &ps->C_points, &ps->math_points, &ps->english_points);
//	ps->sum_points = ps->C_points + ps->math_points + ps->english_points;
//	ps->avr_points = ps->sum_points / 3.0;
//}
//int main()
//{
//	stu s1, s2, s3;
//	int i = 0;
//	printf("请依次输入第1个学生的学号,姓名,年龄,C语言成绩,微积分成绩,英语成绩\n");
//	pro(&s1);
//	printf("请依次输入第2个学生的学号,姓名,年龄,C语言成绩,微积分成绩,英语成绩\n");
//	pro(&s2);
//	printf("请依次输入第3个学生的学号,姓名,年龄,C语言成绩,微积分成绩,英语成绩\n");
//	pro(&s3);
//	printf("%s的总分为%lf平均分为%lf\n", s1.name, s1.sum_points, s1.avr_points);
//	printf("%s的总分为%lf平均分为%lf\n", s2.name, s2.sum_points, s2.avr_points);
//	printf("%s的总分为%lf平均分为%lf\n", s3.name, s3.sum_points, s3.avr_points);
//}
//#include<stdio.h>
//#include<time.h>
//struct time
//{
//	int year;
//	int month;
//	int day;
//	int hour;
//	int min;
//	int second;
//}time1;
//int main()
//{
//	time1.year = 2021;
//	time1.month = 12;
//	time1.day = 15;
//	time1.hour = 8;
//	time1.min = 54;
//	time1.second = 10;
//	/*time_t time(time_t*);
//	char* ctime(const time_t * timer);*/
//	//struct tm* localtime(const time_t * timer);
//	printf("系统日期为%d/%d/%d\n", time1.year, time1.month, time1.day);
//	printf("系统时间为%d时%d分%d秒\n",time1.hour,time1.min,time1.second);
//}
//#include <stdio.h>
//struct
//{
//    int num;
//    char name[10];
//    char sex[10];
//    char job;
//    union
//    {
//        int clas;
//        char position[10];
//    } category;
//} person[2];
//void main()
//{
//    int i;
//    i = 1;
//    //scanf("%c", &person[i].job);
//    //printf("%c", person[i].job);
//    for (i = 0; i < 2; i++)
//    {
//        scanf("%d %s %s %c", &person[i].num, person[i].name, person[i].sex,
//            &person[i].job);
//        if (person[i].job =='s')
//        {
//            scanf("%d", &person[i].category.clas);
//        }
//        else  if (person[i].job =='t')
//        {
//            scanf("%s", person[i].category.position);
//        }
//        else
//        {
//            printf("input error");
//        }
//    }
//    printf("\n");
//    printf("No.   Name    sex    job    class / position\n");
//    for (i = 0; i < 2; i++)
//    {
//        if (person[i].job == 's')
//            printf("%-6d%-8s%-8s%-11c%-6d\n", person[i].num, person[i].name,
//                person[i].sex, person[i].job, person[i].category.clas);
//        else
//            printf("%-6d%-8s%-8s%-11c%-6s\n",person[i].num,person[i].name,
//                person[i].sex, person[i].job, person[i].category.position);
//    }
//}
//#include<stdio.h>
//struct
//{
//	long int num;
//	char name[100];
//	int age;
//	float C_points;
//	float math_points;
//	float english_points;
//	float sum_points;
//	float avr_points;
//} p[3];
//int main()
//{
//	int i = 0;
//	for (i=1;i<=3;i++)
//	{
//		printf("请依次输入第%d个学生的学号,姓名,年龄,C语言成绩,微积分成绩,英语成绩\n",i);
//		scanf("%ld", &p[i].num);
//		scanf("%s", &p[i].name);
//		scanf("%d%f%f%f", &p[i].age, &p[i].C_points, &p[i].math_points, &p[i].english_points);
//		p[i].sum_points = p[i].C_points + p[i].math_points + p[i].english_points;
//		p[i].avr_points = p[i].sum_points / 3.0;
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		printf("%s的总分为%lf平均分为%lf\n", p[i].name, p[i].sum_points, p[i].avr_points);
//	}
//}



//#include<stdio.h>
//int main()
//{
//	int x = 017;
//	printf("%x\n", x);
//	printf("%#x", x);//只是带了个0x前缀,作为16进制的标志
//}



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
//
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
//
//    if (left_low <= left_high)
//    {  //若第一个序列有剩余，直接复制出来粘到合并序列尾
//    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
//        for (i = left_low; i <= left_high; i++)
//            tmp[k++] = arr[i];
//    }
//
//    if (right_low <= right_high)
//    {
//        //若第二个序列有剩余，直接复制出来粘到合并序列尾
//        //memcpy(tmp+k, arr+right_low, (right_high-right_low+1)*sizeof(int));
//        for (i = right_low; i <= right_high; i++)
//            tmp[k++] = arr[i];
//    }
//
//    for (i = 0; i < high - low + 1; i++)
//        arr[low + i] = tmp[i];
//    free(tmp);
//}
//
//void merge_sort(int arr[], int first, int last) {
//    int mid = 0;
//    if (first < last)
//    {
//        mid = (first + last) / 2; /* 注意防止溢出 */
//        merge_sort(arr, first, mid);
//        merge_sort(arr, mid + 1, last);
//        merge(arr, first, mid, last);
//    }
//}
//
//int myinput(int* p) {
//    int i;
//    for (i = 0; i < 100; i++)
//        if (scanf("%d", p + i) != 1)
//        {
//            fflush(stdin);
//            break;
//        }
//    return i;
//}
//
//int main(int argv, char* argc[])
//{
//    int a[50], i, n;
//    printf("Input some integers(Letter end)...\n");
//
//    n = myinput(a);
//
//    merge_sort(a, 0, n - 1);
//
//    printf("\n");
//    for (i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}
