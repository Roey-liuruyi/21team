#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水问题
//喝汽水,一瓶一元,两个空瓶能换一瓶汽水,给20元,可以喝多少瓶汽水
//先买再喝后换
//换完喝完再换
//
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("请输入预算金额:");
//	scanf("%d", &money);
//	//先买,把买回来的汽水喝掉
//	total = money;//此时有了total个空瓶
//	empty = total;
//	while (empty>=2)
//	{
//		total = total + empty / 2;//此时换了且喝了
//		empty = empty / 2 + empty % 2;//除2+模2是经典!
//	}
//	printf("能喝汽水的瓶数是%d\n", total);
//	//值得注意的是如果最后剩下一个空瓶,可以向老板借个空瓶然后再换一瓶
//	//然后再把这个空瓶子还回去,这样就可以多喝一瓶啦哈哈哈哈哈
// //也可以直接是2n-1;
// //从价值交换的角度上,20==(当然是指买完喝过的)40个空瓶,但最终有一个空瓶留在了自己手里
//}
//调整奇数和偶数的顺序,调整数组,使得奇数都在偶数的前面
//#include<stdio.h>
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从左边找到一个偶数
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//关于(left < right)&&,因为在循环内部left和right都发生了改变
//		//从右边找到一个奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)//交换这俩奇数和偶数(如果找不到这俩的话就已经满足条件了)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//}
// ------------------------------------------------------------------
// 打印杨辉三角
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//把第一列的元素置为1
//	//把对角线的元素置为1
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 0; j <= 9; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;//把第一列的元素置为1
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;//把对角线的元素置为1
//			}
//		}
//	}
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//		}
//	}
//	//打印
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" %d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// ------------------------------------------------------------------
// 赛马问题:36匹马,6个跑道,没有计时器,请赛马确定,36匹马中的前三名
// 请问最少比赛几次
// 6次赛马得到每组的第一名(6个)
// 1,2,3,4,5,6(456组已经被排除在外)7次
// 1(2,3),2,2(2,3),3-------8次
// 所以最快是8次
// ------------------------------------------------------------------
// 编程题--找凶手----考察思考问题的角度---高压环境下的心理素质与逻辑思维能力
//a说  不是我   1
//b说  是c     1
//c说  是d      0
//d说  c在胡说八道  1
//已知三个人说的是真话,一个人说的是假话
//根据这些信息,写一个程序来确定到底谁是凶手
//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') +
//			(killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是%c",killer);
//			break;
//		}
//	}
//	return 0;
//}
// ------------------------------------------------------------------
//烧香问题,一根的材质不均匀,但是每一根燃烧完恰好是一个小时,
//使用两根香,来确定15分钟.
//第一根两头都点燃(30分钟燃完)
//同时第二根点一头(30分钟后点燃另一头)(结束便是15分钟)
//---学最好的方式是教?????-------------!!!!!!!!!那也不能一个人讲一遍吧...
// ------------------------------------------------------------------
//猜名次
//5位运动员参加了跳水比赛
//有人让他们预测比赛结果
//a说:b2,a3
//b说:a2,e4
//c说:c1,d2
//d说:c5,d3
//e说:e4,a1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e= 1;e <= 5; e++)
//					{
//						if (
//							(((b == 2) + (a == 3)) == 1) &&
//							(((a == 2) + (e == 4)) == 1) &&
//							(((c == 1) + (d == 2)) == 1) &&
//							(((c == 5) + (d == 3)) == 1) &&
//							(((e == 4) + (a == 1)) == 1)
//							
//							)
//						{
//							if ((a * b * c * d * e) == 120)
//							{
//								//不能使用加法)
//								printf("a是第%d名\n", a);
//								printf("b是第%d名\n", b);
//								printf("c是第%d名\n", c);
//								printf("d是第%d名\n", d);
//								printf("e是第%d名\n", e);
//							}
//						}
//					}
//
//				}
//			}
//		}
//	}
//}
// 
// ------------------------------------------------------------------
//c语言第四次上机
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		int x = 0;
//		printf("选择菜单:");
//		scanf("%d", &x);
//		switch (x)
//		{
//			case 1:
//				printf("  1 求两个数的和\n");
//				break;
//			case 2:
//				printf("  2 求两个数的差\n");
//				break;
//			case 3:
//				printf("  3 求两个数的商和余数\n");
//				break;
//			case 4:
//				printf("  4 求两个数的倒数之和\n");
//				break;
//			case 0:
//				printf("  5 退出系统\n");
//				break;
//			default :
//				printf("error\n");
//				break;
//		}
//		if (x !=1&&x!=2&&x!=3&&x!=4)
//		{
//			break;
//		}
//		else
//		{
//			printf("按任意键返回该菜单,继续选择");
//			system("pause");
//		}
//	}
//	return 0;
//}
// ------------------------------------------------------------------
//计算(-1)^n*(1/(n^2+1))的极限值
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int sign = -1;
//	int n = 0;
//	double num = 0.0;
//	double sum = 1.0;
//	for (n = 1;; n++)
//	{
//		num = n * n + 1;
//		num = sign / num;
//		sum = sum + num;
//		if (fabs(num) < 1e-3)
//		{
//			break;
//		}
//		sign = -sign;
//	}
//	printf("极限值为%lf\n", sum);
//}
// ------------------------------------------------------------------
//输入30个字符,分别统计其中数字,英文字母,及其他字符的个数
//#include<stdio.h>
//int main()
//{
//	char c = 0;
//	int digit = 0;
//	int letter = 0;
//	int other = 0;
//	int total = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'A' && c <= 'z')
//		{
//			letter++;
//		}
//		else if (c >= '0' && c <= '9')
//		{
//			digit++;
//		}
//		else
//		{
//			other++;
//		}
//		total++;
//		if (total == 30)
//		{
//			break;
//		}
//	}
//	printf("letter的个数为%d\ndigit的个数为%d\nother的个数为%d\n",
//		letter, digit, other);
//}
// ------------------------------------------------------------------
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int sign0 = 0;
//	int c = 0;
//	printf("请空格隔开不同元素\n");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > 0)
//		{
//			sign0++;
//		}
//		if ((c = getchar()) == '\n')
//		{
//			break;
//		}
//	}
//	printf("正数的个数是%d\n", sign0);
//	return 0;
//}
//#include<stdio.h>
//int isperfect(int number)
//{
//	int sum = 0;
//	int z = 0;
//	for (int i = 1; i <number; i++)
//	{
//		if (number % i == 0)
//		{
//			sum += i;
//		}
//		if (sum == number) 
//		{
//			return 1;
//			break;
//		}
//		if (sum > number) 
//		{
//			return 0;
//			break;
//		}
//
//	}
//	
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 1000; ++i) 
//	{
//		int p = isperfect(i);
//		if (p) 
//		{
//			printf("%d 是完美的\n", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int mc[] = { 0 };
//	int t[] = { 0 };
//	int myt[] = { 0 };//总时长
//	int myta[] = { 0 };//此一步时间长
//	int mytb[] = { 0 };//上步骤时间长
//	scanf("%d%d", &n,&m);//步骤数,车数
//	for (i = 1; i<=n; i++)
//	{
//		scanf("%d%d", &mc[i],&t[i]);
//	}
//	for (i=1;i<=n;i++)
//	{
//		if (m % mc[i] != 0)
//		{
//			myta[i] = ((m / mc[i]) + 1) * t[i];
//			mytb[i] = ((m / mc[i - 1]) + 1) * t[i - 1];
//		}
//		else
//		{
//			myta[i] = (m / mc[i]) * t[i];
//			mytb[i] = (m / mc[i - 1]) * t[i - 1];
//		}
//		if (myta[i] > mytb[i])
//		{
//			myt[i] = myta[i] + myt[i - 1];
//		}
//		else
//		{
//			myt[i] = mytb[i] + myt[i - 1];
//		}
//
//	}
//	printf("\n%d", myt[n]);
//}
//双循环
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		for (tmp = 1, n = 1; n <= i; n++)
//		{
//			tmp = tmp * n;
//		}
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//}
//单循环
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int tmp = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		tmp = tmp * n;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//}
////九九乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//输出下列的菱形字符图形
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i=1;i<=5;i++)//上部分
//	{
//		for (k = 1; k <= 3 * (5 - i); k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf(" 0 ");
//		}
//		printf("\n");
//	}
//	for (i = 4; i >= 0; i--)//下部分
//	{
//		for (k = 1; k <= 3 * (5 - i); k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf(" 0 ");
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//#define n 20
//int main()
//{
//	int  i, j, m;
//	int a[n][n];
//	printf("Please input the number of the square:\n");
//	m = n;
//	for (i = 0; i <= (n - 1); i++)
//	{
//		for (j = 0; j <= (n - 1); j++)
//		{
//			a[i][j] = 0;
//			a[i][m - 1] = 1;
//		}
//		m = m - 1;
//	}
//	for (i = 0; i <= (n - 1); i++)
//	{
//		for (j = 0; j <= (n - 1); j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}