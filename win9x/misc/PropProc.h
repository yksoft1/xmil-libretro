/**
 * @file	PropProc.h
 * @brief	プロパティ シート クラスの宣言およびインターフェイスの定義をします
 */

#pragma once

#include "DlgProc.h"

/**
 * @brief プロパティ シート ページ
 */
class CPropPageProc : public CDlgProc
{
public:
	PROPSHEETPAGE m_psp;			//!< プロパティ シート ページ構造体

public:
	CPropPageProc(UINT nIDTemplate, UINT nIDCaption = 0);
	CPropPageProc(LPCTSTR lpszTemplateName, UINT nIDCaption = 0);
	virtual ~CPropPageProc();
	void Construct(UINT nIDTemplate, UINT nIDCaption = 0);
	void Construct(LPCTSTR lpszTemplateName, UINT nIDCaption = 0);

protected:
	BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	virtual BOOL OnApply();
	virtual void OnReset();
	virtual void OnOK();
	virtual void OnCancel();

private:
	static UINT CALLBACK PropPageCallback(HWND hWnd, UINT message, LPPROPSHEETPAGE pPropPage);
};
