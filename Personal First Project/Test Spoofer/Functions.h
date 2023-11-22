#pragma once
#include <Windows.h>
#include <iostream>
#include <tchar.h>
#include <urlmon.h>
#include <string>
#include <thread>
#include <chrono>
#include <algorithm>
#include <Vector>
#include "enc.h"

void text(const char* text, const char* symbol, int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    printf(("\n  ["));
    SetConsoleTextAttribute(hConsole, color);
    printf(symbol);
    SetConsoleTextAttribute(hConsole, 7);
    printf(("] : "));
    std::cout << ("") << text;
}
void DisplayLoading(const int maxValue, const int AnimationDuration, const char* Type)
{
    const int Duration = AnimationDuration;

    auto startTime = std::chrono::high_resolution_clock::now();
    while (std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now() - startTime).count() < Duration) {

        double progress = static_cast<double>(std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::high_resolution_clock::now() - startTime).count()) / Duration;
        int currentValue = static_cast<int>(progress * maxValue) + 1;

        std::cout << ("\r");

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 7);
        printf(("\r  ["));
        SetConsoleTextAttribute(hConsole, 1);
        printf(("DEBUG"));
        SetConsoleTextAttribute(hConsole, 7);
        printf("] : ");
        std::cout << ("Loading ") << Type << (" ") << std::to_string(currentValue) << ("/") << maxValue << std::flush;

        //Loading_Text((Type + std::to_string(currentValue) + ("/")).c_str() + maxValue);

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    //std::cout << "\r";
}
struct funcs
{
    std::string GetSerialNumber(const char* part, const char* extra = ("serialnumber"), const char* remove = ("SerialNumber")) {

        std::string fullCommand = ("wmic ") + std::string(part) + (" get ") + std::string(extra);

        std::string serialNumber;

        FILE* pipe = _popen(fullCommand.c_str(), ("r"));
        if (pipe) {
            constexpr int bufferSize = 128;
            char buffer[bufferSize];

            while (fgets(buffer, bufferSize, pipe)) {
                serialNumber += buffer;
            }

            _pclose(pipe);

            size_t pos = serialNumber.find(remove);
            if (pos != std::string::npos) {
                serialNumber.erase(pos, strlen(remove));
            }

            serialNumber.erase(0, serialNumber.find_first_not_of((" \t\n\r\f\v")));
            serialNumber.erase(serialNumber.find_last_not_of((" \t\n\r\f\v") + 1));
        }

        return serialNumber;
    }

    std::string GetCommandWithoutLine(const char* command, const char* remove) {

        std::string fullCommand = command;

        std::string serialNumber;

        FILE* pipe = _popen(fullCommand.c_str(), ("r"));
        if (pipe) {
            constexpr int bufferSize = 128;
            char buffer[bufferSize];

            while (fgets(buffer, bufferSize, pipe)) {
                serialNumber += buffer;
            }

            _pclose(pipe);

            size_t pos = serialNumber.find(remove);
            if (pos != std::string::npos) {
                serialNumber.erase(pos, strlen(remove));
            }

            serialNumber.erase(0, serialNumber.find_first_not_of((" \t\n\r\f\v")));
            serialNumber.erase(serialNumber.find_last_not_of((" \t\n\r\f\v") + 1));
        }

        return serialNumber;
    }
}; std::unique_ptr<funcs> Functions = std::make_unique<funcs>();
void debugtext(const char* text)
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);
    printf(("\n  ["));
    SetConsoleTextAttribute(hConsole, 1);
    printf(("DEBUG"));
    SetConsoleTextAttribute(hConsole, 7);
    printf(("] : "));
    std::cout << ("") << text;
}
void Check()
{
    DisplayLoading(8, 3000, ("Modules"));

    debugtext(("Diskdrive1 Number: "));
    std::cout << Functions->GetSerialNumber(("diskdrive"));

    debugtext(("Diskdrive2 Number: "));
    std::cout << Functions->GetSerialNumber(("path win32_physicalmedia"));

    debugtext(("Diskdrive3 Number: "));
    std::cout << Functions->GetSerialNumber(("path win32_diskdrive"));

    debugtext(("Cpu Number: "));
    std::cout << Functions->GetSerialNumber(("cpu"), ("processorid"), ("ProcessorId"));

    debugtext(("Bios Number: "));
    std::cout << Functions->GetSerialNumber(("bios"));

    debugtext(("Baseboard Number: "));
    std::cout << Functions->GetSerialNumber(("baseboard"));

    debugtext(("Last Boot Up Time: "));
    std::cout << Functions->GetSerialNumber(("os"), ("LastBootUpTime"), ("LastBootUpTime"));

    debugtext(("Mac Address: "));
    std::cout << Functions->GetCommandWithoutLine((R"(wmic path Win32_NetworkAdapter where "PNPDeviceID like '%%PCI%%' AND NetConnectionStatus=2 AND AdapterTypeID='0'" get MacAddress)"), ("MACAddress"));
}
void NoScrollBar()
{
    CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;

    // Get console handle and get screen buffer information from that handle.
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &screenBufferInfo);

    // Get rid of the scrollbar by setting the screen buffer size the same as 
    // the console window size.
    COORD new_screen_buffer_size;

    // screenBufferInfo.srWindow allows us to obtain the width and height info 
    // of the visible console in character cells.
    // That visible portion is what we want to set the screen buffer to, so that 
    // no scroll bars are needed to view the entire buffer.
    new_screen_buffer_size.X = screenBufferInfo.srWindow.Right -
        screenBufferInfo.srWindow.Left + 1; // Columns
    new_screen_buffer_size.Y = screenBufferInfo.srWindow.Bottom -
        screenBufferInfo.srWindow.Top + 1; // Rows 

    // Set new buffer size
    SetConsoleScreenBufferSize(hConsole, new_screen_buffer_size);
}
void AntiDebugThread()
{
    while (true) { if (IsDebuggerPresent()) { exit(0); } DebugBreak(); Sleep(1000); }
}