#define _CRT_SECURE_NO_WARNINGS 1
//3.16汽油里程问题
//#include<stdio.h>
//int main()
//{
//    float gallons = 0, miles=0, TotGallons = 0, TotMiles = 0;
//    while (gallons != -1)//终止条件
//    {
//        printf("Enter the gallons used (-1 to end):");
//        scanf("%f", &gallons);
//        if (gallons != -1)
//        {
//            printf("Enter the miles driven:");
//            scanf("%f", &miles);
//            printf("The miles / gallon for this tank was: %f\n", miles / gallons);
//            TotGallons += gallons;//每次执行循环的时候便求一次和
//            TotMiles += miles;
//        }
//        printf("\n");
//    }
//    printf("The overall average miles/gallon was : %f", TotMiles / TotGallons);
//    return 0;
//}
//3.17信贷限额计算器
//#include<stdio.h>
//int main()
//{
//	int Account_number = 0;
//	float Beginning_balance = 0, Total_charges = 0,Total_credit=0,Credit_limit=0, Balance=0;
//	while (Account_number != -1)
//    {
//        printf("Enter the gallons used (-1 to end):");
//        scanf("%d", &Account_number);
//
//        if (Account_number != -1)
//        {
//            printf("Enter the beginning balance:");
//            scanf("%f", &Beginning_balance);
//            printf("Enter the total charges:");
//            scanf("%f", &Total_charges);
//            printf("Enter the total credit:");
//            scanf("%f", &Total_credit);
//            printf("Enter the credit limit:");
//            scanf("%f", &Credit_limit);
//            Balance = Beginning_balance + Total_charges - Total_credit;
//            if (Balance > Credit_limit)
//            {
//                printf("Account:       %d\n", Account_number);
//                printf("Credit limit: %.2f\n", Credit_limit);
//                printf("Balance:      %.2f\n", Balance);
//                printf("Credit Limit Execeeded\n");
//                printf("\n");
//            }
//            printf("\n");
//        }
//    }
//}
//3.18佣金计算器
//#include<stdio.h>
//int main()
//{
//	float sales_in_dollars = 0, sales = 0;
//	while (sales_in_dollars != -1)
//	{
//		printf("Enter sales in dollars used (-1 to end):");
//	    scanf("%f", &sales_in_dollars);
//		sales = 200 + sales_in_dollars * (.09);
//		if (sales_in_dollars != -1)
//		{
//			printf("Salary is: $%.2f\n", sales);
//		}
//		printf("\n");
//	}
//	
//}
//3.19利息计算器
//#include<stdio.h>
//int main()
//{
//	float interest = 0, principal = 0, rate = 0;
//	int days = 0;
//	while (principal != -1)
//	{
//		printf("Enter loan principal (-1 to end):");
//		scanf("%f", &principal);
//		if (principal != -1)
//		{
//			printf("Enter interest rate:");
//			scanf("%f", &rate);
//			printf("Enter terms of the loan in days:");
//			scanf("%d", &days);
//			interest = principal * rate * days / 365;
//			printf("The interest charge is $%.2f\n", interest);
//		}
//		printf("\n");
//	}
//}
//3.20工资计算器
//#include<stdio.h>
//int main()
//{
//	int hours = 0;
//	float rate = 0,salary=0;
//	while (hours != -1)
//			{
//				printf("Enter # of hours worked (-1 to end):");
//				scanf("%d", &hours);
//				if (hours != -1)
//				{
//					printf("Enter hourly rate of the woker ($00.00):");
//					scanf("%f", &rate);
//					if (hours <= 40)
//					{
//						salary = hours * rate;
//					}
//					else
//					{
//						salary = 40 * rate + (hours - 40) * (1.5 * rate);
//					}
//					printf("Salary is $%.2f\n", salary);
//				}
//				printf("\n");
//			}
//		
//}
//3.21(先减1与后减1的区别)
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = 3;
//	int e = 5;
//	int f = 0;
//	c = (a++) + b;
//	printf("c的值为%d,a的值为%d\n", c, a);
//	f = (++d) + e;
//	printf("f的值为%d,d的值为%d\n", f, d);
//}
//3.22用循环打印数字
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("   %d", i);
//	}
//}
//3.22查找最大数//伪代码
//#include<stdio.h>
//int main()
//{
//
//}
//3.24表格输出
//#include<stdio.h>
//int main()
//{
//	printf("N\t10*N\t100*N\t1000*N\n");
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\t%d\t%d\t%d\n", i, 10 *i, 100*i, 1000*i);
//	}
//}
//3.25表格输出
//#include<stdio.h>
//int main()
//{
//	printf("A\tA+2\tA+4\tA+6\n");
//	printf("\n");
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d\t%d\t%d\t%d\n", 3*i, 3*i+2, 3*i+4, 3*i+6);
//	}
//}
//3.26(查找最大的两个数)(注意,每个数可以只输入一次)
//#include <stdio.h>
//int main()
//{
//	int i, a[10], max;
//	int t;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("请输入第%d个数:", i);
//		scanf("%d", &a[i]);
//		if (i ==10)
//		{
//			printf("输入完毕,请等待\n");
//		}
//	}
//	max = a[0];
//	t = 0;
//	for (i = 1; i <=10; i++) 
//	{
//		if (a[i] > max) 
//		{
//			max = a[i];
//			t = i;
//		}
//	}
//	printf("最大值为%d", a[t]);
//	return 0;
//}
//3.28(各自五行)
//#include<stdio.h>
//int main(void)
//{
//	unsigned int count = 1;
//	while (count <= 10)
//	{
//		puts(count % 2 ? "★★★★" : "++++++++");
//		++count;
//	}
//}
//3.30//a 不执行,#####,$$$$$/b ##### $$$$$$/不执行
//3.32星号正方形
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入正方形的边长>:");
//	scanf("%d", &a);
//	int i, j;
//	if(1<a<=20)
//	{
//		for (i = 1; i <= a; i++)
//		{
//			for (j = 1; j <=a; j++)
//			{
//				printf("★");
//			}
//			if(i<a)
//		    printf("\n");
//		}
//	}
//}
//3.34(五位数回文检测)
//#include<stdio.h>
//int main()
//{
//	int a,q,w,e,r,t;
//	printf("请输入五位数字>:");
//	scanf("%d", &a);
//	q = a % 10;
//	w = (a / 10) % 10;
//	e = (a / 100) % 10;
//	r = (a / 1000) % 10;
//	t = (a / 10000);
//	if (q == t && w == r)
//	{
//		printf("该数字是回文\n");
//	}
//	else
//	{
//		printf("该数字不是回文\n");
//	}
//}
//3.36看看你的计算机有多块
//#include<stdio.h>
//int main()
//{
//	long i = 0;
//	for (i = 1; i <= 1000000000; i++)
//	{
//		if (i % 100000000 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//}
//3.38(统计7的个数)
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int counter=0;
//	printf("请输入一个不超过五位的数字>:");
//	scanf("%d", &a);
//	while (1)
//	{
//		b = a % 10;
//		if (b == 7)
//		{
//			counter++;
//		}
//		a = a / 10;
//		if (a < 1)
//		{
//			break;
//		}
//	}
//	printf("一共有%d个7", counter);
//}
//3.40无限连乘2
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j;
//	while (1)
//	{
//		j = i * 2;
//		printf("%d,", j);
//		i++;
//	}
//}
//3.42
//#include<stdio.h>
//int main()
//{
//	int x = 1, y = 2;
//	int z = x + y;
//	printf("%d",++z);
//}
//3.44判断其是否为直角三角形的边长
//#include<stdio.h>//未判断是否是三角形
//int main()
//{
//	int a, b, c;
//	printf("请输入三边长并用空格隔开>:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if ((a*a) == (b*b) + (c*c))
//	{
//		printf("是直角三角形\n");
//	}
//	else
//	{
//		printf("不是直角三角形\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n", &a);
//	scanf("%c", &b);
//	printf("%d", a);
//    //printf("%c\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a < 10) 
//	
//		if (b > 10)
//		
//			puts("*****");
//		
//			
//	
//	else
//		puts("#####");
//	puts("$$$$$");
//}
