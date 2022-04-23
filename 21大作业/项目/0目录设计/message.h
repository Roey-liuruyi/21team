#define _CRT_SECURE_NO_WARNINGS 1
#include "music.h"
ExMessage msg;
void is_mouse()
{
	while (true)//这里的作用是？
	{
		if (peekmessage(&msg, EM_MOUSE))//如果有鼠标消息的话返回值为真
		{
			switch (msg.message)
			{
			case WM_LBUTTONDOWN:
				if (msg.x >= 720 && msg.x <= 800 && msg.y >= 520 && msg.y <= 600)
				{

					BGM();
				}
				if (msg.x >= 720 && msg.x <= 800 && msg.y >= 440 && msg.y <= 520)
				{
					closeBGM();
				}
				break;
			default:
				break;
			}
		}
	}

}
