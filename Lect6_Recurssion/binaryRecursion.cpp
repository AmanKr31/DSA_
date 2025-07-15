#include <iostream>
using namespace std;

bool findElement(int arr[], int s, int e, int k) {
    if (s > e) return false;       

    int mid = s + (e - s) / 2;  
    if (arr[mid] == k) return true;  
    if (arr[mid] > k) {
        return findElement(arr, s, mid - 1, k);  
    }
    return findElement(arr, mid + 1, e, k);  
}

int main() {
    int n = 5, k = 6;
    int arr[5] = {1, 2, 3, 4, 5};
    
    if (findElement(arr, 0, n - 1, k)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
