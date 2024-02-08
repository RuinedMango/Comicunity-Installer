#include <stdio.h>
#include <Windows.h>

int main(int argc, char **argv)
{
	WinExec("wscript scripts/start.vbs", SW_HIDE);
	return 0;
}

