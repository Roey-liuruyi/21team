#pragma once
#include <windows.h>

class Timer // �Ľ�����ʱ
{
private:
	LARGE_INTEGER clock;	//large_integer.QuadPart�з��ŵ�64λ������
	LONGLONG lastClock;		
	int frequency;				

public:
	Timer() 
	{
		QueryPerformanceFrequency(&clock);//����ÿ��δ������Ĵ���
		//�߾���ʱ�غ���QueryPerformanceFrequency
		//ԭ��CPU��Ҳ��һ�����������Ի����˵�clockΪ��λ������ͨ��rdtsc��ȡ���������жϣ�����侫����ϵͳʱ���൱��
		//���ȣ��������ȡӲ��֧�֣����ȱȽϸߣ�����ͨ�������ж�����ʱ�亯���ľ��ȷ�Χ��
		frequency = (int)clock.QuadPart / 1000;//ÿ����δ������Ĵ���
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