#include <iostream>
using namespace std;

void print(int arr[], int n) {
    if (n == 0) return;  // Base case for recursion
    
    cout << arr[0] << " ";
    print(arr + 1, n - 1);  
}

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    
    print(arr, n); 
    cout << "\nSize of array: " << sizeof(arr) / sizeof(arr[0]) << endl;  
    
    return 0;
}
