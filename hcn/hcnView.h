
// hcnView.h : interface of the ChcnView class
//

#pragma once
#include"hinh.h"
#include"tron.h"
#include"tgiac.h"

class ChcnView : public CView
{
protected: // create from serialization only
	ChcnView() noexcept;
	DECLARE_DYNCREATE(ChcnView)

// Attributes
public:
	ChcnDoc* GetDocument() const;

// Operations
public:
	hinh hcn1;//be nuoc
	hinh hcn2;//matban
	hinh hcn4;//chan1
	hinh hcn5;//chan2
	hinh hcn6;//chan3
	hinh hcn7;//chan4
	hinh hcn3;//muc nuoc
	tron tron1;//binh tuoi
	tron tron2;//giot nc1
	tron tron3;//giot nc2
	tgiac tgiac1;
	hinh reset;//reset
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~ChcnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in hcnView.cpp
inline ChcnDoc* ChcnView::GetDocument() const
   { return reinterpret_cast<ChcnDoc*>(m_pDocument); }
#endif

