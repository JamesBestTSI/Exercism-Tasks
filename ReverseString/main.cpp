#include <iostream>
#include <string>

std::string GetString();
void ReverseString(std::string input);

int main()
{
    std::string userInput = GetString();
    ReverseString(userInput);
}

/// <summary>
/// Gets some string data from the user.
/// </summary>
/// <returns>The string they entered</returns>
std::string GetString()
{
    std::cout << "Enter Text" << std::endl;
    std::string consoleInput;
    std::getline(std::cin, consoleInput);
    return consoleInput;
}

void ReverseString(std::string input){
    int length = input.length();
    for (int index = length - 1; index >= 0;index--){
        std::cout << input[index];
    }
}