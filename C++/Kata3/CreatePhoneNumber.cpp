/*
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form 
of a phone number.

Example:
createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) => returns "(123) 456-7890"

The returned format must be correct in order to complete this challenge. 
Don't forget the space after the closing parentheses!
*/

#include <iostream> 
#include <string>
using namespace std;

std::string createPhoneNumber(const int arr [10])
{
  string str = "";

  for(int i = 0; i < 10; i++)
  {
    if(i == 0)
      str += '(';
    else if(i == 3)
      str += ") ";
    else if(i == 6)
      str += '-';

    str += std::to_string(arr[i]);
  }

  return str;
}

int main()
{
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  cout << createPhoneNumber(a) << endl;

  std::cout << "\nPress ENTER to continue... " << flush;
  std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );

  return 0;
} 