#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>
#include <time.h>
#include <conio.h>
//int main()
//{
//	// �����������
//	srand((unsigned)time(NULL));
//	// ��ʼ��ͼ��ģʽ
//	initgraph(640, 480);
//	int  x, y;
//	char c;
//	settextstyle(16, 8, _T("Courier"));	// ��������
//	// ������ɫ
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//	for (int i = 0; i <= 479; i++)
//	{
//		// �����λ����ʾ���������ĸ
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//		// ���߲���һ��������
//		line(0, i, 639, i);
//
//		Sleep(10);					// ��ʱ
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// ��������˳�
//	}
//
//	// �ر�ͼ��ģʽ
//	closegraph();
//	return 0;
//}
//#include <graphics.h>
//#include <time.h>
//#include <conio.h>
//#define MAXSTAR 200	// ��������
//
//struct STAR
//{
//	double	x;
//	int		y;
//	double	step;
//	int		color;
//};
//
//STAR star[MAXSTAR];
//
//// ��ʼ������
//void InitStar(int i)
//{
//	star[i].x = 0;
//	star[i].y = rand() % 480;
//	star[i].step = (rand() % 5000) / 1000.0 + 1;
//	star[i].color = (int)(star[i].step * 255 / 6.0 + 0.5);	// �ٶ�Խ�죬��ɫԽ��
//	star[i].color = RGB(star[i].color, star[i].color, star[i].color);
//}
//
//// �ƶ�����
//void MoveStar(int i)
//{
//	// ����ԭ��������
//	putpixel((int)star[i].x, star[i].y, 0);
//
//	// ������λ��
//	star[i].x += star[i].step;
//	if (star[i].x > 640)	InitStar(i);
//
//	// ��������
//	putpixel((int)star[i].x, star[i].y, star[i].color);
//}
//
//// ������
//int main()
//{
//	srand((unsigned)time(NULL));	// �������
//	initgraph(640, 480);			// ������ͼ����
//
//	// ��ʼ����������
//	for (int i = 0; i < MAXSTAR; i++)
//	{
//		InitStar(i);
//		star[i].x = rand() % 640;
//	}
//
//	// �����ǿգ���������˳�
//	while (!_kbhit())
//	{
//		for (int i = 0; i < MAXSTAR; i++)
//			MoveStar(i);
//		Sleep(20);
//	}
//
//	closegraph();					// �رջ�ͼ����
//	return 0;
//}
//////////////////////////////////////////
//// ��������ѭ������
//// ���ߣ�������
//// ���뻷����Visual C++ 6.0��EasyX_20210730
//// ��д���ڣ�2022-1-23
//
//////////// ͷ�ļ� ////////////
//#include<graphics.h>
//#include<conio.h>
//#include<math.h>
//
/////////// ���Ƶĸ߶ȺͿ�� /////////
//#define Width 640
//#define Height 480
//#define N 8
//const double PI = acos(-1.0);
//
//// ��¼��ά�������
//struct point3d
//{
//	double x;
//	double y;
//	double z;
//};
//// ��¼����ͶӰ���ͼʱ������
//struct point2d
//{
//	int x;
//	int y;
//};
//
//// ���ݳ�ʼ������ʼ״̬
//void init_start(point3d Point1[N], point3d Point2[N], point3d Point3[N])
//{
//	Point1[0].x = -3; Point1[0].y = -3; Point1[0].z = -3;
//	Point1[1].x = -3; Point1[1].y = -3; Point1[1].z = 3;
//	Point1[2].x = -3; Point1[2].y = 3; Point1[2].z = 3;
//	Point1[3].x = 3; Point1[3].y = 3; Point1[3].z = 3;
//	Point1[4].x = 3; Point1[4].y = 3; Point1[4].z = -3;
//	Point1[5].x = 3; Point1[5].y = -3; Point1[5].z = -3;
//	Point1[6].x = -3; Point1[6].y = 3; Point1[6].z = -3;
//	Point1[7].x = 3; Point1[7].y = -3; Point1[7].z = 3;
//	Point2[0].x = -2; Point2[0].y = -2; Point2[0].z = -2;
//	Point2[1].x = -2; Point2[1].y = -2; Point2[1].z = 2;
//	Point2[2].x = -2; Point2[2].y = 2; Point2[2].z = 2;
//	Point2[3].x = 2; Point2[3].y = 2; Point2[3].z = 2;
//	Point2[4].x = 2; Point2[4].y = 2; Point2[4].z = -2;
//	Point2[5].x = 2; Point2[5].y = -2; Point2[5].z = -2;
//	Point2[6].x = -2; Point2[6].y = 2; Point2[6].z = -2;
//	Point2[7].x = 2; Point2[7].y = -2; Point2[7].z = 2;
//	Point3[0].x = -1; Point3[0].y = -1; Point3[0].z = -1;
//	Point3[1].x = -1; Point3[1].y = -1; Point3[1].z = 1;
//	Point3[2].x = -1; Point3[2].y = 1; Point3[2].z = 1;
//	Point3[3].x = 1; Point3[3].y = 1; Point3[3].z = 1;
//	Point3[4].x = 1; Point3[4].y = 1; Point3[4].z = -1;
//	Point3[5].x = 1; Point3[5].y = -1; Point3[5].z = -1;
//	Point3[6].x = -1; Point3[6].y = 1; Point3[6].z = -1;
//	Point3[7].x = 1; Point3[7].y = -1; Point3[7].z = 1;
//}
//
//// ����������ĳ�ʼλ�ã����������˵��� Z ���ϣ��ﵽ����ͼΪ�����ε�Ч����������Ϊչʾ״̬
//void adjust(point3d Point1[N], point3d Point2[N], point3d Point3[N])
//{
//	double x; int i;
//	for (i = 0; i < N; i++)
//	{
//		x = Point1[i].x;
//		Point1[i].x = cos(PI / 4) * Point1[i].x - Point1[i].z * sin(PI / 4);
//		Point1[i].z = cos(PI / 4) * Point1[i].z + sin(PI / 4) * x;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = Point2[i].x;
//		Point2[i].x = cos(PI / 4) * Point2[i].x - Point2[i].z * sin(PI / 4);
//		Point2[i].z = sin(PI / 4) * x + cos(PI / 4) * Point2[i].z;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = Point3[i].x;
//		Point3[i].x = cos(PI / 4) * Point3[i].x - Point3[i].z * sin(PI / 4);
//		Point3[i].z = cos(PI / 4) * Point3[i].z + sin(PI / 4) * x;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = Point1[i].y;
//		Point1[i].y = Point1[i].y * sqrt(6.0) / 3 - Point1[i].z * sqrt(3.0) / 3;
//		Point1[i].z = x * sqrt(3.0) / 3 + Point1[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = Point2[i].y;
//		Point2[i].y = Point2[i].y * sqrt(6.0) / 3 - Point2[i].z * sqrt(3.0) / 3;
//		Point2[i].z = x * sqrt(3.0) / 3 + Point2[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = Point3[i].y;
//		Point3[i].y = Point3[i].y * sqrt(6.0) / 3 - Point3[i].z * sqrt(3.0) / 3;
//		Point3[i].z = x * sqrt(3.0) / 3 + Point3[i].z * sqrt(6.0) / 3;
//	}
//}
//
//// ����ά�������������ͶӰ
//point2d orthographic_Project(point3d p)
//{
//	point2d p2d;
//	p2d.x = (int)(p.x * 40) + 320;
//	p2d.y = (int)(p.y * 40) + 240;
//	return p2d;
//}
//
//// ���������嶥�㣬����ͼ��
//void display(point2d p2d1[N], point2d p2d2[N], point2d p2d3[N])
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		line(p2d1[i].x, p2d1[i].y, p2d1[i + 1].x, p2d1[i + 1].y);
//		line(p2d2[i].x, p2d2[i].y, p2d2[i + 1].x, p2d2[i + 1].y);
//		line(p2d3[i].x, p2d3[i].y, p2d3[i + 1].x, p2d3[i + 1].y);
//	}
//	line(p2d1[5].x, p2d1[5].y, p2d1[0].x, p2d1[0].y);
//	line(p2d2[5].x, p2d2[5].y, p2d2[0].x, p2d2[0].y);
//	line(p2d3[5].x, p2d3[5].y, p2d3[0].x, p2d3[0].y);
//	for (i = 0; i < 5; i = i + 2)
//	{
//		line(p2d1[6].x, p2d1[6].y, p2d1[i].x, p2d1[i].y);
//		line(p2d2[6].x, p2d2[6].y, p2d2[i].x, p2d2[i].y);
//		line(p2d3[6].x, p2d3[6].y, p2d3[i].x, p2d3[i].y);
//	}
//	for (i = 1; i < 6; i = i + 2)
//	{
//		line(p2d1[7].x, p2d1[7].y, p2d1[i].x, p2d1[i].y);
//		line(p2d2[7].x, p2d2[7].y, p2d2[i].x, p2d2[i].y);
//		line(p2d3[7].x, p2d3[7].y, p2d3[i].x, p2d3[i].y);
//	}
//}
//
//// ����Χ���������ת������ Y ��
//void Rotate1(point3d p3d[N], double angle)
//{
//	double x; int i;
//	for (i = 0; i < N; i++) // �����س�ʼ״̬
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 + p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = -x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(angle) + p3d[i].z * sin(-angle);
//		p3d[i].z = x * sin(angle) + p3d[i].z * cos(angle);
//	}
//	for (i = 0; i < N; i++) // ������չʾ״̬
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 - p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//}
//
//// �м���������ת������ XOZ ƽ��� x+y=0
//void Rotate2(point3d p3d[N], double angle)
//{
//	double x; int i;
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 + p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = -x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++) // ����ת�� Z �ᣬ���� Z ����ת��������ת��������������� x+y=0 ��ת
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(PI / 4) - p3d[i].z * sin(PI / 4);
//		p3d[i].z = x * sin(PI / 4) + p3d[i].z * cos(PI / 4);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(angle) + p3d[i].y * sin(-angle);
//		p3d[i].y = x * sin(angle) + p3d[i].y * cos(angle);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(-PI / 4) - p3d[i].z * sin(-PI / 4);
//		p3d[i].z = x * sin(-PI / 4) + p3d[i].z * cos(-PI / 4);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 - p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//}
//
//// ���ڲ���������ת������ XOY ƽ��� x=y
//void Rotate3(point3d p3d[N], double angle)
//{
//	double x; int i;
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 + p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = -x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(-PI / 4) - p3d[i].z * sin(-PI / 4);
//		p3d[i].z = x * sin(-PI / 4) + p3d[i].z * cos(-PI / 4);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(angle) + p3d[i].y * sin(-angle);
//		p3d[i].y = x * sin(angle) + p3d[i].y * cos(angle);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].x;
//		p3d[i].x = p3d[i].x * cos(PI / 4) - p3d[i].z * sin(PI / 4);
//		p3d[i].z = x * sin(PI / 4) + p3d[i].z * cos(PI / 4);
//	}
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 - p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//}
//int main()
//{
//	initgraph(Width, Height);
//	setlinecolor(RGB(255, 165, 0)); // ������ɫ
//	setfillcolor(RGB(255, 165, 0));
//	setlinestyle(PS_SOLID, 2); // �Ӵ���������
//	point3d Point1[N];
//	point3d Point2[N];
//	point3d Point3[N];
//	point2d p2d1[N];
//	point2d p2d2[N];
//	point2d p2d3[N];
//	init_start(Point1, Point2, Point3); // ��ʼ������
//	adjust(Point1, Point2, Point3); // ��������
//	BeginBatchDraw();
//	while (true)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			p2d1[i] = orthographic_Project(Point1[i]); // ͶӰ
//			p2d2[i] = orthographic_Project(Point2[i]);
//			p2d3[i] = orthographic_Project(Point3[i]);
//			solidcircle((int)p2d1[i].x, (int)p2d1[i].y, 5); // ���ƶ���
//			solidcircle((int)p2d2[i].x, (int)p2d2[i].y, 5);
//			solidcircle((int)p2d3[i].x, (int)p2d3[i].y, 5);
//		}
//		display(p2d1, p2d2, p2d3); // ����
//		Sleep(20);
//		Rotate1(Point1, PI / 180); // ��ת
//		Rotate2(Point2, PI / 180);
//		Rotate3(Point3, PI / 180);
//		FlushBatchDraw();
//
//		cleardevice();
//	}
//	EndBatchDraw();
//	_getch();
//	closegraph();
//	return 0;
//}
///////////////////////////////////////////////////
// �������ƣ��Ӿ��������2
// ���뻷����Visual C++ 6.0��EasyX 2013˪����
// �������ߣ�yangw80 <yw80@qq.com>
// ����޸ģ�2013-12-16
//
#include <graphics.h>
#include <conio.h>

