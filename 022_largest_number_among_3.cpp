//Implement a program that finds the largest among three numbers using nested if-else statements.

#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;

    // Input: Get three numbers from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Determine the largest number using nested if-else statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;
}
