#include <iostream>
using namespace std;

void square(int arr[], int n) { 
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    square(arr, n); 

    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
