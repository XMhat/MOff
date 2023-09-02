#define WINVER 0x0400
#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINDOWS WINVER
#include <windows.h>

#pragma comment(linker, "/NODEFAULTLIB:LIBC")
#pragma comment(linker, "/NODEFAULTLIB:LIBCMT")
#pragma comment(linker, "/SUBSYSTEM:WINDOWS")

#pragma comment(lib, "KERNEL32.LIB")
#pragma comment(lib, "USER32.LIB")

VOID WinMainCRTStartup(VOID)
{
  SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);

  ExitProcess(0);
}
