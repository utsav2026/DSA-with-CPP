#include <iostream>
using namespace std;

main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int space = 1; space < i; space++) 
            cout << "  ";
        
        for (int j = i; j <= n; j++) 
            cout << j << " ";
        
        cout << endl;
    }

}
