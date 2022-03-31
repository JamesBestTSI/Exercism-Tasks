#include <iostream>
#include <string>

int GetInt(std::string message);
void PrintPlanetYears(int years);

int main()
{
    int seconds = GetInt("Enter an amount of seconds: ");
    long double years = seconds / 31557600;
    PrintPlanetYears(years);
}


void PrintPlanetYears(int years)
{
    long double mercuryYears = years / 0.240846;
    long double venusYears = years / 0.061519726;
    long double earthYears = years;
    long double marsYears = years / 1.8808158;
    long double jupiterYears = years / 11.862615;
    long double saturnYears = years / 29.447498;
    long double uranusYears = years / 84.016846;
    long double neptuneYears = years / 164.79132;

    std::cout << mercuryYears << " years old if born on Mercury." << std::endl;
    std::cout << venusYears << " years old if born on Venus." << std::endl;
    std::cout << earthYears << " years old if born on Earth." << std::endl;
    std::cout << marsYears << " years old if born on Mars." << std::endl;
    std::cout << jupiterYears << " years old if born on Jupiter." << std::endl;
    std::cout << saturnYears << " years old if born on Saturn." << std::endl;
    std::cout << uranusYears << " years old if born on Uranus." << std::endl;
    std::cout << neptuneYears << " years old if born on Neptune." << std::endl;
}

/// <summary>
/// Gets a number from the user.
///     Reads the data from the console,
///     Checks that it is a actual valid number,
///     Then returns that value.
/// </summary>
/// <returns>Number entered by user</returns>
int GetInt(std::string message)
{
    int input = 0;
    std::string consoleInput;
    while (true)
    {
        try
        {
            std::cout << message << std::endl;
            std::cin >> consoleInput;
            std::cin.ignore();
            input = std::stoi(consoleInput);
            return input;
        }
        catch (...)
        {
            system("cls");
            std::cout << "Thats not a number!" << std::endl;
        }
    }
}