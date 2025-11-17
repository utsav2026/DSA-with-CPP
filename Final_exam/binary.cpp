#include <iostream>
using namespace std;

// BINARY SEARCH
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1; 
}

int main() {
    int n;

    cout << "Enter size of sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Value found at index " << result << endl;
    else
        cout << "Value not found." << endl;

    return 0;
}

