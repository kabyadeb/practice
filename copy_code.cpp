#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers; // vector to store numbers from the file
  int input; // variable to store user input
  
  // Open the file for reading
  ifstream file("/home/cse29/Documents/basa.txt");

  // Read numbers from the file into the vector
  while (file >> input) {
    numbers.push_back(input);
  }

  // Close the file
  file.close();

  // Take input from the user
  cout << "Enter multiple integers, separated by spaces, and press enter when done: ";
  while (cin >> input) {
    // Check if the input is in the numbers vector
    for (int number : numbers) {
      if (number == input) {
        cout << "Matched: " << input << endl;
        break; // break out of the loop since the number has been found
      }
    }
  }

  return 0;
}
