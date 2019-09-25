#include "stdafx.h"
#include "tron.h"

void tron::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void tron::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1, y1, x2, y2);
}
tron::tron()
{
}


tron::~tron()
{
}
