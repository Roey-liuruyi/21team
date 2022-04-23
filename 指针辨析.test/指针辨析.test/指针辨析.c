#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	//strlen的目的是找到'\0'
//	printf("%d\n", sizeof(arr));//字符串所占的空间,'\0'也占字节,故6+1=7
//	printf("%d\n", sizeof(arr+0));//首元素的地址应当是4
//	printf("%d\n", sizeof(*arr));//得到了首元素,1个字节
//	printf("%d\n", sizeof(arr[1]));//第二个元素,1个字节
//	printf("%d\n", sizeof(&arr));//整个数组的地址,4
//	printf("%d\n", sizeof(&arr+1));//跳过整个数组,但仍是地址4
//	printf("%d\n", sizeof(&arr[0]+1));//跳过一个元素,是第二个元素的地址,值是4
//	return 0;
//}
int main()
{
	int a[3][4] = { 0 };
	//printf("%p\n", &a);//数组的地址,但值上与第一行首元素的地址值相同,步长为一整个数组
	//printf("%p\n", a);//数组首元素的地址,也即是第一行的地址,步长为一行
	//printf("%p\n", a[0]);//第一行首元素的地址,步长为一个元素
	//printf("%p\n", a[1]);//第二行首元素的地址,步长为一个元素
	//printf("%p\n", a[0]+1);//第一行,第二个元素
	//printf("%p\n", a+1);//第二行首元素的地址,在值上等于第二行第一个元素的值
	//printf("%p\n", &a[2] + 1);//由于是第三行的地址,步长为一行,虽然并没有第三行,但并不存在越界访问
	//printf("%d\n", sizeof(a));//数组48
	//printf("%d\n", sizeof(a[0]));//相当于第一行作为一维数组的数组名 4^4=16
	//printf("%d\n", sizeof(a[0][0]));//第一个元素
	//printf("%d\n", sizeof(a[0]+1));//第一行第二个元素的地址,4/8
	//printf("%d\n", sizeof(*(a[0]+1)));//第一行第二个元素 4
	//printf("%d\n", sizeof(a+1));//地址,4/8
	//printf("%d\n", sizeof(*(a+1)));//相当于第二行,4^4=16
	//printf("%d\n", sizeof(&a[0]+1));//指向了第二行,但仍是地址,4/8
	//printf("%d\n", sizeof(*(&a[0] + 1)));//第二行,16
	//printf("%d\n", sizeof(*a));//第一行16
	//printf("%d\n", sizeof(a[3]));//虽然越界了,但不影响,仍是16
	//认识到这点儿,
	//&a[]=*p;
	//(&a[]+n)=*(*p+n);
	//a[]就是相当于把某一行,作为一维数组时的数组名
	//=p[]
	//a[][]=p[][]

}