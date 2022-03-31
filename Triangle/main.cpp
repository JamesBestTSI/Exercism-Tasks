#include <iostream>
#include <string>
#include <cmath>

int GetInt(std::string message);
long double GetLengthOfVectors(int x1, int y1, int x2, int y2);

int main()
{
    int points[3][2];
    points[0][0] = GetInt("Enter an X co-ord of Point-1: ");
    points[0][1] = GetInt("Enter an Y co-ord of Point-1: ");

    points[1][0] = GetInt("Enter an X co-ord of Point-2: ");
    points[1][1] = GetInt("Enter an Y co-ord of Point-2: ");

    points[2][0] = GetInt("Enter an X co-ord of Point-3: ");
    points[2][1] = GetInt("Enter an Y co-ord of Point-3: ");

    std::cout << "Triangle is made up of points: \n"
              << "(" << points[0][0] << "," << points[0][1] << ")\n"
              << "(" << points[1][0] << "," << points[1][1] << ")\n"
              << "(" << points[2][0] << "," << points[2][1] << ")" << std::endl;

    long double side1to2 = GetLengthOfVectors(points[0][0], points[0][1], points[1][0], points[1][1]);
    long double side2to3 = GetLengthOfVectors(points[1][0], points[1][1], points[2][0], points[2][1]);
    long double side3to1 = GetLengthOfVectors(points[2][0], points[2][1], points[0][0], points[0][1]);

    if (side1to2 == side2to3 == side3to1){
        std::cout << "Triangle is equilateral" << std::endl;
    }
    else if (side1to2==side2to3 || side1to2 == side3to1 || side2to3==side3to1){
        std::cout << "Triangle is isosceles" << std::endl;
    }
    else{
        std::cout << "Triangle is scalene " << std::endl;
    }
}

long double GetLengthOfVectors(int x1, int y1, int x2, int y2)
{
    int x = 0;
    int y = 0;
    if (x1 > x2)
        x = x1 - x2;
    else
        x = x2 - x1;

    if (y1 > y2)
        y = y1 - y2;
    else
        y = y2 - y1;

    long double length = sqrt((x*x) + (y*y));
    return length;
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