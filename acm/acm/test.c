#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int x, i, a[10];
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        printf("fu ");
//        x = -x;
//    }
//    for (i = 0; x / 10 != 0; i++)
//    {
//        a[i] = x % 10;
//        x = x / 10;
//    }
//    a[i] = x % 10;
//    for (; i >= 0; i--)
//    {
//        switch (a[i])
//        {
//        case 1:
//            printf("yi");
//            break;
//        case 2:
//            printf("er");
//            break;
//        case 3:
//            printf("san");
//            break;
//        case 4:
//            printf("si");
//            break;
//        case 5:
//            printf("wu");
//            break;
//        case 6:
//            printf("liu");
//            break;
//        case 7:
//            printf("qi");
//            break;
//        case 8:
//            printf("ba");
//            break;
//        case 9:
//            printf("jiu");
//            break;
//        case 0:
//            printf("ling");
//            break;
//        }
//        if (i > 0)
//        {
//            printf(" ");
//        }
//    }
//    printf("5");
//    return 0;
//}
//计算天数
//#include<stdio.h>
//void main()
//{
//	int y, m, d;
//	int p=scanf("%d/%d/%d", &y, &m, &d);
//	int flag = 0;
//	int num = 0;
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		flag = 1;
//	}
//	switch (m)
//	{
//		case 1:
//			num = d;
//			break;
//		case 2:
//			num = d + 31;
//			break;
//		case 3:
//			num = d + 31 + flag + 28;
//			break;
//		case 4:
//			num = d + 31 + flag + 28 + 31;
//			break;
//		case 5:
//			num = d + 31 + flag + 28 + 31 + 30;
//			break;
//		case 6:
//			num = d + 31 + flag + 28 + 31 + 30 + 31;
//			break;
//		case 7:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30;
//			break;
//		case 8:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30 + 31;
//			break;
//		case 9:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//			break;
//		case 10:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//			break;
//		case 11:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//			break;
//		case 12:
//			num = d + 31 + flag + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//			break;
//	}
//	printf("%d", num);
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int arr[1000];
//	for (i = 0; i < 1000; i++)
//	{
//		if ((arr[i] = getchar())=='\n')//回车也占了位置
//		{
//			break;
//		}
//	}
//	int ret = i;
//	i = 0;
//	while (1)
//	{
//		if (arr[i] != 32 && arr[i+1] == 32)//本身是单词,本身+1是空格,为一个有效空格,如何排除最后的空格
//		{
//			num++;
//		}
//		if (i==ret)
//		{
//			if (arr[i - 1] == 32)
//			{
//				num = num - 1;
//			}
//			break;
//		}
//		i++;
//	}
//	printf("%d", num + 1);
//}
//#include <stdio.h>
//int main()
//{
//	int time, add;
//	scanf("%d %d", &time, &add);
//	int hour, minute;
//	hour = time / 100; 
//	minute = time % 100;
//	minute += add; 
//	while (minute < 0) 
//	{
//		hour--;
//		minute += 60;
//	}
//	while (minute)
//	{
//		if (minute >= 60)
//		{
//			hour++;
//			minute -= 60;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d", hour); 
//	if (minute == 0)
//		printf("00");
//	else if (minute <= 9)
//		printf("0%d", minute);
//	else
//		printf("%d", minute);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, len, j = 0, count[10] = { 0 };
//	int n[1010] = { 0 };
//	char a[1010];
//	scanf("%s", a);
//	len = strlen(a);
//	for (i = 0; i < len; i++) 
//	{
//		n[j] = a[i] - '0';
//		j++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		count[n[i]]++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i] != 0) 
//		{
//			printf("%d:%d", i, count[i]);
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//struct stu
//{
//	unsigned long long examID;
//	int test_ID;
//	int ture_ID;
//};
//int main()
//{
//	int n, m;
//	scanf("%d", &n);
//	struct stu s[n];//vs不过,dev可过
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%llu %d %d", &s[i].examID, &s[i].test_ID, &s[i].ture_ID);
//	}
//	scanf("%d", &m);
//	int seat[m];
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &seat[i]);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (seat[i] == s[j].test_ID)
//				printf("%llu %d\n", s[j].examID, s[j].ture_ID);
//		}
//	}
//}
//#include <stdio.h>
//int main() 
//{
//	int a, b, i;
//	int sum = 0;
//	int couter = 0; 
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++) 
//	{ 
//		sum += i;
//		couter++;
//		printf("%5d", i);
//		if (couter % 5 == 0 && i != b) 
//		{   //count达到5换行,i=b不换 
//			printf("\n");
//		}
//	}
//	printf("\n");
//	printf("Sum = %d", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, num;
//	scanf("%d", &n);
//	num = pow(2, n);//使用了pow函数
//	printf("2^%d = %d", n, num);
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{
//    int N, sum = 0;
//    int i, tmp = 1;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)
//    {
//        tmp *= i;
//        sum += tmp;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n;
//    char a;
//    scanf("%d %c", &n, &a);
//    int i, j;
//    for (i = 0; i < n / 2 + n % 2; i++)//.5进1
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%c", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//char sort(char name[5][80])
//{
//    int i, j;
//    char tmp[80];
//    for (i = 0; i < 5 - 1; i++)//趟
//    {
//        for (j = 0; j < 5 - i - 1; j++)
//        {
//            if ((strcmp(name[j], name[j + 1])) > 0)
//            {
//                strcpy(tmp, name[j]);
//                strcpy(name[j], name[j + 1]);
//                strcpy(name[j + 1], tmp);
//            }
//        }
//    }
//}
//int main()
//{
//    int i;
//    char name[5][80];
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%s", &name[i]);
//    }
//    sort(name);
//    printf("After sorted:\n");
//    for (i = 0; i < 5; i++)
//    {
//        printf("%s\n", name[i]);
//    }
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, i, j, a = 0, s = 0, sum, f = 0, t = 0;
//    scanf("%d", &n);
//    for (i = 2; i <= sqrt(n); i++) //开方防止运算超时
//    {
//        sum = 1; t = 0; f = i;
//        for (j = i; n % j == 0 && n % (sum * j) == 0; j++)//连续因子最长也即各因子尽量小
//        {
//            t++;//t每加1,sum多乘了一个小因子
//            sum = sum * j;//sum为不断扩大的因子.
//            //j++后不满足连续即跳出;
//        }
//        if (t > s)//用s记录最大的长度,f对应最大长度时的首个因子
//        {
//            a = f; s = t;
//        }
//    }
//    if (s == 0)//s为最长连续因子的个数
//        printf("1\n%d\n", n);//1不算只好是本身
//    else
//    {
//        printf("%d\n", s);//个数
//        for (i = a; i < a + s - 1; i++)//依次输出连续因子
//        {
//            printf("%d*", i);
//        }
//        printf("%d\n", i);//最后一个不带*号
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//    int n, i, j, l, s, x, z, flag,m;
//    scanf("%d", &n);
//    getchar();
//    for (i = 0; i < n; i++)
//    {
//        char password[100];
//        flag = 0;
//        s = 0;
//        x = 0;
//        z = 0;
//        m = 0;
//        gets(password);
//        l = strlen(password);
//        if (l < 6) 
//        {
//            printf("Your password is tai duan le.\n");
//        }
//        else {
//            for (j = 0; j < l; j++)
//            {
//                if (password[j] >= 65 && password[j] <= 90 || password[j] >= 97 && password[j] <= 122 || password[j] >= 48 && password[j] <= 57 || password[j] == 46) 
//                {
//                    if (password[j] == 46) x++;//记录点号
//                    if (password[j] >= 48 && password[j] <= 57) s++;//记录数字
//                    if (password[j] >= 65 && password[j] <= 90 || password[j] >= 97 && password[j] <= 122) z++;//记录字母
//                    continue;
//                }
//                else//说明出现了其他字符
//                {
//                    flag = 1;
//                    printf("Your password is tai luan le.\n");
//                    break;//跳出循环
//                }
//            }
//            if (flag == 0) //不乱的前提下走
//            {
//                if (s + x == l) printf("Your password needs zi mu.\n");//没有字母
//                else if (z + x == l) printf("Your password needs shu zi.\n");//没有数字
//                else printf("Your password is wan mei.\n");//排除一切
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() //删不删无所谓,主要是输出
//{
//	char a[10001], b[10001];
//	int f[128];
//	gets(a);
//	gets(b);
//	for (int i = 0; i < strlen(b); i++)
//	{
//		f[b[i]]++;//把b中有的字母的ascii码作为下标,使得此下标处f[]值置为非0
//	}
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (f[a[i]] == 0)//是0说明此ascii码未重复使用
//			printf("%c", a[i]);//打印即可
//	}
//	printf("\n");//最后换行;
//	return 0;
//}
//帅到没朋友.
//用people[i]表示i的朋友数
//#include <stdio.h>
//int main()
//{
//	int people[100000] = { 0 };
//	int N, K, M;
//	int i, n, m, num = 0; 
//	scanf("%d", &N);
//	while (N--)
//	{
//		scanf("%d", &K);
//		for (i = 1; i <= K; i++)
//		{
//			scanf("%d", &n);
//			if (K != 1)//只有一个人也说明没朋友
//			{
//				people[n] += K;//即使重复也是非0
//			}
//		}
//	}
//	scanf("%d", &M);//需要查询的人数
//	while (M--)//直到为0
//	{
//		scanf("%d", &m);
//		if (people[m] == 0)
//		{
//			if (num != 0) printf(" ");//打印空格格式 
//			printf("%05d", m);// '%05d',五位，不足补0  
//			people[m] = 1;//置为非0,防止重复查询后重复输出
//			num++;
//		}
//	}
//	if (num == 0) printf("No one is handsome");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
// int Is(int x)
// {
//    int ret = 0;
//    int j = 0;
//    for (j = 2; j <= sqrt(x) + 1; j++)//j要等于2开始.平方算法.
//    {
//        if (x % j == 0)//判断整数         
//        {
//            ret = 0;
//            break;
//        }//后面的语句不执行了.
//        else
//        {
//            ret = 1;
//        }
//    }
//    if (x == 2)
//    {
//        ret = 1;
//    }
//    if (x == 1)
//    {
//        ret = 0;
//    }
//    return ret;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int k;
//    scanf("%d", &k);
//    char b[1001];//大数
//    int a[1001];//放的是ascii码值
//    getchar();
//    int i, j;
//    scanf("%s", b);//以字符串形式录走
//    if (n < k)
//    {
//        printf("404");
//    }
//    else
//    {
//        for (i = 0; i < n; i++)
//        {
//            a[i] = b[i] - '0';
//        }
//        int num = 0;
//        int flag = 0;
//        for (i = 0; i <= n - k; i++)//暴力解法
//        {
//            num = 0;
//            for (j = i; j < i + k; j++)
//            {
//                num = a[j] + num * 10;//把这k位求出来
//            }
//            if (Is(num) == 1) //判断这k位是不是素数
//            {
//                flag = 1;//flag置为1
//                break;
//            }
//        }
//        int l;
//        if (flag == 1)//如果找到了
//        {
//            for (l = j - k; l < j; l++)
//            {
//                printf("%d", a[l]);
//            }
//        }
//        else if (flag == 0) //没找到
//        {
//            printf("404");
//        }
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int count, i, j, n, temp, a[1000];
//    char s=0;
//    for (i = 0; i < 1000 && s != '\n'; i++)
//    {
//        scanf("%d", &a[i]);
//        s = getchar();
//    }//输入数组，遇到\n停止输入
//    n = i;
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (a[i] > a[j])
//            {
//                temp = a[j];
//                a[j] = a[i];
//                a[i] = temp;
//            }
//        }
//    }//对数组进行排序
//    for (i = 0; i < n; i++)
//    {
//        printf("%d", a[i]);//输出排序后的数组
//    }
//}
//#include<stdio.h>
//char s[100000];
//int main()
//{
//	int n = 0;
//	while (scanf("%s", s + 1) != EOF)n++;
//	printf("%d", n);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[5][80];
//	char b[80];
//	int i, n;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%s", a[i]);
//		//getchar();
//	}
//	scanf("%s", a[4]);
//	for (i = 0; i < 5; i++)
//	{
//		for (n = 0; n < 4; n++) 
//		{
//			if (strcmp(a[n], a[n + 1]) > 0)
//			{
//				strcpy(b, a[n]);
//				strcpy(a[n], a[n + 1]);
//				strcpy(a[n + 1], b);
//			}
//		}
//	}
//	printf("After sorted:\n");
//	for (i = 0; i < 5; i++) 
//	{
//		printf("%s\n", a[i]);
//	}
//	return 0;
//}

//1
//#include<stdio.h>
//int main()
//{
//	double a, b, ratio;
//	scanf("%lf%lf", &a, &b);
//	ratio = a / (b * b);
//	printf("%.1f\n", ratio);
//	if (ratio > 25)
//		printf("PANG");
//	else
//		printf("Hai Xing");
//	return 0;
//}
//
//2.打折
//#include<stdio.h>
//int main() 
//{
//    int before, discount;
//    float after;
//    scanf("%d%d", &before, &discount);
//    after = before * discount * 0.1;
//    printf("%.2lf", after);
//    return 0;
//}
//#include <stdio.h>//考虑下是否换行
//#include <math.h>
//int main()
//{
//	int x, y, freeafter, a, b;
//	scanf("%d %d", &x, &y);
//	a = 100 - x;
//	b = 100 - y;
//	freeafter = 100 * 100 / 2 - x * y / 2 - a * b / 2 - a * y;
//	printf("%d\n", freeafter);
//	return 0;
//}
//#include<stdio.h>//是否需要换行
//int main()
//{
//	int Pa, Pb, a, b, c;
//	int n = 3, i = 0, j = 0;
//	scanf("%d%d", &Pa, &Pb);
//	b = Pa;
//	c = Pb;
//	while (n--)
//	{
//		scanf("%d", &a);
//		if (a == 0)
//			b += 1, i++;
//		else
//			c += 1, j++;
//	}
//	if (i > 0)//评委至少有一个
//	{
//		if (b > c || i == 3)
//			printf("The winner is a: %d + %d", Pa, i);
//	}
//	else
//		printf("The winner is b: %d + %d", Pb, j);
//	return 0;
//}
//
//5.整数的分类处理
//#include<stdio.h>
//int main()
//{
//	int N, i, n, A1 = 0, A2 = 0, num = 0, b = 0, d = 0;
//	float A4 = 0, A3 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &N);
//		if (N % 3 == 0 && N > A1)
//		{
//			A1 = N;
//		}
//		if (N % 3 == 1)
//		{
//			A2++;
//
//		}
//		if (N % 3 == 2)
//		{
//			num++;
//			A4 += N;
//		}
//	}
//	if (A1 == 0)
//	{
//		printf("NONE");
//	}
//	else
//	{
//		printf("%d", A1);
//	}
//	if (A2 == 0)
//	{
//		printf(" NONE ");
//	}
//	else
//	{
//		printf(" %d ", A2);
//	}
//	if (num == 0)
//	{
//		printf("NONE");
//	}
//	else
//	{
//		printf("%.1f", A3 = A4 / num);
//	}
//	return 0;
//}
//
//
//6.
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, num[10];
//	for (i = 0; i < n; i++) scanf("%d", &num[i]);
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			if (i != j)
//				sum = sum + num[i] * 10 + num[j];
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//7.倒序输出乘积
//#include <stdio.h>
//int main() 
//{
//	int n = 0, m = 0, ji = 0, count = 0, i = 0, f = 0;
//	int b[10];
//	scanf("%d%d", &n, &m);
//	ji = n * m;
//	while (ji > 0) 
//	{
//		b[count++] = ji % 10;
//		ji = ji / 10;
//	}
//	for (i = 0; i < count; i++)
//	{
//		if (b[i] != 0) 
//		{
//			f = 1;
//		}
//		if (f == 1) 
//		{
//			printf("%d", b[i]);
//		}
//	}
//	return 0;
//}
//
//8.倒数第N个字符串
//#include <stdio.h>
//int main()//26进制
//{
//	int l, n, i;
//	scanf("%d %d", &l, &n);
//	n = n - 1;
//	int a[10];
//	for (i = l - 1; i >= 0; i--)
//	{
//		a[i] = n % 26;//存放每一位的数值
//		n = n / 26;
//	}
//	for (i = 0; i < l; i++) //a-z 26进制
//	{
//		printf("%c", 'z' - a[i]);//ascii码转换
//	}
//}
//9.6翻了
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char s[1001];
//	int i, j;
//	int count = 0, flag = 0;
//	gets(s);
//	for (i = 0; s[i] != '\0'; i++) 
//	{
//		if (s[i] - '0' == 6) 
//		{	//判断该位是否为6，然后计数，修改标记
//			count++;
//			flag = 1;
//		}
//		if (s[i] - '0' != 6 && flag == 1)//在6未终止时都不会进行判断
//		{	//该位不为6，之前有6，对6的个数进行判断输出
//			if (count <= 3)
//			{
//				for (j = 0; j < count; j++)
//					printf("6");//之前有几个就打印几个6
//			}
//			else if (count > 3 && count <= 9) 
//			{
//				printf("9");//只打印一个9
//			}
//			else if (count > 9)
//			{
//				printf("27");//只打印一个27
//			}
//			count = 0;
//			flag = 0;
//		}
//		if (s[i] - '0' != 6 && flag == 0)	//原样输出
//			printf("%c", s[i]);
//	}
//	//结尾出现6-----由于未进入循环所以不打印
//	if (count <= 3)
//	{
//		for (j = 0; j < count; j++)
//			printf("6");
//	}
//	else if (count > 3 && count <= 9)
//	{
//		printf("9");
//	}
//	else if (count > 9) 
//	{
//		printf("27");
//	}
//	printf("\n");
//	return 0;
//}
//10-刮刮彩票
//#include <stdio.h>
//int main()
//{
//    int a[4][4], x, y, numadd = 0;
//    int count[25] = { 0,0,0,0,0,0,10000,36,720,360,80,252,108,72,
//                      54,180,72,180,119,36,306,1080,144,1800,3600 };
//    for (int i = 1; i < 4; i++)
//        for (int j = 1; j < 4; j++)
//        {
//            scanf("%d", &a[i][j]);
//            numadd += a[i][j];
//            if (a[i][j] == 0)
//            {
//                x = i; y = j; //记录下数字0的位置
//            }
//        }
//    a[x][y] = 45 - numadd; //把数字0成初始的数字
//    for (int i = 0; i < 3; i++)//录入坐标`打印刮开的数字
//    {
//        scanf("%d %d", &x, &y);
//        printf("%d\n", a[x][y]);
//    }
//    int ret, sum = 0;
//    scanf("%d", &ret);
//    switch (ret)
//    {
//    case 1:
//        sum = a[1][1] + a[1][2] + a[1][3];
//        break;
//    case 2:
//        sum = a[2][1] + a[2][2] + a[2][3];
//        break;
//    case 3:
//        sum = a[3][1] + a[3][2] + a[3][3];
//        break;
//    case 4:
//        sum = a[1][1] + a[2][1] + a[3][1];
//        break;
//    case 5:
//        sum = a[1][2] + a[2][2] + a[3][2];
//        break;
//    case 6:
//        sum = a[1][3] + a[2][3] + a[3][3];
//        break;
//    case 7:
//        sum = a[1][1] + a[2][2] + a[3][3];
//        break;
//    case 8:
//        sum = a[1][3] + a[2][2] + a[3][1];
//    }
//    printf("%d", count[sum]);//打印结果
//    return 0;
//}
//11.
//#include<stdio.h>
//int gcd(int a, int b)//最大公约数-辗转相除法
//{
//    if (b == 0)
//    {
//        return 1;
//    }
//    int r = a % b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    return b;
//}
//typedef struct node 
//{
//    int a;
//    int b;
//}type;
//int main()
//{
//    int n, r, i, c, sum, add;
//    scanf("%d", &n);
//    type t[n];
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d/%d", &t[i].a, &t[i].b);
//    }
//    if (n == 1) 
//    {
//        if (t[0].a == 0) 
//        {
//            printf("0\n");
//        }
//        else if (t[0].a != 0)
//        {
//            r = gcd(t[0].a, t[0].b);//最大公约数
//            t[0].a = t[0].a / r;
//            t[0].b = t[0].b / r;
//            if (t[0].a % t[0].b == 0)//如果是1
//            {
//                printf("%d", (t[0].a) / (t[0].b));//商即是结果
//            }
//            else
//            {
//                printf("%d/%d", t[0].a, t[0].b);//最简分数
//            }
//        }
//    }
//    else
//    {
//        sum = t[0].a;//分子 
//        add = t[0].b;//分母 
//        for (i = 1; i < n; i++)
//        {
//            sum = sum * t[i].b + add * t[i].a;
//            add = add * t[i].b;//分数的加法
//            r = gcd(sum, add);//加完后约分一次
//            sum /= r;
//            add /= r;
//        }
//        add = add * n;//把分母扩大n倍即是除n
//        r = gcd(sum, add);//再次化简
//        sum /= r;
//        add /= r;
//        if (sum % add == 0) 
//        {
//            printf("%d", sum / add);
//        }
//        else
//        {
//            printf("%d/%d", sum, add);
//        }
//    }
//    return 0;
//}
//12.求n以内最大的k个素数以及他们的和
//#include <stdio.h>
//#include <math.h>
//int isprime(int x)//判断是否是素数
//{
//	int ret = 1;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0 && x != 2)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int sum = 0;
//	for (int j = n; j >= 2; j--)
//	{
//		if (isprime(j))//如果是素数
//		{
//			sum += j;//素数求和
//			if (k == 1)
//			{
//				printf("%d=", j);
//				break;
//			}
//			if (j == 2)
//			{
//				printf("%d=", j);
//			}
//			else
//			{
//				printf("%d+", j);
//			}
//			k--;//找到一个这样符合条件的就--
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//13.数组循环左移
//#include<stdio.h>
//int main() 
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    if (m > n) 
//    {
//        m = m % n;//确保m在n的范围内
//    }
//    int a[100], b[100];
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);//先录进去
//    }
//    for (i = m, j = 0; i < n; i++)
//    {
//        b[j++] = a[i];//放前部分
//    }
//    for (i = 0; i < m; i++) 
//    {
//        b[j++] = a[i];//放后部分
//    }
//    for (i = 0; i < n - 1; i++) 
//    {
//        printf("%d ", b[i]);//打印
//    }
//    printf("%d", b[i]);
//    return 0;
//}
// 14
#include<stdio.h>
int main() 
{
    char s[101];
    int snum, xnum;
    int N, M, i, j;
    int a[1000];
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) 
    {
        scanf("%s", &s[0]);//序列放进s[]里
        j = 0;
        snum = xnum = 0;//初始化
        while (s[j] != '\0') //一位一位的判断
        {
            if (s[j] == 'S') 
            {
                snum++;
                if (snum - xnum > M)//提前退出
                    break;
            }
            else 
            {
                xnum++;
                if (xnum > snum) break;//提前退出
            }
            j++;
        }
        if (xnum == snum) a[i] = 1;//判断结果放在a[]里
        else a[i] = 0;
    }
    for (i = 0; i < N; i++)//打印结果
    {
        if (a[i]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
//15
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[10001], i, G = 0, P = 0, L = 0, T = 0;
//	scanf("%s", a);
//	for (i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == 'G' || a[i] == 'g')G++;
//		if (a[i] == 'P' || a[i] == 'p')P++;
//		if (a[i] == 'L' || a[i] == 'l')L++;
//		if (a[i] == 'T' || a[i] == 't')T++;
//	}
//	while (G != 0 || P != 0 || L != 0 || T != 0)
//	{
//		if (G != 0)printf("G"), G--;
//		if (P != 0)printf("P"), P--;
//		if (L != 0)printf("L"), L--;
//		if (T != 0)printf("T"), T--;
//	}
//	printf("\n");
//	return 0;
//}
//16
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char p[20];
//	gets(p);//读取字符
//	int a[20] = { 0 };
//	int arr[20] = { 0 };
//	int index[20] = { 0 };
//	int i, j, temp, lenarr, flag = 0;
//	for (i = 0; i < 11; i++) //计算各个数的个数，数组的下标即数，内容是个数
//	{
//		j = p[i] - '0';//转换为数字
//		a[j]++;
//	}
//	for (i = 0, j = 9; j >= 0; j--)
//	{
//		if (a[j])//如果内容即个数存在
//		{
//			arr[i++] = j;//那把这些数从大到小存放在arr中
//		}
//	}
//	lenarr = i;
//	for (i = 0; i < 11; ++i)
//	{
//		for (j = 0; j < lenarr; ++j)
//		{
//			if (p[i] - '0' == arr[j])
//			{
//				index[i] = j;
//			}
//		}
//	}
//	printf("int[] arr = new int[]{");
//	for (i = 0; i < lenarr; ++i)
//	{
//		if (!flag)
//		{
//			printf("%d", arr[i]);
//			flag = 1;	//输出逗号进行控制
//		}
//		else
//		{
//			printf(",%d", arr[i]);
//		}
//	}
//	printf("};\n");
//	printf("int[] index = new int[]{");
//	flag = 0;
//	for (i = 0; i < 11; ++i)
//	{
//		if (!flag)
//		{
//			printf("%d", index[i]);
//			flag = 1;
//		}
//		else
//		{
//			printf(",%d", index[i]);
//		}
//	}
//	printf("};\n");
//	return 0;
//}
//17。
//#include<stdio.h>
//int main()//人员的个数一定为队伍的十倍，也即是十的倍数
//{
//    int a[110];
//    int pos[100][10][10];
//    int max=0, pre=0;
//    int x=0;
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);//录入各个学校数据
//        if (a[i] > max)
//        {
//            max = a[i];//记录最大队伍数
//        }
//    }
//    for (int j = 1; j <= max; j++)//队伍号
//    {
//        for (int k = 1; k <= 10; k++)//队员号
//        {
//            for (int i = 1; i <= n; i++)//学校号
//            {//定队伍，队员，以学校为变量进行循环
//                if (j <= a[i])//作为x的变化条件
//                {
//                    if (pre == i)
//                        x += 2;
//                    else
//                        x++;
//                    pos[i][j][k] = x;
//                    pre = i;//记录
//                }
//            }
//
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        printf("#%d\n", i);
//        for (int j = 1; j <= a[i]; j++)
//        {
//            for (int k = 1; k <= 10; k++)
//            {
//                if (k <= 9)
//                {
//                    printf("%d ", pos[i][j][k]);
//                }
//                else
//                {
//                    printf("%d\n", pos[i][j][k]);
//                }
//            }
//        }
//    }
//}
//18.
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//    struct AN 
//    {
//        char name[11];
//        int num;
//    }a[10001];
//    int i, n, min = 0;
//    int b[10001] = { 0 };
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s %d", a[i].name, &a[i].num);
//        sum = sum + a[i].num;//记录总和
//    }
//    sum = (sum / n) / 2;//计算出平均数的一半
//    for (i = 0; i < n; i++) //算出差距
//    {
//        if (a[i].num >= sum)
//            b[i] = a[i].num - sum;
//        else
//            b[i] = sum - a[i].num;
//    }
//    for (i = 1; i < n; i++)
//    {
//        if (b[i] < b[min])
//        {
//            min = i;
//        }
//    }
//    printf("%d %s", sum, a[min].name);
//    return 0;
//}
//19.
//#include<stdio.h>//模拟除法
//int main()
//{
//	int n, i, x = 0, flag = 0;
//	scanf("%d", &n);
//	for (i = 1;; i++)
//	{
//		x = x * 10 + 1;
//		if (x >= n)
//		{
//			flag = 1;
//			printf("%d", x / n);
//		}
//		else if (flag == 1)
//			printf("0");
//		x = x % n;
//		if (x == 0)
//			break;
//	}
//	printf(" %d", i);//位数
//	return 0;
//}
//20.
//古风排版
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
//    int num, row, col; 
//    int k = 0, i, j;
//    char s[1005], b[105][1005];//b是用来输出的二维数组 
//    scanf("%d", &num);
//    getchar();
//    gets(s);
//    row = num;
//    if (strlen(s) % num == 0) 
//        col = strlen(s) / num;
//    else
//        col = strlen(s) / num + 1;
//
//    for (i = 0; i < row; i++)
//        b[i][0] = ' ';//应对空格 
//    for (j = col - 1; j >= 0; j--)//开始将字符串装入二维数组（最后一列开始） 
//    {
//        for (i = 0; i < row; i++)//第一行开始 
//        {
//            b[i][j] = s[k++];
//            if (k == strlen(s))
//                break;
//        }
//    }
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//            printf("%c", b[i][j]);
//        if (i < row - 1)
//            printf("\n");
//    }
//    return 0;
//}
//21.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp(const void* a, const void* b) 
//{
//	char* s1 = (char*)a;
//	char* s2 = (char*)b;
//	return strcmp(s1, s2);
//}
//int main(int argc, char* argv[])
//{
//	struct stu
//	{
//		char s[10];
//		int num;
//	}; 
//	struct stu people[10005];
//	int n, m, i, j;
//	scanf("%d", &n);
//	char name[n][10];//用于存放已关注的人名
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", name[i]);//遇空格结束
//	}
//	qsort(name, n, sizeof(name[0]), cmp); //排序以便使用二分查找 
//	int avg = 0;
//	scanf("%d", &m);//询问人数
//	char name2[m][10];
//	for (i = 0; i < m; i++) //录入数据并求和
//	{
//		scanf("%s%d", people[i].s, &people[i].num);
//		avg += people[i].num;
//	}
//	avg /= m;//求平均
//	int count = 0;
//	for (i = 0; i < m; i++) 
//	{
//		if (people[i].num > avg) 
//		{
//			int flag = 0;
//			int left = 0, right = n - 1;
//			if (strcmp(name[left], people[i].s) <= 0 && strcmp(name[right], people[i].s) >= 0) 
//			{
//				while (1)
//				{//二分查找 
//					if (strcmp(name[left], people[i].s) == 0) 
//					{
//						flag = 1;
//						break;
//					}
//					if (strcmp(name[right], people[i].s) == 0)
//					{
//						flag = 1;
//						break;
//					}
//					if (right - left == 1)
//					{
//						flag = 0;
//						break;
//					}
//					int mid = (right + left) / 2;
//					if (strcmp(name[mid], people[i].s) == 0)
//					{
//						flag = 1;
//						break;
//					}
//					if (strcmp(name[mid], people[i].s) > 0)
//					{
//						right = mid;
//					}
//					else
//					{
//						left = mid;
//					}
//				}
//			}
//			if (flag == 0) 
//			{
//				strcpy(name2[count++], people[i].s);
//			}
//		}
//	}
//	qsort(name2, count, sizeof(name2[0]), cmp);//达到升序输出的目的
//	if (count == 0)
//	{
//		printf("Bing Mei You");
//	}
//	else 
//	{
//		for (i = 0; i < count; i++)
//		{
//			printf("%s\n", name2[i]);
//		}
//	}
//	return 0;
//}
//22.
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct Node
//{
//    char Name[10];
//    int sum;
//    double a;
//};
//struct Min 
//{
//    int min;
//    int top;
//    double a;
//}m;
//int cmp(const void* a, const void* b)
//{
//    if (((*(struct Node*)a).sum < (*(struct Node*)b).sum) ||
//        ((*(struct Node*)a).sum == (*(struct Node*)b).sum) &&
//        ((*(struct Node*)a).a > (*(struct Node*)b).a)) {
//        return 1;
//    }
//    else {
//        return -1;
//    }
//}
//int main()
//{
//    int i, N, x, cnt = 0, min = 0;
//    int K[1001];
//    scanf("%d", &N);
//    struct Node p, s[3];
//    m.min = -1;
//    m.top = 0;
//    for (i = 0; i < 3; i++) 
//    {
//        s[i].sum = 0;
//        s[i].a = 0;
//    }
//    for (i = 0; i < N; i++) 
//    {
//        scanf("%s", p.Name);
//        p.sum = 0;
//        int n;
//        scanf("%d", &n);
//        p.a = n;
//        while (n--) 
//        {
//            scanf("%d", &x);
//            int j, flag = 1;
//            for (j = 0; j <= p.sum; j++)
//            {
//                if (K[j] == x) 
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag) 
//            {
//                p.sum++;
//                K[p.sum] = x;
//            }
//        }
//        p.a /= (p.sum * 1.0);
//        if (p.sum > m.min) 
//        { //判断当前输入的用户是否大于最小用户
//            int k;
//            /*将当前用户替换掉数组中最小用户*/
//            strcpy(s[m.top].Name, p.Name);
//            s[m.top].sum = p.sum;
//            s[m.top].a = p.a;
//            m.min = 1000;
//            for (k = 0; k < 3; k++) 
//            { //找到更换后数组中的最小用户
//                if (m.min >= s[k].sum) 
//                {
//                    if (m.min == s[k].sum) 
//                    {
//                        if (m.a > s[k].a) 
//                        {
//                            continue;
//                        }
//                    }
//                    /*替换最小用户*/
//                    m.min = s[k].sum;
//                    m.top = k;
//                    m.a = s[k].a;
//                }
//            }
//        }
//    }
//    qsort(s, 3, sizeof(s[0]), cmp);
//    if (N == 1)
//    {
//        printf("%s - -", s[0].Name);
//    }
//    else if (N == 2) 
//    {
//        printf("%s %s -", s[0].Name, s[1].Name);
//    }
//    else
//    {
//        printf("%s %s %s", s[0].Name, s[1].Name, s[2].Name);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int map[109][109], n, book[109];
//int DFS(int x, int y)
//{
//    int i;
//    book[x] = 1;
//    if (x == y)
//    {
//        return 1;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        if (map[x][i] == 1 && book[i] == 0)
//        {
//            if (DFS(i, y))
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int m, k, i, a, b, c;
//    scanf("%d %d %d", &n, &m, &k);
//    for (i = 1; i <= m; i++)
//    {
//        scanf("%d %d %d", &a, &b, &c);
//        map[a][b] = c;
//        map[b][a] = c;
//    }
//    for (i = 1; i <= k; i++)
//    {
//        memset(book, 0, sizeof(book));
//        scanf("%d %d", &a, &b);
//        if (map[a][b] == 0)
//        {
//            if (DFS(a, b))
//            {
//                printf("No problem\n");
//            }
//            else
//            {
//                printf("OK\n");
//            }
//        }
//        else if (map[a][b] == 1)
//        {
//            printf("No problem\n");
//        }
//        else if (map[a][b] == -1)
//        {
//            if (DFS(a, b))
//            {
//                printf("OK but...\n");
//            }
//            else
//            {
//                printf("No way\n");
//            }
//        }
//    }
//    return 0;
//}
//24.
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, i, j;
//    double z, r;
//    scanf("%d %lf %lf", &n, &z, &r);
//    int a[n] = { 0 }, b[n], c[n], top1 = 0;   
//    for (i = 1; i < n - 1; i++)              
//        a[i] = 1;
//    int book[n] = { 0 };                   
//    int d[n][2], top2 = 0;     
//    book[0] = 1;
//    for (i = 0; i < n; i++)
//    {
//        int m;
//        scanf("%d", &m);
//        for (j = 0; j < m; j++)
//        {
//            int x;
//            scanf("%d", &x);
//            if (book[i] == 1)
//            {
//                a[x] = a[i] + 1;
//                book[x] = 1;
//            }
//            else
//            {
//                d[top2][0] = x;
//                d[top2][1] = i;
//                top2++;
//            }
//        }
//        if (m == 0)
//        {
//            int lev;
//            scanf("%d", &lev);
//            b[top1] = i;               
//            c[top1] = lev;               
//            top1++;
//        }
//    }
//    for (i = 0; i < top2; i++)
//    {
//        int x = d[i][0];              
//        int y = d[i][1];              
//        a[x] = a[y] + 1;
//    }
//    double sum = 0;
//    for (i = 0; i < top1; i++)
//    {
//        int sf = b[i];
//        double k = pow(1.0 - 0.01 * r, a[sf]) * z * c[i];   
//        sum += k;
//    }
//    printf("%ld", long(sum));
//    return 0;
//}
//#include<stdio.h>
//int arr_1[100005];
//int arr_2[100005];
//int seek(int i)
//{
//    if (arr_1[i] == -1)
//        return 1;
//    if (arr_2[arr_1[i]] != 0)
//        return arr_2[arr_1[i]] + 1;
//    return (arr_2[i] = seek(arr_1[i]) + 1);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i, flag = 0;
//
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr_1[i]);
//        arr_2[i] = 0;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        arr_2[i] = seek(i);
//        if (arr_2[i] > flag)
//            flag = arr_2[i];
//    }
//    printf("%d\n", flag);
//    int x = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (flag == arr_2[i])
//        {
//            if (x != 0)
//            {
//                printf(" ");
//            }
//            x = 1;
//            printf("%d", i);
//        }
//    }
//    return 0;
//}
// 
// 
// 
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int map[300][300], book[300][300];
//int d;
//int  dfs(int y, int x)
//{
//    int i, j;
//    book[y][x] = 1;
//    if (y == 100 && x == 100)
//    {
//        for (i = y - d - 8; i <= y + d + 8; i++)
//        {
//            for (j = x - d - 8; j <= x + d + 8; j++)
//            {
//                if ((i - y) * (i - y) + (j - x) * (j - x) <= (d + 8) * (d + 8) && book[i][j] == 0)
//                {
//                    if (j <= 50 || j >= 150 || i <= 50 || i >= 150)
//                    {
//                        return 1;
//                    }
//                    if (map[i][j] == 1)
//                    {
//                        if (dfs(i, j))
//                        {
//                            return 1;
//                        }
//                    }
//                }
//            }
//        }
//    }
//    else
//    {
//        for (i = y - d; i <= y + d; i++)
//        {
//            for (j = x - d; j <= x + d; j++)
//            {
//                if ((i - y) * (i - y) + (j - x) * (j - x) <= d * d && book[i][j] == 0)
//                {
//                    if (j <= 50 || j >= 150 || i <= 50 || i >= 150)
//                    {
//                        return 1;
//                    }
//                    if (map[i][j] == 1)
//                    {
//                        if (dfs(i, j))
//                        {
//                            return 1;
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n, i, a, b;
//    scanf("%d %d", &n, &d);
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d %d", &a, &b);
//        map[a + 100][b + 100] = 1;
//    }
//    if (dfs(100, 100))
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}
//爬动的蠕虫
//#include <stdio.h>
//int main()
//{
//    int N, U, D, L;
//    scanf("%d %d %d", &N, &U, &D);
//    int time;
//    time = L = 0;
//    while (L < N) {
//
//
//        time++;
//        L = L + U;
//        if (L >= N)
//            break;
//        L = L - D;
//        time++;
//    }
//    printf("%d", time);
//    return 0;
//}
//int main()
//{
//    int a, x, y, z;
//    scanf("%d", &a);
//    int count = 0;
//
//    for (x = a; x < a + 4; x++) {
//        for (y = a; y < a + 4; y++) {
//            for (z = a; z < a + 4; z++) {
//                if (x != y && x != z && y != z) {
//                    printf("%d%d%d", x, y, z);
//                    count++;
//                    if (count % 6 == 0) {
//                        printf("\n");
//                    }
//                    else {
//                        printf(" ");
//                    }
//                }
//
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int i, j, n;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d*%d=%-4d", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct list 
//{
//    char name[11];
//    char num[17];
//    char phone[17];
//    char sex[2];
//    char birthday[11];
//};
//struct list p[100];
//int main()
//{
//
//    int i = 0; int j = 0, N, K;
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//    {
//        scanf("%s %s %c %s %s\n", &p[i].name, &p[i].birthday, &p[i].sex, &p[i].num, &p[i].phone);
//    }
//    scanf("%d", &K);
//    int number;
//    for (i = 0; i < K; i++) 
//    {
//        scanf("%d", &number);
//        if (number < N && number >= 0)
//        {
//            printf("%s %s %s %s %s\n", p[number].name, p[number].num, p[number].phone, p[number].sex, p[number].birthday);
//        }
//        else 
//        {
//            printf("Not Found\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//struct fushu {
//	float sb;
//	float xb;
//};
//struct fushu jia(struct fushu x, struct fushu y)
//{
//	struct fushu rr;
//	rr.sb = x.sb + y.sb;
//	rr.xb = x.xb + y.xb;
//	return rr;
//}
//struct fushu jian(struct fushu x, struct fushu y)
//{
//	struct fushu rr;
//	rr.sb = x.sb - y.sb;
//	rr.xb = x.xb - y.xb;
//	return rr;
//}
//struct fushu cheng(struct fushu x, struct fushu y)
//{
//	struct fushu rr;
//	rr.sb = x.sb * y.sb - x.xb * y.xb;
//	rr.xb = x.sb * y.xb + x.xb * y.sb;
//	return rr;
//}
//struct fushu chu(struct fushu x, struct fushu y)
//{
//	struct fushu rr;
//	rr.sb = (x.sb * y.sb + x.xb * y.xb) / (y.sb * y.sb + y.xb * y.xb);
//	rr.xb = (x.xb * y.sb - x.sb * y.xb) / (y.sb * y.sb + y.xb * y.xb);
//	return rr;
//}
//void shizi(float x, float y) {
//	if (y < 0) {
//		printf("(%.1f%.1fi)", x, y);
//	}
//	else
//		printf("(%.1f+%.1fi)", x, y);
//}
//void result(float x, float y) {
//	if (y <= 0.05 && y >= -0.05)
//		printf("%.1f\n", x);
//	else if (x <= 0.05 && x >= -0.05)
//		printf("%.1fi\n", y);
//	else if (y < 0)
//		printf("%.1f%.1fi\n", x, y);
//	else
//		printf("%.1f+%.1fi\n", x, y);
//}
//int main(void)
//{
//	struct fushu c1, c2, r1, r2, r3, r4;
//	scanf("%f %f %f %f", &c1.sb, &c1.xb, &c2.sb, &c2.xb);
//	r1 = jia(c1, c2);		 
//	shizi(c1.sb, c1.xb);
//	printf(" + ");
//	shizi(c2.sb, c2.xb);
//	printf(" = ");
//	result(r1.sb, r1.xb);
//	r2 = jian(c1, c2);		
//	shizi(c1.sb, c1.xb);
//	printf(" - ");
//	shizi(c2.sb, c2.xb);
//	printf(" = ");
//	result(r2.sb, r2.xb);
//	r3 = cheng(c1, c2);	
//	shizi(c1.sb, c1.xb);
//	printf(" * ");
//	shizi(c2.sb, c2.xb);
//	printf(" = ");
//	result(r3.sb, r3.xb);
//	r4 = chu(c1, c2);	
//	shizi(c1.sb, c1.xb);
//	printf(" / ");
//	shizi(c2.sb, c2.xb);
//	printf(" = ");
//	result(r4.sb, r4.xb);
//	return 0;
//}

