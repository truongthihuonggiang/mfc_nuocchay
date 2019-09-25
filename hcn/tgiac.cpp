#include "stdafx.h"
#include "tgiac.h"

void tgiac::thietlap(int mx1, int my1, int mx2, int my2, int mx3, int my3)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
	x3 = mx3;
	y3 = my3;
}
void tgiac::ve(CClientDC *pDC)
{
	//pDC->Polygon(3, x1, y1, x2, y2, x3, y3,x1,y1);

}
tgiac::tgiac()
{
}


tgiac::~tgiac()
{
}
