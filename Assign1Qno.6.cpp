#include <iostream>
using namespace std;

int main() {
   int n, i;
   bool Prime = true;

   cout << "Enter a positive integer: ";
   cin >> n;

   for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
         Prime = false;
         break;
      }
   }
   if (Prime)
      cout << n << " is a prime number";
   else
      cout << n << " is not a prime number";

   return 0;
}
