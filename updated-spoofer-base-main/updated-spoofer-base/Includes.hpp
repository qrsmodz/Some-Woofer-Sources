#include <thread>
#include <random>
#include <string>
#include <Windows.h>
#include <string>
#include <winternl.h>
#include <thread>
#include <ios>
#include <limits>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
#include <cstdint>
#include <winternl.h>
#include <WinInet.h>
#include <Windows.h>
#include <winbase.h>
#include <tchar.h>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <Windows.h>
#include <iostream>
#include <process.h>
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <windows.h>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <gdiplus.h>
#include <string>
#include <fstream>
#include <WinInet.h>
#include <random>
#include <tlhelp32.h>
#include <conio.h>
#include <comdef.h>
#include <tchar.h>
#include <mmsystem.h>
#include <CommCtrl.h>
#include <fileapi.h>
#include <iomanip> 
#include <debugapi.h>
#include <time.h>
#include <stdlib.h>
#include <Shlwapi.h>
#include "Display.hpp"
#include "./Encryption.hpp"
#include "./Protection.hpp"
                                                               // credits to ud man for some of this //
                                                               //            Hijacked#5697           //
using namespace std;
struct slowprint
{
    std::string data;
    long int delay;
};

void slow_print(const std::string& str, int delay_time)
{
    for (size_t i = 0; i != str.size(); ++i)
    {
        std::cout << str[i];
        Sleep(delay_time);
    }
}

std::ostream& operator<<(std::ostream& out, const slowprint& s)
{
    for (const auto& c : s.data) {
        out << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
    }
    return out;
}

using namespace std;
HANDLE resource = LI_FN(GetStdHandle)(STD_OUTPUT_HANDLE);
bool TransparentConsole = false;
const char* TransparentWindow()
{
    HWND hwnd = NULL;
    HWND console = LI_FN(GetConsoleWindow)();
    RECT ConsoleRect;
    LI_FN(GetWindowRect)(console, &ConsoleRect);
    HANDLE hOut = LI_FN(GetStdHandle)(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO scrBufferInfo;
    LI_FN(GetConsoleScreenBufferInfo)(hOut, &scrBufferInfo);
    short winWidth = scrBufferInfo.srWindow.Right - scrBufferInfo.srWindow.Left + 1;
    short winHeight = scrBufferInfo.srWindow.Bottom - scrBufferInfo.srWindow.Top + 1;
    short scrBufferWidth = scrBufferInfo.dwSize.X;
    short scrBufferHeight = scrBufferInfo.dwSize.Y;
    COORD newSize;
    newSize.X = scrBufferWidth;
    newSize.Y = winHeight;
    HWND consoleWindow = GetConsoleWindow();
    LI_FN(SetWindowLongA)(consoleWindow, GWL_STYLE, LI_FN(GetWindowLongA)(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
    SetLayeredWindowAttributes(consoleWindow, 0, (255 * 80) / 100, LWA_ALPHA);
    int Status = SetConsoleScreenBufferSize(hOut, newSize);
    SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    HANDLE hpStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
    LI_FN(SetConsoleTextAttribute)(c, 15);
    return "";
}
void window()
{
    if (TransparentConsole == true)
    {
        TransparentWindow();
    }
}
bool ChangingTitle = true;
string random_string()
{
    string str = ("QWERTYUIOPASDFGHJKLZXCVBNM");
    string newstr;
    int pos;
    while (newstr.size() != 15)
    {
        pos = ((rand() % (str.size() + 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr + "";
}
void notitlechange()
{
    SetConsoleTitleA("  VoidWare   |  C++ Spoofer Base");
}
void Changing()
{
    while (ChangingTitle == true)
    {
        std::string consoleTitle = (std::string)E("  VoidWare  |  ") + random_string();
        LI_FN(SetConsoleTitleA)(consoleTitle.c_str());
    }
}