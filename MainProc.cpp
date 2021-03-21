#include <windows.h>
#include <stdio.h>
#include "Headers/ReDetect.h"
#include "Headers/ScreenInfos.h"
int main () {
	while(1)
	{
		FreeConsole();
		BitBlt(hdc, 0, 0, X, Y, hdc, 0, 0, NOTSRCCOPY);
		Sleep(5000);
	}
}
