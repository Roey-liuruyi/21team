#define _CRT_SECURE_NO_WARNINGS 1
#include "music.h"
ExMessage msg;
void is_mouse()
{
	while (true)//����������ǣ�
	{
		if (peekmessage(&msg, EM_MOUSE))//����������Ϣ�Ļ�����ֵΪ��
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
