#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <graphics.h>  
#include <conio.h>
#include <time.h>
#include "EasyX.h"
#include "Time.h"
#include <vector>
#include <string>
using namespace std;
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define  WIDTH 800  
#define  HEIGHT 600
ExMessage msg;
class numload  //一系列状态的菜单状态展示
{
public:
	vector <IMAGE> icon1; //点击前
	vector <IMAGE> icon2;//点击后
	IMAGE im_show;
	void initialize() // 初始化
	{
		icon1.clear(); // 先清空掉vector
		icon2.clear();

		TCHAR filename[80];
		for (int i = 1; i <= 100; i++) 
		{
			_stprintf(filename, _T("1icon%d.png"), i);
			IMAGE im;
			loadimage(&im, filename);
			icon1.push_back(im);
		}
		for (int i = 1; i <= 100; i++)
		{
			_stprintf(filename, _T("2icon%d.png"), i);
			IMAGE im;
			loadimage(&im, filename);
			icon2.push_back(im);
		}
	}
};

numload numloading;//不创建一个实际的下面不能执行。
//void draw()
//{
//	initgraph(WIDTH, HEIGHT);
//	setbkcolor(WHITE);
//	cleardevice();
//	numloading.initialize();//必须要调用之后才会完成对图片的分装。
//	putimage(0, 0, &numloading.icon1[2]);
//	getchar();
//	closegraph();
//}
int Rand(int X, int Y)//生成随机数
{
    int temp;
    if (X > Y)
    {
        temp = X;
        X = Y;
        Y = temp;
    }
    return rand() % (Y - X + 1) + X;

}
void main()
{
	initgraph(WIDTH, HEIGHT,SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	numloading.initialize();//必须要调用之后才会完成对图片的分装。
	setlinecolor(RGB(0,51,113));
	setlinestyle(PS_DASH | PS_JOIN_BEVEL, 1);
	int arr[10][10];
	int i, j;
	int r;
	int temp;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = 10 * i + j + 1;
		}
	}
	for (i = 0; i < 10; i++)//生成随机数
	{
		for (j = 0; j < 10; j++)
		{
			r = Rand(0, 99);
			temp = arr[i][j];
			int i1 = r / 10, j1 = r % 10;
			arr[i][j] = arr[i1][j1];
			arr[i1][j1] = temp;
		}
	}
	int b[100];
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				putimage(60 * j, 60 * i, &numloading.icon2[arr[i][j] - 1]);
				b[arr[i][j] - 1] = i * 10 + j + 1;
				//printf("b[%d]=%d\n", arr[i][j] - 1, i * 10 + j + 1);
			}
		}
		for (i = 1; i < 10; i++)//生成初始网格
		{
			line(i * 60, 0, i * 60, 600);
			line(0, i * 60, 600, i * 60);
		}
		for (int k = 0; k <= 99; k++)
		{
			while (1)
			{
				if (peekmessage(&msg, EM_MOUSE))
				{
					if ((msg.message == WM_LBUTTONDOWN) && (msg.x >= ((b[k] - 1) % 10) * 60) && (msg.x <= ((b[k] - 1) % 10) * 60 + 60)
						&& (msg.y >= ((b[k] - 1) / 10) * 60) && (msg.y <= ((b[k] - 1) / 10) * 60 + 60))
					{

						putimage((b[k] - 1) % 10 * 60, ((b[k] - 1) / 10) * 60, &numloading.icon1[k]);
						TCHAR s[20]; // 定义字符串数组
						_stprintf(s, _T("已得%d分"), k+1); // 将score转换为字符串
						settextstyle(50, 0, _T("Times")); // 设置文字大小、字体
						settextcolor(RGB(0, 51, 113));  // 设置字体颜色
						outtextxy(600, 250, s); // 输出得分文字。其实自动把前面的都给叠走了
						//printf("我被点击了");
						break;
					}
				}
			}
		}
	closegraph();
}