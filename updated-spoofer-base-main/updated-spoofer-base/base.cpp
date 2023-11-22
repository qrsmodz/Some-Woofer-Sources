
#include <iostream>
#include "./Includes.hpp"
#include "./Driver.hpp"
#include "./Auth.hpp"
std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
using namespace KeyAuth;
std::string name = "Swoofer"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "HaXDnN0rY4"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "9200f8ae754a3e14e74538268ab3265339097cfa679f4508080373fc46ce806f"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "1.0"; // leave alone unless you've changed version on website
std::string url = "https://keyauth.win/api/1.2/"; // change if you're self-hosting
api KeyAuthApp(name, ownerid, secret, version, url);
std::string username;
std::string password;
std::string key;
int main()
{
    ChangingTitle = true; // Changing Console Title
    std::thread(Changing).detach();
    std::cout << dye::light_aqua("\n\n\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Welcome to VoidWare Paid Spoofer\n").decrypt(), 20);
    LI_FN(Sleep)(1500);
    std::cout << dye::light_aqua("  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Connecting to KeyAuth. . .\n").decrypt(), 20);
    LI_FN(Sleep)(1200);
    LI_FN(system)(E("cls"));
    std::cout << dye::light_aqua("\n\n\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    cout << ("Welcome to VoidWare Paid Spoofer");
    std::cout << dye::light_aqua("\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Connected to KeyAuth!\n").decrypt(), 20);
    LI_FN(Sleep)(1200);
    license:
    LI_FN(system)(E("cls"));
    std::cout << dye::light_aqua("\n\n\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    cout << ("Welcome to VoidWare Free Spoofer");
    std::cout << dye::light_aqua("\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    cout << ("Connected to KeyAuth!");
    std::cout << dye::light_aqua("\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Enter License -> ").decrypt(), 20);
    KeyAuthApp.init();
    std::cin >> key;
    KeyAuthApp.license(key);
    if (!KeyAuthApp.data.success)
    {
        std::cout << dye::light_aqua("\n  (");
        std::cout << dye::white(">");
        std::cout << dye::light_aqua(") ");
        slow_print(E("Invalid License, Please Enter A Valid License\n").decrypt(), 20);
        LI_FN(Sleep)(1500);
        goto license;
    }
    std::cout << dye::light_aqua("\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Valid License, Thanks For Using Updated Spoofer Base").decrypt(), 20);
    LI_FN(Sleep)(1500);
    LI_FN(system)(E("cls"));
    std::cout << dye::light_aqua("\n\n\n  (");
    std::cout << dye::white(">");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Press ANY Key to Spoof your System").decrypt(), 20);
    LI_FN(system)(E("pause >nul"));
    LI_FN(Beep)(500, 300);
    Drv(Detected);
    LI_FN(system)(E("cls"));
    std::cout << dye::light_aqua("\n\n\n  (");
    std::cout << dye::white("!");
    std::cout << dye::light_aqua(") ");
    slow_print(E("Successfully Spoofed Your System!").decrypt(), 20);
    LI_FN(Sleep)(2500);

}
