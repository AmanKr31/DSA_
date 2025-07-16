#include <iostream>
using namespace std;

bool findElement(int arr[], int n, int i, int k) {
    if (i == n) return false;  

    if (arr[i] == k) return true;  
    return findElement(arr, n, i + 1, k);  
}
int main() {
    int n = 5, k = 6;
    int arr[5] = {1, 2, 3, 4, 5};
    
    if(findElement(arr, n, 0, k)) cout<<"true";
    else cout<<"false";

    return 0;
}
