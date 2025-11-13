#include <iostream>
using namespace std;

// ---------- SELECTION SORT ----------
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
    cout << "Array sorted using Selection Sort.\n";
}

// ---------- MERGE SORT ----------
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// ---------- LINEAR SEARCH ----------
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// ---------- BINARY SEARCH ----------
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// ---------- DISPLAY ARRAY ----------
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// ---------- MAIN MENU ----------
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice, key, index;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search\n";
        cout << "5. Display Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            selectionSort(arr, n);
            break;
        case 2:
            mergeSort(arr, 0, n - 1);
            cout << "Array sorted using Merge Sort.\n";
            break;
        case 3:
            cout << "Enter element to search (Linear): ";
            cin >> key;
            index = linearSearch(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index + 1 << endl;
            else
                cout << "Element not found.\n";
            break;
        case 4:
            cout << "Enter element to search (Binary): ";
            cin >> key;
            index = binarySearch(arr, n, key);
            if (index != -1)
                cout << "Element found at position " << index + 1 << endl;
            else
                cout << "Element not found.\n";
            break;
        case 5:
            cout << "Current Array: ";
            displayArray(arr, n);
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
