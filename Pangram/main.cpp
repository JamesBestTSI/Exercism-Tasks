#include <iostream>
#include <string>

std::string GetString();

int main(){
    std::string userInput = GetString();

    bool failed = false;

    for (int alphaValue = 'a'; alphaValue <= 'z'; alphaValue++){
        if (!userInput.find((char)alphaValue) && !userInput.find((char)(alphaValue-32)))
            failed = true;
    }

    if (failed)
        std::cout << "String is not a Pangram" << std::endl;
    else
        std::cout << "String IS a Pangram!" << std::endl;
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