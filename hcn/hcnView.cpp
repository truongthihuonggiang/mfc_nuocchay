
// hcnView.cpp : implementation of the ChcnView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "hcn.h"
#endif

#include "hcnDoc.h"
#include "hcnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ChcnView

IMPLEMENT_DYNCREATE(ChcnView, CView)

BEGIN_MESSAGE_MAP(ChcnView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// ChcnView construction/destruction

ChcnView::ChcnView() noexcept
{
	// TODO: add construction code here
	hcn1.thietlap(400,300,600,400);
	tron1.thietlap(560,50, 510,100);
	hcn3.thietlap(400, 395, 600, 400);//ncdang
	tron2.thietlap(550, 140, 540, 120);//;giotnc1;
	tron3.thietlap(540, 160, 530, 140);//giotnc2
	//ban
	hcn2.thietlap(350, 350, 630, 420);
	hcn4.thietlap(350,420,360,450);
	hcn5.thietlap(360,420,370, 440);
	hcn6.thietlap(630, 350, 640, 440);
	hcn7.thietlap(620, 420, 630, 450);
	//reset
	reset.thietlap(40, 40, 100, 80);
}

ChcnView::~ChcnView()
{
}

BOOL ChcnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ChcnView drawing

void ChcnView::OnDraw(CDC* /*pDC*/)
{
	ChcnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	CBrush *mau;
	CPen *pen;
	//hinhtron
	CPen *pen1;
	pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pen = pDC.SelectObject(pen1);
	CBrush *mau1;
	mau1 = new CBrush(RGB(0, 0, 225));
	mau = pDC.SelectObject(mau1);
	tron1.ve(&pDC);
	//reset.ve(&pDC);
	//nuocdang
	CPen *pen4;
	pen4 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pen = pDC.SelectObject(pen4);
	CBrush *mau4;
	mau4 = new CBrush(RGB(255, 255, 255));
	mau = pDC.SelectObject(mau4);
	hcn3.ve(&pDC);
	//matban

	CPen *pen3;
	pen3 = new CPen(PS_SOLID, 0, RGB(0, 0, 0));
	pen = pDC.SelectObject(pen3);
	CBrush *mau3;
	mau3 = new CBrush(RGB(192, 192, 192));
	mau = pDC.SelectObject(mau3);
	hcn2.ve(&pDC);
	//chanban
	CPen *pen5;
	pen5 = new CPen(PS_SOLID, 0, RGB(0, 0, 0));
	pen = pDC.SelectObject(pen5);
	CBrush *mau5;
	mau5 = new CBrush(RGB(0, 255, 255));
	mau = pDC.SelectObject(mau5);
	hcn4.ve(&pDC);
	hcn5.ve(&pDC);
	hcn6.ve(&pDC);
	hcn7.ve(&pDC);
	//dungnuoc
	CPen *pen6;
	pen6 = new CPen(PS_SOLID, 0, RGB(0, 0, 0));
	pen = pDC.SelectObject(pen6);
	CBrush *mau6;
	mau6 = new CBrush(RGB(255, 255, 255));
	mau = pDC.SelectObject(mau6);
	hcn1.ve(&pDC);
	reset.ve(&pDC);
	CString s;
	s = "Reset";
	pDC.TextOutW(50, 50, s);
	// TODO: add draw code for native data here
}	


// ChcnView printing

BOOL ChcnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void ChcnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void ChcnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// ChcnView diagnostics

#ifdef _DEBUG
void ChcnView::AssertValid() const
{
	CView::AssertValid();
}

void ChcnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

ChcnDoc* ChcnView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(ChcnDoc)));
	return (ChcnDoc*)m_pDocument;
}
#endif //_DEBUG


// ChcnView message handlers


