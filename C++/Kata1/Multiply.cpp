/*
This code does not execute properly. Try to figure out why:

int multiply(int a, int b)
{
    a * b;
}
*/

#include <iostream> 
using namespace std;

int multiply(int a, int b)
{
    int x = a * b;
    return x;
}

int main()
{
    int x = 20;
    int y = 5;
    cout << multiply(x, y) << endl;

    std::cout << "\nPress ENTER to continue... " << flush;
    std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );

    return 0;
}