#include <iostream>
using namespace std;

main() {
    int n;
    cout << "Enter the array's row & column size: ";
    cin >> n;

    int a[50][50]; 
    int t[50][50]; 

    cout << "Enter array's elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "Transpose of the array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

}