//#include <stdio.h>
//int main() 
//{
//    int i, su, k, j, m, n, kong, ge;
//    char fuhao;
//    while (1) 
//    {
//        scanf("%d %c", &su, &fuhao);
//        if (su > 0 && su <= 1000)
//            break;
//    }
//    k = su - 1;
//    for (i = 3; k >= 2 * i; i += 2) 
//    {
//        k = k - 2 * i;
//    }
//    i -= 2;
//    n = i;
//    for (kong = 0; i >= 1; i -= 2, kong++) 
//    {
//        for (j = 0; j < kong; j++)
//            printf(" ");
//        for (j = 0; j < i; j++)
//            printf("%c", fuhao);
//        printf("\n");
//    }
//    ge = kong - 2;
//    for (m = 3; m <= n; m += 2, ge--)
//    {
//        for (j = 0; j < ge; j++)
//            printf(" ");
//        for (j = 0; j < m; j++)
//            printf("%c", fuhao);
//        printf("\n");
//    }
//    printf("%d", k);
//    return 0;
//}
//#include<stdio.h>
//#define MAX 100
//void main()
//{
//    int n, m;
//    int a[MAX];
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int r = m % n; 
//    if (r != 0)
//        while (r--)
//        {
//            int temp = a[n - 1];          
//            for (int i = n - 1; i > 0; i--)  
//                a[i] = a[i - 1];
//            a[0] = temp;            
//        }
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//}
//#include <stdio.h>
//#include <math.h>
//#define SIZE 20
//int main()
//{
//    int num[SIZE], double_num[SIZE], bit = 0; 
//    int digit[10] = { 0,0,0,0,0,0,0,0,0,0 }; 
//    int flag = 1; 
//    char temp;
//    temp = getchar();
//    while (temp >= '0' && temp <= '9') 
//    {
//        num[bit] = temp - '0';
//        digit[num[bit]]++;  
//        bit++;
//        temp = getchar();
//    }
//    for (int i = bit - 1; i >= 0; i--) 
//    { 
//        double_num[i] = num[i] * 2;
//    }
//    for (int i = bit - 1; i > 0; i--) 
//    {
//        if (double_num[i] / 10 != 0) 
//        {
//            double_num[i] = double_num[i] % 10;
//            double_num[i - 1] += 1;
//        }
//        digit[double_num[i]]--;
//    }
//    if (double_num[0] / 10 != 0) 
//    {
//        flag = 0;
//    }
//    else
//    {
//        digit[double_num[0]]--;
//        for (int j = 0; j < 10; j++)
//        {
//            if (digit[j] != 0) 
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (flag == 0)
//    {
//        printf("No\n");
//    }
//    else 
//    {
//        printf("Yes\n");
//    }
//    for (int i = 0; i < bit; i++)
//    {
//        printf("%d", double_num[i]);
//    }
//    return 0;
//}
//#include <stdio.h>  
//int main() 
//{
//    int t, n, i, j, k;
//    int a[10][10];
//    scanf("%d", &t);
//    int count = 0;
//    int b[100] = { 0 };  
//    for (k = 0; k < t; k++) {
//        scanf("%d", &n);
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                scanf("%d", &a[i][j]);
//            }
//        }
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i > j && a[i][j] != 0) {
//                    count++;
//                }
//            }
//        }
//        if (count == 0) {
//            b[k] = 1;
//        }
//        else {
//            b[k] = 0;
//        }
//        count = 0;
//    }
//    for (k = 0; k < t; k++) {
//        if (b[k] == 1) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, x, sum;
//    scanf("%d%d", &a, &b);
//    if (b % 2 == 0) 
//    {
//        x = 0;
//    }
//    else {
//        x = 1;
//    }
//    sum = a * pow(2, b / 2);
//    printf("%d %d\n", x, sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, k, m, l;
//    scanf("%d", &n);
//    scanf("%d", &k);
//    scanf("%d", &m);
//    if (n < 0 || n>400000)
//        return 0;
//    if (k < 0 || k>3000)
//        return 0;
//    if (m < 0 || m>120)
//        return 0;
//    l = n - k * m;
//    printf("%d\n", l);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int num[25];
//    int n;
//    for (int i = 0; i < 24; i++)
//        scanf("%d", &num[i]);
//    while (scanf("%d", &n) == 1)
//    {
//        if (n < 0 || n>23)
//            break;
//        if (num[n] > 50)
//            printf("%d Yes\n", num[n]);
//        else
//            printf("%d No\n", num[n]);
//    }
//    return 0;
//}