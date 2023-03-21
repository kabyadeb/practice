#include <iostream>
using namespace std;

int main() {
    int age1, age2, age3;

    cout << "Enter age of person 1: ";
    cin >> age1;
    cout << "Enter age of person 2: ";
    cin >> age2;
    cout << "Enter age of person 3: ";
    cin >> age3;

    int oldest, youngest;

    if (age1 >= age2 && age1 >= age3) {
        oldest = age1;
    } else if (age2 >= age1 && age2 >= age3) {
        oldest = age2;
    } else {
        oldest = age3;
    }

    if (age1 <= age2 && age1 <= age3) {
        youngest = age1;
    } else if (age2 <= age1 && age2 <= age3) {
        youngest = age2;
    } else {
        youngest = age3;
    }

    cout << "The oldest person is " << oldest << " years old." << endl;
    cout << "The youngest person is " << youngest << " years old." << endl;

    return 0;
}
