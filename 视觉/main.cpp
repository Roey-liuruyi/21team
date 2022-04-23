#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>
#include <time.h>
#include <conio.h>
//int main()
//{
//	// 设置随机种子
//	srand((unsigned)time(NULL));
//	// 初始化图形模式
//	initgraph(640, 480);
//	int  x, y;
//	char c;
//	settextstyle(16, 8, _T("Courier"));	// 设置字体
//	// 设置颜色
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//	for (int i = 0; i <= 479; i++)
//	{
//		// 在随机位置显示三个随机字母
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//		// 画线擦掉一个像素行
//		line(0, i, 639, i);
//
//		Sleep(10);					// 延时
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// 按任意键退出
//	}
//
//	// 关闭图形模式
//	closegraph();
//	return 0;
//}
//#include <graphics.h>
//#include <time.h>
//#include <conio.h>
//#define MAXSTAR 200	// 星星总数
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
//// 初始化星星
//void InitStar(int i)
//{
//	star[i].x = 0;
//	star[i].y = rand() % 480;
//	star[i].step = (rand() % 5000) / 1000.0 + 1;
//	star[i].color = (int)(star[i].step * 255 / 6.0 + 0.5);	// 速度越快，颜色越亮
//	star[i].color = RGB(star[i].color, star[i].color, star[i].color);
//}
//
//// 移动星星
//void MoveStar(int i)
//{
//	// 擦掉原来的星星
//	putpixel((int)star[i].x, star[i].y, 0);
//
//	// 计算新位置
//	star[i].x += star[i].step;
//	if (star[i].x > 640)	InitStar(i);
//
//	// 画新星星
//	putpixel((int)star[i].x, star[i].y, star[i].color);
//}
//
//// 主函数
//int main()
//{
//	srand((unsigned)time(NULL));	// 随机种子
//	initgraph(640, 480);			// 创建绘图窗口
//
//	// 初始化所有星星
//	for (int i = 0; i < MAXSTAR; i++)
//	{
//		InitStar(i);
//		star[i].x = rand() % 640;
//	}
//
//	// 绘制星空，按任意键退出
//	while (!_kbhit())
//	{
//		for (int i = 0; i < MAXSTAR; i++)
//			MoveStar(i);
//		Sleep(20);
//	}
//
//	closegraph();					// 关闭绘图窗口
//	return 0;
//}
//////////////////////////////////////////
//// 程序：无限循环几何
//// 作者：肥美虎
//// 编译环境：Visual C++ 6.0，EasyX_20210730
//// 编写日期：2022-1-23
//
//////////// 头文件 ////////////
//#include<graphics.h>
//#include<conio.h>
//#include<math.h>
//
/////////// 绘制的高度和宽度 /////////
//#define Width 640
//#define Height 480
//#define N 8
//const double PI = acos(-1.0);
//
//// 记录三维点的坐标
//struct point3d
//{
//	double x;
//	double y;
//	double z;
//};
//// 记录正交投影后绘图时的坐标
//struct point2d
//{
//	int x;
//	int y;
//};
//
//// 数据初始化，初始状态
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
//// 调整正方体的初始位置，让其两个端点在 Z 轴上，达到正视图为六边形的效果，调整后为展示状态
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
//// 对三维正方体进行正交投影
//point2d orthographic_Project(point3d p)
//{
//	point2d p2d;
//	p2d.x = (int)(p.x * 40) + 320;
//	p2d.y = (int)(p.y * 40) + 240;
//	return p2d;
//}
//
//// 连接正方体顶点，绘制图形
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
//// 最外围正方体的旋转，沿着 Y 轴
//void Rotate1(point3d p3d[N], double angle)
//{
//	double x; int i;
//	for (i = 0; i < N; i++) // 调整回初始状态
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
//	for (i = 0; i < N; i++) // 调整回展示状态
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 - p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//}
//
//// 中间正方体旋转，沿着 XOZ 平面的 x+y=0
//void Rotate2(point3d p3d[N], double angle)
//{
//	double x; int i;
//	for (i = 0; i < N; i++)
//	{
//		x = p3d[i].y;
//		p3d[i].y = p3d[i].y * sqrt(6.0) / 3 + p3d[i].z * sqrt(3.0) / 3;
//		p3d[i].z = -x * sqrt(3.0) / 3 + p3d[i].z * sqrt(6.0) / 3;
//	}
//	for (i = 0; i < N; i++) // 先旋转到 Z 轴，再绕 Z 轴旋转，接着旋转回来，就完成了绕 x+y=0 旋转
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
//// 最内层正方体旋转，沿着 XOY 平面的 x=y
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
//	setlinecolor(RGB(255, 165, 0)); // 设置颜色
//	setfillcolor(RGB(255, 165, 0));
//	setlinestyle(PS_SOLID, 2); // 加粗连接线条
//	point3d Point1[N];
//	point3d Point2[N];
//	point3d Point3[N];
//	point2d p2d1[N];
//	point2d p2d2[N];
//	point2d p2d3[N];
//	init_start(Point1, Point2, Point3); // 初始化数据
//	adjust(Point1, Point2, Point3); // 调整数据
//	BeginBatchDraw();
//	while (true)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			p2d1[i] = orthographic_Project(Point1[i]); // 投影
//			p2d2[i] = orthographic_Project(Point2[i]);
//			p2d3[i] = orthographic_Project(Point3[i]);
//			solidcircle((int)p2d1[i].x, (int)p2d1[i].y, 5); // 绘制顶点
//			solidcircle((int)p2d2[i].x, (int)p2d2[i].y, 5);
//			solidcircle((int)p2d3[i].x, (int)p2d3[i].y, 5);
//		}
//		display(p2d1, p2d2, p2d3); // 连接
//		Sleep(20);
//		Rotate1(Point1, PI / 180); // 旋转
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
// 程序名称：视觉错觉艺术2
// 编译环境：Visual C++ 6.0，EasyX 2013霜降版
// 作　　者：yangw80 <yw80@qq.com>
// 最后修改：2013-12-16
//
#include <graphics.h>
#include <conio.h>

