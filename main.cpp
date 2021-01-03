#include <windows.h>
#include <bits/stdc++.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
int main(int argc, char* argv[])
{
	HWND hwnd=GetForegroundWindow();
	ShowWindow(hwnd,false);
	RegisterHotKey(NULL, 1, MOD_ALT, 'S');
	MSG msg = { 0 }; 
	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (msg.message == WM_HOTKEY)
		{
			system("slidetoshutdown");
		}
	}
	getchar();
	return 0;
}
