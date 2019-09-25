#pragma once
#include "hinh.h"
class tron 
{
private:
	int x1, y1, x2, y2;
public:
	void thietlap(int mx1, int my1, int mx2, int my2);
	void ve(CClientDC *pDC);
	tron();
	~tron();
};

