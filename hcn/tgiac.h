#pragma once
#include "hinh.h"
class tgiac
{
private:
		int x1, y1, x2, y2,x3,y3;
public:
	void thietlap(int mx1, int my1, int mx2, int my2,int mx3,int my3);
	void ve(CClientDC *pDC);
	tgiac();
	~tgiac();
};

