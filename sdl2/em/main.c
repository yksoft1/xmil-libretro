/**
 * @file	main.c
 * @brief	���C��
 */

#include "compiler.h"
#include "..\xmil.h"
#include "..\fontmng.h"

/**
 * ���C��
 * @param[in] argc ����
 * @param[in] argv ����
 * @return ���U���g �R�[�h
 */
int main(int argc, char *argv[])
{
#ifdef WIN32
	UINT nLength;
	TCHAR szFont[MAX_PATH];

	nLength = GetWindowsDirectory(szFont, SDL_arraysize(szFont));
	lstrcpy(szFont + nLength, TEXT("\\Fonts\\msgothic.ttc"));
	fontmng_setdeffontname(szFont);
#endif
	return xmil_main(argc, argv);
}
