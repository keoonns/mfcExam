// CDlgImage.cpp: 구현 파일
//

#include "pch.h"
#include "gPrj.h"
#include "CDlgImage.h"
#include "afxdialogex.h"


// CDlgImage 대화 상자

IMPLEMENT_DYNAMIC(CDlgImage, CDialogEx)

CDlgImage::CDlgImage(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CDlgImage, pParent)
{

}

CDlgImage::~CDlgImage()
{
}

void CDlgImage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgImage, CDialogEx)
END_MESSAGE_MAP()


// CDlgImage 메시지 처리기
