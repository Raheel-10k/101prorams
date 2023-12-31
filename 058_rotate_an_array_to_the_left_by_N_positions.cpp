//Implement a program to rotate an array to the left by N positions.

#include <iostream>
using namespace std;

void rotateArr(int arr[], int size, int n) {
    int tempArr[n];

    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }

    for (int j = n; j < size; j++) {
        arr[j - n] = arr[j];
    }

    for (int k = 0; k < n; k++) {
        arr[size - n + k] = tempArr[k];
    }
}

int main() {
    int arrSize, num;

    cout << endl << "Enter the length of the array: ";
    cin >> arrSize;

    int arr[arrSize];

    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << "Enter the " << i+1 << "th element of array: ";
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate left by: ";
    cin >> num;


    if (num >= 0 && num < arrSize) {
        rotateArr(arr, arrSize, num);

        cout << "Array after rotating left by " << num << " positions: [ ";
        for (int i = 0; i < arrSize; ++i) {
            if (i < arrSize - 1) {
                cout << arr[i] << ", ";
            } else {
                cout << arr[i] << " ]" << endl;
            }
        }
    } else {
        cout << "Invalid number of positions to rotate." << endl;
    }

    return 0;
}