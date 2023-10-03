/*
This code creates the following pattern:

    1
   121
  12321
 1234321
123454321
*/

#include "iostream"
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i-1 ; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}





