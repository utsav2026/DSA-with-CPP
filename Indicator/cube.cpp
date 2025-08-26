#include <iostream>
using namespace std;

int cube(int *n) {
    return (*n) * (*n) * (*n);
}

 main() {
    int size;
    cout << "Enter array's size: ";
    cin >> size;

    int arr[10][10]; 

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Cubes of all elements:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << cube(&arr[i][j]) << " ";
        }
        cout << endl; 
    }
 }
