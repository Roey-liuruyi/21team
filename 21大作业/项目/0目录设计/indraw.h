#pragma once
#include "roey.h"
#include "message.h"
#define  WIDTH 800  
#define  HEIGHT 600

void vkstar()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(WHITE);
	cleardevice();
	////->����Ϳɫ
	//setlinestyle(PS_DASH | PS_ENDCAP_FLAT, 3);
	//setlinecolor(RGB(18, 117, 71));
	//setfillcolor(RGB(18, 117, 71));
	//solidrectangle(0, 0, 160, 600);

	//setlinecolor(RGB(109, 224, 180));
	//setfillcolor(RGB(109, 224, 180));
	//solidrectangle(160, 0, 320, 600);

	//setlinecolor(RGB(36, 240, 145));
	//setfillcolor(RGB(36, 240, 145));
	//solidrectangle(320, 0, 480, 600);

	//setlinecolor(RGB(50, 112, 83));
	//setfillcolor(RGB(50, 112, 83));
	//solidrectangle(480, 0, 640, 600);

	//setlinecolor(RGB(28, 189, 114));
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(640, 0, 800, 600);
	////����Ϳɫ<��
	////����Ϳɫ��>
	//setlinecolor(RGB(28, 189, 114));//0��0
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(140, 100, 660, 200);

	//setlinecolor(RGB(28, 189, 114));//1��1
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(140, 200, 400, 300);

	//setlinecolor(RGB(28, 189, 114));//1��2
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(400, 200, 660, 300);

	//setlinecolor(RGB(28, 189, 114));//2��1
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(140, 300, 400,400 );

	//setlinecolor(RGB(28, 189, 114));//2��2
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(400, 300, 660, 400);

	//setlinecolor(RGB(28, 189, 114));//3.1
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(140, 400, 400, 500);

	//setlinecolor(RGB(28, 189, 114));//3.2
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(400, 300, 660, 400);

	//setlinecolor(RGB(28, 189, 114));//4.1
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(140, 500, 660, 600);

	//setlinecolor(RGB(28, 189, 114));//4.2
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(400, 500, 800, 600);
	////<-����Ϳɫ
 //   
	////��������
	//setlinecolor(RGB(28, 189, 114));
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(0, 0, 100, 80);
	////BGM
	//setlinecolor(RGB(28, 189, 114));
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(750, 500, 800, 750);
	////BGM+alarm
	//setlinecolor(RGB(28, 189, 114));
	//setfillcolor(RGB(28, 189, 114));
	//solidrectangle(750, 550, 800, 600);
}
class Menuimages  //һϵ��״̬�Ĳ˵�״̬չʾ
{
public:
	vector <IMAGE> menubk1; //���������
	vector <IMAGE> menubk2;//��������
	vector <IMAGE> menubk3;//ȫ�־�����
	IMAGE im_show;
	void initialize() // ��ʼ��
	{
		menubk1.clear(); // ����յ�vector
		menubk2.clear();
		menubk3.clear();

		TCHAR filename[80];
		for (int i = 0; i <= 9; i++) // ����menu1ͼƬ������ӵ�menubk1��
		{
			_stprintf(filename, _T("menu1%d.jpg"), i);
			IMAGE im;
			loadimage(&im, filename);
			menubk1.push_back(im);
		}
		for (int i = 0; i <= 9; i++) // ����menu2ͼƬ������ӵ�menubk2��
		{
			_stprintf(filename, _T("menu2%d.jpg"), i);
			IMAGE im;
			loadimage(&im, filename);
			menubk1.push_back(im);
		}
		for (int i = 0; i <= 9; i++) // ����menu3ͼƬ������ӵ�menubk3��
		{
			_stprintf(filename, _T("menu3%d.jpg"), i);
			IMAGE im;
			loadimage(&im, filename);
			menubk1.push_back(im);
		}
	}
};

Menuimages menuimages;//������һ��ʵ�ʵ����治��ִ�С�
void draw()
{
	vkstar();
	menuimages.initialize();//����Ҫ����֮��Ż���ɶ�ͼƬ�ķ�װ��
	putimage(0, 0, &menuimages.menubk1[2]);
	is_mouse();
	getchar();
	closegraph();
}