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
//��������
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
//		if ((arr[i] = getchar())=='\n')//�س�Ҳռ��λ��
//		{
//			break;
//		}
//	}
//	int ret = i;
//	i = 0;
//	while (1)
//	{
//		if (arr[i] != 32 && arr[i+1] == 32)//�����ǵ���,����+1�ǿո�,Ϊһ����Ч�ո�,����ų����Ŀո�
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
//	struct stu s[n];//vs����,dev�ɹ�
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
//		{   //count�ﵽ5����,i=b���� 
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
//	num = pow(2, n);//ʹ����pow����
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
//    for (i = 0; i < n / 2 + n % 2; i++)//.5��1
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
//    for (i = 0; i < 5 - 1; i++)//��
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
//    for (i = 2; i <= sqrt(n); i++) //������ֹ���㳬ʱ
//    {
//        sum = 1; t = 0; f = i;
//        for (j = i; n % j == 0 && n % (sum * j) == 0; j++)//���������Ҳ�������Ӿ���С
//        {
//            t++;//tÿ��1,sum�����һ��С����
//            sum = sum * j;//sumΪ�������������.
//            //j++����������������;
//        }
//        if (t > s)//��s��¼���ĳ���,f��Ӧ��󳤶�ʱ���׸�����
//        {
//            a = f; s = t;
//        }
//    }
//    if (s == 0)//sΪ��������ӵĸ���
//        printf("1\n%d\n", n);//1����ֻ���Ǳ���
//    else
//    {
//        printf("%d\n", s);//����
//        for (i = a; i < a + s - 1; i++)//���������������
//        {
//            printf("%d*", i);
//        }
//        printf("%d\n", i);//���һ������*��
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
//                    if (password[j] == 46) x++;//��¼���
//                    if (password[j] >= 48 && password[j] <= 57) s++;//��¼����
//                    if (password[j] >= 65 && password[j] <= 90 || password[j] >= 97 && password[j] <= 122) z++;//��¼��ĸ
//                    continue;
//                }
//                else//˵�������������ַ�
//                {
//                    flag = 1;
//                    printf("Your password is tai luan le.\n");
//                    break;//����ѭ��
//                }
//            }
//            if (flag == 0) //���ҵ�ǰ������
//            {
//                if (s + x == l) printf("Your password needs zi mu.\n");//û����ĸ
//                else if (z + x == l) printf("Your password needs shu zi.\n");//û������
//                else printf("Your password is wan mei.\n");//�ų�һ��
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() //ɾ��ɾ����ν,��Ҫ�����
//{
//	char a[10001], b[10001];
//	int f[128];
//	gets(a);
//	gets(b);
//	for (int i = 0; i < strlen(b); i++)
//	{
//		f[b[i]]++;//��b���е���ĸ��ascii����Ϊ�±�,ʹ�ô��±괦f[]ֵ��Ϊ��0
//	}
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (f[a[i]] == 0)//��0˵����ascii��δ�ظ�ʹ��
//			printf("%c", a[i]);//��ӡ����
//	}
//	printf("\n");//�����;
//	return 0;
//}
//˧��û����.
//��people[i]��ʾi��������
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
//			if (K != 1)//ֻ��һ����Ҳ˵��û����
//			{
//				people[n] += K;//��ʹ�ظ�Ҳ�Ƿ�0
//			}
//		}
//	}
//	scanf("%d", &M);//��Ҫ��ѯ������
//	while (M--)//ֱ��Ϊ0
//	{
//		scanf("%d", &m);
//		if (people[m] == 0)
//		{
//			if (num != 0) printf(" ");//��ӡ�ո��ʽ 
//			printf("%05d", m);// '%05d',��λ�����㲹0  
//			people[m] = 1;//��Ϊ��0,��ֹ�ظ���ѯ���ظ����
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
//    for (j = 2; j <= sqrt(x) + 1; j++)//jҪ����2��ʼ.ƽ���㷨.
//    {
//        if (x % j == 0)//�ж�����         
//        {
//            ret = 0;
//            break;
//        }//�������䲻ִ����.
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
//    char b[1001];//����
//    int a[1001];//�ŵ���ascii��ֵ
//    getchar();
//    int i, j;
//    scanf("%s", b);//���ַ�����ʽ¼��
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
//        for (i = 0; i <= n - k; i++)//�����ⷨ
//        {
//            num = 0;
//            for (j = i; j < i + k; j++)
//            {
//                num = a[j] + num * 10;//����kλ�����
//            }
//            if (Is(num) == 1) //�ж���kλ�ǲ�������
//            {
//                flag = 1;//flag��Ϊ1
//                break;
//            }
//        }
//        int l;
//        if (flag == 1)//����ҵ���
//        {
//            for (l = j - k; l < j; l++)
//            {
//                printf("%d", a[l]);
//            }
//        }
//        else if (flag == 0) //û�ҵ�
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
//    }//�������飬����\nֹͣ����
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
//    }//�������������
//    for (i = 0; i < n; i++)
//    {
//        printf("%d", a[i]);//�������������
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
//2.����
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
//#include <stdio.h>//�������Ƿ���
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
//#include<stdio.h>//�Ƿ���Ҫ����
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
//	if (i > 0)//��ί������һ��
//	{
//		if (b > c || i == 3)
//			printf("The winner is a: %d + %d", Pa, i);
//	}
//	else
//		printf("The winner is b: %d + %d", Pb, j);
//	return 0;
//}
//
//5.�����ķ��ദ��
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
//7.��������˻�
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
//8.������N���ַ���
//#include <stdio.h>
//int main()//26����
//{
//	int l, n, i;
//	scanf("%d %d", &l, &n);
//	n = n - 1;
//	int a[10];
//	for (i = l - 1; i >= 0; i--)
//	{
//		a[i] = n % 26;//���ÿһλ����ֵ
//		n = n / 26;
//	}
//	for (i = 0; i < l; i++) //a-z 26����
//	{
//		printf("%c", 'z' - a[i]);//ascii��ת��
//	}
//}
//9.6����
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
//		{	//�жϸ�λ�Ƿ�Ϊ6��Ȼ��������޸ı��
//			count++;
//			flag = 1;
//		}
//		if (s[i] - '0' != 6 && flag == 1)//��6δ��ֹʱ����������ж�
//		{	//��λ��Ϊ6��֮ǰ��6����6�ĸ��������ж����
//			if (count <= 3)
//			{
//				for (j = 0; j < count; j++)
//					printf("6");//֮ǰ�м����ʹ�ӡ����6
//			}
//			else if (count > 3 && count <= 9) 
//			{
//				printf("9");//ֻ��ӡһ��9
//			}
//			else if (count > 9)
//			{
//				printf("27");//ֻ��ӡһ��27
//			}
//			count = 0;
//			flag = 0;
//		}
//		if (s[i] - '0' != 6 && flag == 0)	//ԭ�����
//			printf("%c", s[i]);
//	}
//	//��β����6-----����δ����ѭ�����Բ���ӡ
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
//10-�ιβ�Ʊ
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
//                x = i; y = j; //��¼������0��λ��
//            }
//        }
//    a[x][y] = 45 - numadd; //������0�ɳ�ʼ������
//    for (int i = 0; i < 3; i++)//¼������`��ӡ�ο�������
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
//    printf("%d", count[sum]);//��ӡ���
//    return 0;
//}
//11.
//#include<stdio.h>
//int gcd(int a, int b)//���Լ��-շת�����
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
//            r = gcd(t[0].a, t[0].b);//���Լ��
//            t[0].a = t[0].a / r;
//            t[0].b = t[0].b / r;
//            if (t[0].a % t[0].b == 0)//�����1
//            {
//                printf("%d", (t[0].a) / (t[0].b));//�̼��ǽ��
//            }
//            else
//            {
//                printf("%d/%d", t[0].a, t[0].b);//������
//            }
//        }
//    }
//    else
//    {
//        sum = t[0].a;//���� 
//        add = t[0].b;//��ĸ 
//        for (i = 1; i < n; i++)
//        {
//            sum = sum * t[i].b + add * t[i].a;
//            add = add * t[i].b;//�����ļӷ�
//            r = gcd(sum, add);//�����Լ��һ��
//            sum /= r;
//            add /= r;
//        }
//        add = add * n;//�ѷ�ĸ����n�����ǳ�n
//        r = gcd(sum, add);//�ٴλ���
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
//12.��n��������k�������Լ����ǵĺ�
//#include <stdio.h>
//#include <math.h>
//int isprime(int x)//�ж��Ƿ�������
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
//		if (isprime(j))//���������
//		{
//			sum += j;//�������
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
//			k--;//�ҵ�һ���������������ľ�--
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//13.����ѭ������
//#include<stdio.h>
//int main() 
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    if (m > n) 
//    {
//        m = m % n;//ȷ��m��n�ķ�Χ��
//    }
//    int a[100], b[100];
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);//��¼��ȥ
//    }
//    for (i = m, j = 0; i < n; i++)
//    {
//        b[j++] = a[i];//��ǰ����
//    }
//    for (i = 0; i < m; i++) 
//    {
//        b[j++] = a[i];//�ź󲿷�
//    }
//    for (i = 0; i < n - 1; i++) 
//    {
//        printf("%d ", b[i]);//��ӡ
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
        scanf("%s", &s[0]);//���зŽ�s[]��
        j = 0;
        snum = xnum = 0;//��ʼ��
        while (s[j] != '\0') //һλһλ���ж�
        {
            if (s[j] == 'S') 
            {
                snum++;
                if (snum - xnum > M)//��ǰ�˳�
                    break;
            }
            else 
            {
                xnum++;
                if (xnum > snum) break;//��ǰ�˳�
            }
            j++;
        }
        if (xnum == snum) a[i] = 1;//�жϽ������a[]��
        else a[i] = 0;
    }
    for (i = 0; i < N; i++)//��ӡ���
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
//	gets(p);//��ȡ�ַ�
//	int a[20] = { 0 };
//	int arr[20] = { 0 };
//	int index[20] = { 0 };
//	int i, j, temp, lenarr, flag = 0;
//	for (i = 0; i < 11; i++) //����������ĸ�����������±꼴���������Ǹ���
//	{
//		j = p[i] - '0';//ת��Ϊ����
//		a[j]++;
//	}
//	for (i = 0, j = 9; j >= 0; j--)
//	{
//		if (a[j])//������ݼ���������
//		{
//			arr[i++] = j;//�ǰ���Щ���Ӵ�С�����arr��
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
//			flag = 1;	//������Ž��п���
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
//17��
//#include<stdio.h>
//int main()//��Ա�ĸ���һ��Ϊ�����ʮ����Ҳ����ʮ�ı���
//{
//    int a[110];
//    int pos[100][10][10];
//    int max=0, pre=0;
//    int x=0;
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);//¼�����ѧУ����
//        if (a[i] > max)
//        {
//            max = a[i];//��¼��������
//        }
//    }
//    for (int j = 1; j <= max; j++)//�����
//    {
//        for (int k = 1; k <= 10; k++)//��Ա��
//        {
//            for (int i = 1; i <= n; i++)//ѧУ��
//            {//�����飬��Ա����ѧУΪ��������ѭ��
//                if (j <= a[i])//��Ϊx�ı仯����
//                {
//                    if (pre == i)
//                        x += 2;
//                    else
//                        x++;
//                    pos[i][j][k] = x;
//                    pre = i;//��¼
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
//        sum = sum + a[i].num;//��¼�ܺ�
//    }
//    sum = (sum / n) / 2;//�����ƽ������һ��
//    for (i = 0; i < n; i++) //������
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
//#include<stdio.h>//ģ�����
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
//	printf(" %d", i);//λ��
//	return 0;
//}
//20.
//�ŷ��Ű�
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(void)
//{
//    int num, row, col; 
//    int k = 0, i, j;
//    char s[1005], b[105][1005];//b����������Ķ�ά���� 
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
//        b[i][0] = ' ';//Ӧ�Կո� 
//    for (j = col - 1; j >= 0; j--)//��ʼ���ַ���װ���ά���飨���һ�п�ʼ�� 
//    {
//        for (i = 0; i < row; i++)//��һ�п�ʼ 
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
//	char name[n][10];//���ڴ���ѹ�ע������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", name[i]);//���ո����
//	}
//	qsort(name, n, sizeof(name[0]), cmp); //�����Ա�ʹ�ö��ֲ��� 
//	int avg = 0;
//	scanf("%d", &m);//ѯ������
//	char name2[m][10];
//	for (i = 0; i < m; i++) //¼�����ݲ����
//	{
//		scanf("%s%d", people[i].s, &people[i].num);
//		avg += people[i].num;
//	}
//	avg /= m;//��ƽ��
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
//				{//���ֲ��� 
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
//	qsort(name2, count, sizeof(name2[0]), cmp);//�ﵽ���������Ŀ��
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
//        { //�жϵ�ǰ������û��Ƿ������С�û�
//            int k;
//            /*����ǰ�û��滻����������С�û�*/
//            strcpy(s[m.top].Name, p.Name);
//            s[m.top].sum = p.sum;
//            s[m.top].a = p.a;
//            m.min = 1000;
//            for (k = 0; k < 3; k++) 
//            { //�ҵ������������е���С�û�
//                if (m.min >= s[k].sum) 
//                {
//                    if (m.min == s[k].sum) 
//                    {
//                        if (m.a > s[k].a) 
//                        {
//                            continue;
//                        }
//                    }
//                    /*�滻��С�û�*/
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
//���������
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