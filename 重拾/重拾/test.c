#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ����
//����ˮ,һƿһԪ,������ƿ�ܻ�һƿ��ˮ,��20Ԫ,���Ժȶ���ƿ��ˮ
//�����ٺȺ�
//��������ٻ�
//
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("������Ԥ����:");
//	scanf("%d", &money);
//	//����,�����������ˮ�ȵ�
//	total = money;//��ʱ����total����ƿ
//	empty = total;
//	while (empty>=2)
//	{
//		total = total + empty / 2;//��ʱ�����Һ���
//		empty = empty / 2 + empty % 2;//��2+ģ2�Ǿ���!
//	}
//	printf("�ܺ���ˮ��ƿ����%d\n", total);
//	//ֵ��ע�����������ʣ��һ����ƿ,�������ϰ�����ƿȻ���ٻ�һƿ
//	//Ȼ���ٰ������ƿ�ӻ���ȥ,�����Ϳ��Զ��һƿ������������
// //Ҳ����ֱ����2n-1;
// //�Ӽ�ֵ�����ĽǶ���,20==(��Ȼ��ָ����ȹ���)40����ƿ,��������һ����ƿ�������Լ�����
//}
//����������ż����˳��,��������,ʹ����������ż����ǰ��
//#include<stdio.h>
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//������ҵ�һ��ż��
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//����(left < right)&&,��Ϊ��ѭ���ڲ�left��right�������˸ı�
//		//���ұ��ҵ�һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)//��������������ż��(����Ҳ��������Ļ����Ѿ�����������)
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
// ��ӡ�������
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//�ѵ�һ�е�Ԫ����Ϊ1
//	//�ѶԽ��ߵ�Ԫ����Ϊ1
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 0; j <= 9; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;//�ѵ�һ�е�Ԫ����Ϊ1
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;//�ѶԽ��ߵ�Ԫ����Ϊ1
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
//	//��ӡ
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
// ��������:36ƥ��,6���ܵ�,û�м�ʱ��,������ȷ��,36ƥ���е�ǰ����
// �������ٱ�������
// 6������õ�ÿ��ĵ�һ��(6��)
// 1,2,3,4,5,6(456���Ѿ����ų�����)7��
// 1(2,3),2,2(2,3),3-------8��
// ���������8��
// ------------------------------------------------------------------
// �����--������----����˼������ĽǶ�---��ѹ�����µ������������߼�˼ά����
//a˵  ������   1
//b˵  ��c     1
//c˵  ��d      0
//d˵  c�ں�˵�˵�  1
//��֪������˵�����滰,һ����˵���Ǽٻ�
//������Щ��Ϣ,дһ��������ȷ������˭������
//#include<stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') +
//			(killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("������%c",killer);
//			break;
//		}
//	}
//	return 0;
//}
// ------------------------------------------------------------------
//��������,һ���Ĳ��ʲ�����,����ÿһ��ȼ����ǡ����һ��Сʱ,
//ʹ��������,��ȷ��15����.
//��һ����ͷ����ȼ(30����ȼ��)
//ͬʱ�ڶ�����һͷ(30���Ӻ��ȼ��һͷ)(��������15����)
//---ѧ��õķ�ʽ�ǽ�?????-------------!!!!!!!!!��Ҳ����һ���˽�һ���...
// ------------------------------------------------------------------
//������
//5λ�˶�Ա�μ�����ˮ����
//����������Ԥ��������
//a˵:b2,a3
//b˵:a2,e4
//c˵:c1,d2
//d˵:c5,d3
//e˵:e4,a1
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
//								//����ʹ�üӷ�)
//								printf("a�ǵ�%d��\n", a);
//								printf("b�ǵ�%d��\n", b);
//								printf("c�ǵ�%d��\n", c);
//								printf("d�ǵ�%d��\n", d);
//								printf("e�ǵ�%d��\n", e);
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
//c���Ե��Ĵ��ϻ�
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		int x = 0;
//		printf("ѡ��˵�:");
//		scanf("%d", &x);
//		switch (x)
//		{
//			case 1:
//				printf("  1 ���������ĺ�\n");
//				break;
//			case 2:
//				printf("  2 ���������Ĳ�\n");
//				break;
//			case 3:
//				printf("  3 �����������̺�����\n");
//				break;
//			case 4:
//				printf("  4 ���������ĵ���֮��\n");
//				break;
//			case 0:
//				printf("  5 �˳�ϵͳ\n");
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
//			printf("����������ظò˵�,����ѡ��");
//			system("pause");
//		}
//	}
//	return 0;
//}
// ------------------------------------------------------------------
//����(-1)^n*(1/(n^2+1))�ļ���ֵ
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
//	printf("����ֵΪ%lf\n", sum);
//}
// ------------------------------------------------------------------
//����30���ַ�,�ֱ�ͳ����������,Ӣ����ĸ,�������ַ��ĸ���
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
//	printf("letter�ĸ���Ϊ%d\ndigit�ĸ���Ϊ%d\nother�ĸ���Ϊ%d\n",
//		letter, digit, other);
//}
// ------------------------------------------------------------------
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int sign0 = 0;
//	int c = 0;
//	printf("��ո������ͬԪ��\n");
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
//	printf("�����ĸ�����%d\n", sign0);
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
//			printf("%d ��������\n", i);
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
//	int myt[] = { 0 };//��ʱ��
//	int myta[] = { 0 };//��һ��ʱ�䳤
//	int mytb[] = { 0 };//�ϲ���ʱ�䳤
//	scanf("%d%d", &n,&m);//������,����
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
//˫ѭ��
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
//��ѭ��
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
////�žų˷���
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
//������е������ַ�ͼ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i=1;i<=5;i++)//�ϲ���
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
//	for (i = 4; i >= 0; i--)//�²���
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