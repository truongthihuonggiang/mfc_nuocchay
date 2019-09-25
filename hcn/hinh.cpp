#include "stdafx.h"
#include "hinh.h"

void hinh::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void hinh::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1, y1, x2, y2);
}
hinh::hinh()
{
}


hinh::~hinh()
{
}
