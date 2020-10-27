/*
Write a function that takes an integer as input, and returns the number of bits that are equal to one in the 
binary representation of that number. You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case.
*/

#include <iostream> 
using namespace std;

unsigned int countBits(unsigned long long n)
{
  int binArr[63];
  int i;
  int count = 0;

  for(i = 0; n > 0; i++)
  {
    binArr[i] = n % 2;
    n = n / 2;
  }
  
  for(i = i - 1; i >= 0; i--)
  {
    if(binArr[i] == 1)
      count++;
  }
  
  return count;
}

int main() 
{ 
    int x = 1234;
    cout << countBits(x);
    return 0; 
}