// 定义常量
#define	UNIT		24
#define OFFSET_X	116
#define OFFSET_Y	36

// 画装饰花
void DrawUnit(int x, int y, int shape)
{
	// 设置颜色
	int n = ((shape & 1) ? 1 : 0) + ((shape & 2) ? 1 : 0) + ((shape & 4) ? 1 : 0);
	setlinecolor((n % 2 == 1) ? 0xaa00cc : WHITE);

	// 画枝干
	line(x - 5, y, x + 5, y);
	line(x, y - 5, x, y + 5);

	// 画叶子
	rectangle(x - 1, y - 4, x + 1, y - 2);
	rectangle(x - 1, y + 2, x + 1, y + 4);
	rectangle(x - 4, y - 1, x - 2, y + 1);
	rectangle(x + 2, y - 1, x + 4, y + 1);
}

// 主函数
void main()
{
	// 创建绘图窗体
	initgraph(640, 480);
	// 设置白色背景
	setbkcolor(WHITE);
	cleardevice();
	// 设置坐标原点
	setorigin(OFFSET_X, OFFSET_Y);

	int x, y;

	// 画格子背景
	for (y = 0; y < 17; y++)
		for (x = 0; x < 17; x++)
		{
			setfillcolor(((x + y) % 2) ? 0x83be3e : 0x01dcaa);
			solidrectangle(x * UNIT, y * UNIT, (x + 1) * UNIT - 1, (y + 1) * UNIT - 1);
		}

	// 画装饰花
	for (y = 0; y < 16; y++)
	{
		int shape = 8 - y % 8;
		for (x = 0; x < 16; x++)
			DrawUnit((x + 1) * UNIT, (y + 1) * UNIT, shape++);
	}

	// 按任意键退出
	_getch();
	closegraph();
}