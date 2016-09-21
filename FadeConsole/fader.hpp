#include <Windows.h>

inline BOOL WindowTransparency(HWND hwnd, BYTE bAlpha)
{
	SetWindowLong(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
	SetLayeredWindowAttributes(hwnd, RGB(255, 255, 255), bAlpha, 2);
	return true;
}

inline VOID SetTransparency(int transparency)
{
	HWND consoleWnd = GetConsoleWindow();			  // Get the handle
	WindowTransparency(consoleWnd, transparency);	  // Set the transparency
}