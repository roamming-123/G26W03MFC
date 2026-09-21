
// 2026G26W03WFCView.h: CMy2026G26W03WFCView 클래스의 인터페이스
//

#pragma once


class CMy2026G26W03WFCView : public CView
{
protected: // serialization에서만 만들어집니다.
	CMy2026G26W03WFCView() noexcept;
	DECLARE_DYNCREATE(CMy2026G26W03WFCView)

// 특성입니다.
public:
	CMy2026G26W03WFCDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMy2026G26W03WFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2026G26W03WFCView.cpp의 디버그 버전
inline CMy2026G26W03WFCDoc* CMy2026G26W03WFCView::GetDocument() const
   { return reinterpret_cast<CMy2026G26W03WFCDoc*>(m_pDocument); }
#endif

