#define _CRT_SECURE_NO_WARNINGS 1
#include"roey.h"
//int main()
//{
//	// 初始化绘图窗口
//	initgraph(640, 480);
//
//	// 设置背景色为蓝色
//	setbkcolor(BLUE);
//	// 用背景色清空屏幕
//	cleardevice();
//
//	// 设置绘图色为红色
//	setcolor(RED);
//	// 画矩形
//	rectangle(100, 100, 300, 300);
//
//	// 按任意键退出
//	_getch();
//	closegraph();
//}
//#include <graphics.h>
//int main()
//{
//	// 初始化图形窗口
//	initgraph(640, 480);
//	ExMessage m;		// 定义消息变量
//	while (true)
//	{
//		// 获取一条鼠标或按键消息
//		m = getmessage(EM_MOUSE | EM_KEY);
//		switch (m.message)
//		{
//		case WM_MOUSEMOVE:
//			// 鼠标移动的时候画红色的小点
//			putpixel(m.x, m.y, RED);
//			break;
//		case WM_LBUTTONDOWN:
//			// 如果点左键的同时按下了 Ctrl 键
//			if (m.ctrl)
//				// 画一个大方块
//				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
//			else
//				// 画一个小方块
//				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
//			break;
//
//		case WM_KEYDOWN:
//			if (m.vkcode == VK_ESCAPE)
//				return 0;	// 按 ESC 键退出程序
//		}
//	}
//	// 关闭图形窗口
//	closegraph();
//	return 0;
//}
//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// 创建绘图窗口
//	initgraph(640, 480);
//
//	// 画渐变的天空(通过亮度逐渐增加)
//	float H = 190;		// 色相
//	float S = 1;		// 饱和度
//	float L = 0.7f;		// 亮度
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// 画彩虹(通过色相逐渐增加)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// 按任意键退出
//	_getch();
//	closegraph();
//	return 0;
//}
//#define MAXSTAR 200	// 星星总数
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
//#include"resource.h"//导入资源之后有一个resource.h头文件 记得加上
//#include<Windows.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//
//int main()
//{
//	PlaySound(LPWSTR("C:\\Users\\Roey\\Desktop\\项目\\park bird-are you lost.wav"), GetModuleHandle(NULL), SND_ASYNC);
//	//PlaySound(MAKEINTRESOURCE(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
//
//	//上面两种方式都可以  IDR_WAVE1 是导入资源的ID   
//	//下面针对第三个参数做一下解释
//	//SND_RESOURCE 表示使用的资源文件(如果是文本文件 exe要带上一个音乐文件才能实现音乐播放)
//	//SND_ASYNC  异步播放 
//	//SND_LOOP  循环播放  必须要用到SND_ASYNC
//	while (1);//防止直接退出程序
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
static int LEN = 7;
#define DIV_UP(a, b) ((a + b - 1) / b)
#define WALL "* "
static int NUM = 0;
static int walls = 3;
int rand_num[100] = { 0 };

void draw_col(int len) {
    int flag = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < LEN - flag; j++) {
            printf(WALL);
        }
        flag = 1;
    }
    printf("\n");
}

void row_with_blank(int len) {
    //len = (len - 1) * LEN + 1;
    for (int i = 0; i < len; i++) {
        printf(WALL);
        for (int j = 0; j < LEN - 2; j++) {
            printf("  ");
        }
    }
    printf(WALL);
    printf("\n");
}


void row_with_digit(int len) {
    for (int i = 0; i < len; i++) {
        printf(WALL);
        int col_blank = (LEN - 3) / 2;
        for (int j = 0; j < col_blank; j++) {
            printf("  ");
        }
        if (rand_num[NUM] <= 9) printf("%d ", rand_num[NUM++]);
        else printf("%d", rand_num[NUM++]);
        for (int j = 0; j < col_blank; j++) {
            printf("  ");
        }
    }
    printf(WALL);
    printf("\n");
}

void draw(int len) {
    //draw_col(len);
    for (int i = 0; i < len; i++) {
        draw_col(len);
        int row_blank = (LEN - 3) / 2;
        for (int j = 0; j < row_blank; j++) {
            row_with_blank(len);
        }
        row_with_digit(len);
        for (int j = 0; j < row_blank; j++) {
            row_with_blank(len);
        }
    }
    draw_col(len);
    printf("\n");
}

void parse_opt(int argc, char** argv) {
    char ch;
    while ((ch = getopt(argc, argv, "n:g:")) != -1) {
        switch (ch) {
        case 'n':
            walls = atoi(optarg);
            break;
        case 'g':
            LEN = atoi(optarg);
            LEN |= 1;
            break;
        }
    }
}

void make_random() {
    int nums = walls * walls;
    int ind = rand() % nums;
    for (int i = 1; i <= nums; i++) {
        while (rand_num[ind] != 0) {
            ind = rand() % nums;
        }
        rand_num[ind] = i;
    }
}

int main(int argc, char** argv) {
    parse_opt(argc, argv);
    srand(time(0) ^ getpid());
    make_random();
    int times = 0;
    while (1) {
        NUM = 0;
        char buf[10] = { 0 };
        FILE* fp = popen("clear", "r");
        fread(buf, 1024, 1, fp);
        pclose(fp);
        printf("%s", buf);
        int n;
        printf("%d total: %d\n", times, walls * walls);
        draw(walls);
        sleep(1);
        times++;
    }
    return 0;
}

