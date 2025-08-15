#include <iostream>
using namespace std;

main() {
    int rows, cols;
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[50][50];
    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int rowNum;
    cout << "Enter row number: ";
    cin >> rowNum;

    cout << "Elements of row " << rowNum << ": ";
    int rowSum = 0;
    for (int j = 0; j < cols; j++) {
        cout << arr[rowNum][j] << " ";
        rowSum += arr[rowNum][j];
    }
    cout << "The sum of a row " << rowNum << ": " << rowSum << endl;

    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    cout << "Elements of column " << colNum << ": ";
    int colSum = 0;
    for (int i = 0; i < rows; i++) {
        cout << arr[i][colNum] << " ";
        colSum += arr[i][colNum];
    }
    cout << "The sum of column " << colNum << ": " << colSum << endl;
}