// ���峣��
#define	UNIT		24
#define OFFSET_X	116
#define OFFSET_Y	36

// ��װ�λ�
void DrawUnit(int x, int y, int shape)
{
	// ������ɫ
	int n = ((shape & 1) ? 1 : 0) + ((shape & 2) ? 1 : 0) + ((shape & 4) ? 1 : 0);
	setlinecolor((n % 2 == 1) ? 0xaa00cc : WHITE);

	// ��֦��
	line(x - 5, y, x + 5, y);
	line(x, y - 5, x, y + 5);

	// ��Ҷ��
	rectangle(x - 1, y - 4, x + 1, y - 2);
	rectangle(x - 1, y + 2, x + 1, y + 4);
	rectangle(x - 4, y - 1, x - 2, y + 1);
	rectangle(x + 2, y - 1, x + 4, y + 1);
}

// ������
void main()
{
	// ������ͼ����
	initgraph(640, 480);
	// ���ð�ɫ����
	setbkcolor(WHITE);
	cleardevice();
	// ��������ԭ��
	setorigin(OFFSET_X, OFFSET_Y);

	int x, y;

	// �����ӱ���
	for (y = 0; y < 17; y++)
		for (x = 0; x < 17; x++)
		{
			setfillcolor(((x + y) % 2) ? 0x83be3e : 0x01dcaa);
			solidrectangle(x * UNIT, y * UNIT, (x + 1) * UNIT - 1, (y + 1) * UNIT - 1);
		}

	// ��װ�λ�
	for (y = 0; y < 16; y++)
	{
		int shape = 8 - y % 8;
		for (x = 0; x < 16; x++)
			DrawUnit((x + 1) * UNIT, (y + 1) * UNIT, shape++);
	}

	// ��������˳�
	_getch();
	closegraph();
}