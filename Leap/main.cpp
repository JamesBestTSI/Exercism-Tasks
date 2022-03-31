#include <iostream>
#include <string>

int GetInt(std::string message);
bool isLeapYear(int year);

int main()
{
    int year = GetInt("Enter a year: ");
    bool leapYear = isLeapYear(year);

    if(leapYear)
        std::cout << year << " is a leap year" << std::endl;
    else
        std::cout << year << " is not a leap year" << std::endl;
}

/// <summary>
/// Checks a year value to see if it is a leap year or not
/// </summary>
/// <returns>True if it is a leap year</returns>
bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
            return false;
        return true;
    }
    return false;
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