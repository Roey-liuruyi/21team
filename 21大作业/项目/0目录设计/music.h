#pragma once
#include"roey.h"
#pragma comment(lib,"Winmm.lib")
void playmusic()
{

}
void BGM()
{
	//mciSendString(_T("open ./pb.mp3"), 0, 0, 0);
	//mciSendString(_T("play ./pb.mp3"), 0, 0, 0);
	mciSendString(_T("open pb.mp3 alias bkmusic"), NULL, 0, NULL);//打开背景音乐
	mciSendString(_T("play bkmusic repeat"), NULL, 0, NULL);  // 循环播放
}
void closeBGM()
{
	mciSendString("close  bkmusic ", NULL, 0, NULL);
}