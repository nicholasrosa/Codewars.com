/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function 
that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. 
Ignore letter case.
*/

#include <iostream> 
#include <string>
using namespace std;

bool is_isogram(std::string str)
{
    int length = str.length();

    for(int i = 0; i < length; i++)
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    sort(str.begin(), str.end());

    for(int i = 0; i < length; i++)
    {
        if(str[i] == str[i + 1])
            return false;
    }

    return true;
}

int main()
{
    cout << is_isogram("Dermatoglyphics");
    cout << is_isogram("aba");
    cout << is_isogram("moOse");

    return 0;
} 