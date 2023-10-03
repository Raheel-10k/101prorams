#include <iostream>
using namespace std;
int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter the digits :" << endl; // the digits will place as per column
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < cols; ++j)
    {
        for (int i = 0; i < rows; ++i)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
