#include "stdafx.h"

float function(float num)
{
	return num * cbrt(num - 1);
}

void buildTable(float start, float end, float step, float& Ymax, ListBox^ listTable)
{
	int loopCount;
	loopCount = floor((end - start) / step) + 1; // ���������� ��������
	float x, y;
	Ymax = function(start);

	listTable->Items->Clear();
	for (int i = 1; i <= loopCount; i += 1)
	{
		x = start + (i - 1) * step;
		y = function(x);
		Ymax = Ymax < y ? y : Ymax;
		String^ row = String::Format("{0,6:F2}{1,15:F7}", x, y);
		listTable->Items->Add(row);
	}
}