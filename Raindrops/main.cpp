#include <iostream>
#include <string>
#include <vector>

int GetInt(std::string message);

int main()
{
    int userInput = GetInt("Enter a number:");
    std::string userOutput = "";

    if (userInput % 3 == 0)
        userOutput += "Pling";
    if (userInput % 5 == 0)
        userOutput += "Plang";
    if (userInput % 7 == 0)
        userOutput += "Plong";

    if (userInput%3 !=0 &&userInput%5 !=0 &&userInput%7 !=0)
        userOutput = std::to_string(userInput);
    
    std::cout << userOutput << std::endl;
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