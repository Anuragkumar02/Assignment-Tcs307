#include <iostream>
using namespace std;

int main()
{
     int n, number, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> number;

     n = number;

     do
     {
         digit = number % 10;
         rev = (rev * 10) + digit;
         number = number / 10;
     } while (number != 0);

     cout << " The reverse of the number is" << rev << endl;

     if (number == rev)
         cout << " The number is palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