void ChcnView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CView::OnLButtonDown(nFlags, point);
	ChcnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	CPen *pen;
	CBrush *mau;

	//tron1.thietlap(560, 50, 510, 100);
	int x1 = 400, x2 = 600, y1 = 395, y2 = 400;
	int nx1 = 550, ny1 = 140, nx2 = 540, ny2 = 120;
	int nxx1 = 540, nyy1 = 160, nxx2 = 530, nyy2 = 140;
	if (point.x < 560 && point.x>510 && point.y < 100 && point.y>50)
	{
		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 255));
		pen = pDC.SelectObject(pen1);
		CBrush *mau1;
		mau1 = new CBrush(RGB(0, 0, 255));
		mau = pDC.SelectObject(mau1);
		tron2.thietlap(550, 140, 540, 120);
		//int nx1 = 550, ny1 = 140, nx2 = 540, ny2 = 120;
		tron3.thietlap(540, 160, 530, 140);
	
		for (int j = 0; j < 6; j++)
		{
			//Sleep(300);
			tron2.ve(&pDC);
			Sleep(300);
			tron3.ve(&pDC);
			ny1 = ny1 + 40;
			ny2 = ny2 + 40;
			tron2.thietlap(nx1, ny1, nx2, ny2);
			Sleep(300);
			tron2.ve(&pDC);
			nyy1 = nyy1 + 40;
			nyy2 = nyy2 + 40;
			tron3.thietlap(nxx1, nyy1, nxx2, nyy2);
			Sleep(300);
			tron3.ve(&pDC);
		}
		//hcn3.thietlap(400, 295, 600, 400);

		int x1 = 400, x2 = 600, y1 = 395, y2 = 400;
		for (int i = 0; i < 15; i++)
		{
			Sleep(300);
			hcn3.ve(&pDC);
			y1 = y1 - 2;
			y2 = y2 - 2;
			CPen *pen1;
			pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 255));
			pen = pDC.SelectObject(pen1);
			CBrush *mau1;
			mau1 = new CBrush(RGB(0, 0, 255));
			mau = pDC.SelectObject(mau1);
			hcn3.thietlap(x1, y1, x2, y2);
			hcn3.ve(&pDC);
			Sleep(200);
		}


	}
	//reset.thietlap(40, 40, 100, 80);
	if (point.x > 40 && point.x < 100 && point.y>40 && point.y < 80)
	{
		hcn1.ve(&pDC);
		CPen *pen10;
		pen10 = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		pen = pDC.SelectObject(pen10);
		CBrush *mau10;
		mau10 = new CBrush(RGB(255, 255, 255));
		mau = pDC.SelectObject(mau10);
		tron2.thietlap(550, 140, 540, 120);
		tron2.ve(&pDC);
		tron3.thietlap(540, 160, 530, 140);
		tron3.ve(&pDC);
		hcn3.thietlap(400, 295, 600, 400);
		hcn3.ve(&pDC);
		
		for (int j = 0; j < 6; j++)
		{
			//Sleep(300);
			
			//Sleep(300);
			tron3.ve(&pDC);
			ny1 = ny1 + 40;
			ny2 = ny2 + 40;
			tron2.thietlap(nx1, ny1, nx2, ny2);
			//Sleep(300);
			tron2.ve(&pDC);
			nyy1 = nyy1 + 40;
			nyy2 = nyy2 + 40;
			tron3.thietlap(nxx1, nyy1, nxx2, nyy2);
			//Sleep(300);
			tron3.ve(&pDC);
		}
		CPen *pen60;
		pen60 = new CPen(PS_SOLID, 0, RGB(0, 0, 0));
		pen = pDC.SelectObject(pen60);
		CBrush *mau60;
		mau60 = new CBrush(RGB(255, 255, 255));
		mau = pDC.SelectObject(mau60);
		hcn1.ve(&pDC);
		
		int x1 = 400, x2 = 600, y1 = 400, y2 = 400;
		for (int i = 0; i < 16; i++)
		{
			//Sleep(300);
			y1 = y1 - 2;
			y2 = y2 - 2;
			CPen *pen1;
			pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 255));
			pen = pDC.SelectObject(pen1);
			CBrush *mau1;
			mau1 = new CBrush(RGB(0, 0, 255));
			mau = pDC.SelectObject(mau1);
			hcn3.thietlap(x1, y1, x2, y2);
			hcn3.ve(&pDC);
			//Sleep(200);
		}
	}
	hcn3.thietlap(400, 395, 600, 400);
	
}
