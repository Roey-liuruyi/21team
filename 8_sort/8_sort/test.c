#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��������,���ڶ���������뵽��һ�����������в���������
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
//	if (arr == NULL || len < 2) //��ֹԽ��
//	{
//		return;
//	}
//	//ÿ�ν���0-iλ�õ�Ԫ�ؽ�������
//	for (int i = 1; i < len; i++)
//	{ // 0 ~ i ��������
//		//int j = i - 1; j >= 0��ʾ���λ�õı߽�����
//		//arr[j] > arr[j + 1]��ʾ���ұߵ������������ıȽ�
//		//j--��ʾ��������������ƽ�
//		//swap(arr, j, j + 1)��ʾ���������������Ƚ�ʱ����ߵ��������ұ���ʱ���Ž������򲻽���
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

//------��ͨ���������
//void swap(int arr[], int i, int j)
//{
//	int tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//void insertionSort(int arr[],int len)
//{
//	if (arr == NULL || len < 2) //��ֹԽ��
//	{
//		return;
//	}
//	//ÿ�ν���0-iλ�õ�Ԫ�ؽ�������
//	for (int i = 1; i < len; i++)
//	{ // 0 ~ i ��������
//		//int j = i - 1; j >= 0��ʾ���λ�õı߽�����
//		//arr[j] > arr[j + 1]��ʾ���ұߵ������������ıȽ�
//		//j--��ʾ��������������ƽ�
//		//swap(arr, j, j + 1)��ʾ���������������Ƚ�ʱ����ߵ��������ұ���ʱ���Ž������򲻽���
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
//		temp = a[left];//��ʵ��������ߵ�Ԫ��
//		while (i < j)
//		{
//			while (a[j] > temp)//����������С
//			{
//				j--;
//			}//�ҵ���,
//			if (i < j)
//			{
//				a[i++] = a[j];
//			}//�ŵ����,�ź�i++
//			while (i < j && a[i] < temp)//���������Ҵ�
//			{
//				i++;
//			}//�ҵ���
//			if (i < j)
//			{
//				a[j--] = a[i];
//			}//�ŵ��ϴ��ҵ��Ĵ��Ԫ�ص�λ����
//			//���˾������һ�Զ�����.
//		}
//		a[i] = temp;//������ߵ�Ԫ������"�������λ��"
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
//float* search(float(*pointer)[4])//һά����ָ��--��ά�����е�ַ
//{
//    int i;
//    float* pt;//--һ��ָ��
//    pt = *(pointer + 1);//(��ʼ��+1)�е�һ�е�ַ,����Ҳ���������Ļ�.
//    for (i = 0; i < 4; i++)
//    {
//        if (*(*pointer + i) < 60)//����ҵ��Ļ�
//        {
//            pt = *pointer;//��ʼ�е�һ�е�ַ 
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
//        if (p == *(score + i))//��˼���в������.
//        { 
//            printf("No. %d scores: ", i);
//            for (j = 0; j < 4; j++)
//            {
//                printf("%5.2f\t", *(p + j));//��ӡ��ÿһ��Ԫ��.
//            }
//            printf("\n");
//        }
//    }
//}
//
//��һ��
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
//			�����һ��δ�ɹ�¼����ˢ�»�����������ѭ��;
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
//��ߵĶ���keyҪС
//�ұߵĶ���keyҪ��
int part(int* a, int left, int right)
{
    int key = a[left];
    int i = left + 1;//�±�Ϊ0����key��û��Ҫ�Ƚ�
    int j = right;
    while (i < j)
    {
        while ((i < j) && (a[j] > key)) j--;//rl��С
        while ((i < j) && (a[i] < key)) i++;//lr�Ҵ�
        if (i < j) //��������
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            j--; i++;
        }//������j�Ŵ�,i��С
    }
    if (a[j] < key)
        //���������һ�ɺ�Ľϴ�ֵ-i>j
        //(�����ֵ-ij����)С����key
        //�Ͱ���ֵ��key����
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
            //�����һ��δ�ɹ�¼����ˢ�»�����������ѭ��;
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
//	printf("�����������1��ѧ����ѧ��,����,����,C���Գɼ�,΢���ֳɼ�,Ӣ��ɼ�\n");
//	pro(&s1);
//	printf("�����������2��ѧ����ѧ��,����,����,C���Գɼ�,΢���ֳɼ�,Ӣ��ɼ�\n");
//	pro(&s2);
//	printf("�����������3��ѧ����ѧ��,����,����,C���Գɼ�,΢���ֳɼ�,Ӣ��ɼ�\n");
//	pro(&s3);
//	printf("%s���ܷ�Ϊ%lfƽ����Ϊ%lf\n", s1.name, s1.sum_points, s1.avr_points);
//	printf("%s���ܷ�Ϊ%lfƽ����Ϊ%lf\n", s2.name, s2.sum_points, s2.avr_points);
//	printf("%s���ܷ�Ϊ%lfƽ����Ϊ%lf\n", s3.name, s3.sum_points, s3.avr_points);
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
//	printf("ϵͳ����Ϊ%d/%d/%d\n", time1.year, time1.month, time1.day);
//	printf("ϵͳʱ��Ϊ%dʱ%d��%d��\n",time1.hour,time1.min,time1.second);
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
//		printf("�����������%d��ѧ����ѧ��,����,����,C���Գɼ�,΢���ֳɼ�,Ӣ��ɼ�\n",i);
//		scanf("%ld", &p[i].num);
//		scanf("%s", &p[i].name);
//		scanf("%d%f%f%f", &p[i].age, &p[i].C_points, &p[i].math_points, &p[i].english_points);
//		p[i].sum_points = p[i].C_points + p[i].math_points + p[i].english_points;
//		p[i].avr_points = p[i].sum_points / 3.0;
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		printf("%s���ܷ�Ϊ%lfƽ����Ϊ%lf\n", p[i].name, p[i].sum_points, p[i].avr_points);
//	}
//}



//#include<stdio.h>
//int main()
//{
//	int x = 017;
//	printf("%x\n", x);
//	printf("%#x", x);//ֻ�Ǵ��˸�0xǰ׺,��Ϊ16���Ƶı�־
//}



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
//
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
//
//    if (left_low <= left_high)
//    {  //����һ��������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
//    //memcpy(tmp+k, arr+left_low, (left_high-left_low+l)*sizeof(int));
//        for (i = left_low; i <= left_high; i++)
//            tmp[k++] = arr[i];
//    }
//
//    if (right_low <= right_high)
//    {
//        //���ڶ���������ʣ�ֱ࣬�Ӹ��Ƴ���ճ���ϲ�����β
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
//        mid = (first + last) / 2; /* ע���ֹ��� */
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
