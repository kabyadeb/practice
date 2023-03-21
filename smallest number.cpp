#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3, smallest;

   cout << "Enter three numbers: ";
   cin >> num1 >> num2 >> num3;

   // Find the smallest number
   smallest = num1;
   if (num2 < smallest) {
      smallest = num2;
   }
   if (num3 < smallest) {
      smallest = num3;
   }

   // Determine if the smallest number is even or odd
   if (smallest % 2 == 0) {
      cout << smallest << " is the smallest number and it is even.\n";
   } else {
      cout << smallest << " is the smallest number and it is odd.\n";
   }

   return 0;
}
