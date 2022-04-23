#pragma once
#include <windows.h>

class Timer // 改进的延时
{
private:
	LARGE_INTEGER clock;	//large_integer.QuadPart有符号的64位整数。
	LONGLONG lastClock;		
	int frequency;				

public:
	Timer() 
	{
		QueryPerformanceFrequency(&clock);//返回每秒滴答声音的次数
		//高精度时控函数QueryPerformanceFrequency
		//原理：CPU上也有一个计数器，以机器人的clock为单位，可以通过rdtsc读取，而不用中断，因此其精度与系统时间相当。
		//精度：计算机获取硬件支持，精度比较高，可以通过它来判断其它时间函数的精度范围。
		frequency = (int)clock.QuadPart / 1000;//每毫秒滴答声音的次数
		lastClock = 0;
	}

	void Sleep(int ms) 
	{
		unsigned int c = ms * frequency;//
		if (lastClock == 0)
		{
			QueryPerformanceCounter(&clock);
			lastClock = clock.QuadPart;		
		}
		lastClock += c;
		QueryPerformanceCounter(&clock);
		if (clock.QuadPart > lastClock)
			lastClock = clock.QuadPart;
		else
		{
			do
			{
				::Sleep(1);
				QueryPerformanceCounter(&clock);	
			}
			while(clock.QuadPart < lastClock);
		}
	}	
};