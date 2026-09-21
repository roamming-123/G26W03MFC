
// 2026G26W03WFCView.cpp: CMy2026G26W03WFCView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "2026G26W03WFC.h"
#endif

#include "2026G26W03WFCDoc.h"
#include "2026G26W03WFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2026G26W03WFCView

IMPLEMENT_DYNCREATE(CMy2026G26W03WFCView, CView)

BEGIN_MESSAGE_MAP(CMy2026G26W03WFCView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	END_MESSAGE_MAP()

// CMy2026G26W03WFCView 생성/소멸

CMy2026G26W03WFCView::CMy2026G26W03WFCView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMy2026G26W03WFCView::~CMy2026G26W03WFCView()
{
}

BOOL CMy2026G26W03WFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.


	return CView::PreCreateWindow(cs);
}

// CMy2026G26W03WFCView 그리기

void CMy2026G26W03WFCView::OnDraw(CDC* pDC)
{
	CMy2026G26W03WFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CPoint p = pDoc->GetPoint();
	pDC->Ellipse(p.x - 30, p.y - 30, p.x+30, p.y+30);
}



// CMy2026G26W03WFCView 인쇄

BOOL CMy2026G26W03WFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMy2026G26W03WFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMy2026G26W03WFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMy2026G26W03WFCView 진단

#ifdef _DEBUG
void CMy2026G26W03WFCView::AssertValid() const
{
	CView::AssertValid();
}

void CMy2026G26W03WFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2026G26W03WFCDoc* CMy2026G26W03WFCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2026G26W03WFCDoc)));
	return (CMy2026G26W03WFCDoc*)m_pDocument;
}
#endif //_DEBUG

 
// CMy2026G26W03WFCView 메시지 처리기

void CMy2026G26W03WFCView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	GetDocument()->SetPoint(point);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
