#define _CRT_SECURE_NO_WARNINGS 1
#include"roey.h"
//int main()
//{
//	// ��ʼ����ͼ����
//	initgraph(640, 480);
//
//	// ���ñ���ɫΪ��ɫ
//	setbkcolor(BLUE);
//	// �ñ���ɫ�����Ļ
//	cleardevice();
//
//	// ���û�ͼɫΪ��ɫ
//	setcolor(RED);
//	// ������
//	rectangle(100, 100, 300, 300);
//
//	// ��������˳�
//	_getch();
//	closegraph();
//}
//#include <graphics.h>
//int main()
//{
//	// ��ʼ��ͼ�δ���
//	initgraph(640, 480);
//	ExMessage m;		// ������Ϣ����
//	while (true)
//	{
//		// ��ȡһ�����򰴼���Ϣ
//		m = getmessage(EM_MOUSE | EM_KEY);
//		switch (m.message)
//		{
//		case WM_MOUSEMOVE:
//			// ����ƶ���ʱ�򻭺�ɫ��С��
//			putpixel(m.x, m.y, RED);
//			break;
//		case WM_LBUTTONDOWN:
//			// ����������ͬʱ������ Ctrl ��
//			if (m.ctrl)
//				// ��һ���󷽿�
//				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
//			else
//				// ��һ��С����
//				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
//			break;
//
//		case WM_KEYDOWN:
//			if (m.vkcode == VK_ESCAPE)
//				return 0;	// �� ESC ���˳�����
//		}
//	}
//	// �ر�ͼ�δ���
//	closegraph();
//	return 0;
//}
//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// ������ͼ����
//	initgraph(640, 480);
//
//	// ����������(ͨ������������)
//	float H = 190;		// ɫ��
//	float S = 1;		// ���Ͷ�
//	float L = 0.7f;		// ����
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// ���ʺ�(ͨ��ɫ��������)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// �����߿�Ϊ 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// ��������˳�
//	_getch();
//	closegraph();
//	return 0;
//}
//#define MAXSTAR 200	// ��������
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
//#include"resource.h"//������Դ֮����һ��resource.hͷ�ļ� �ǵü���
//#include<Windows.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//
//int main()
//{
//	PlaySound(LPWSTR("C:\\Users\\Roey\\Desktop\\��Ŀ\\park bird-are you lost.wav"), GetModuleHandle(NULL), SND_ASYNC);
//	//PlaySound(MAKEINTRESOURCE(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
//
//	//�������ַ�ʽ������  IDR_WAVE1 �ǵ�����Դ��ID   
//	//������Ե�����������һ�½���
//	//SND_RESOURCE ��ʾʹ�õ���Դ�ļ�(������ı��ļ� exeҪ����һ�������ļ�����ʵ�����ֲ���)
//	//SND_ASYNC  �첽���� 
//	//SND_LOOP  ѭ������  ����Ҫ�õ�SND_ASYNC
//	while (1);//��ֱֹ���˳�����
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

