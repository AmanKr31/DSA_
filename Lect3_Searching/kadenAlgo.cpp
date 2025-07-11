#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, -5, 7, 1, 5, -7, 5};
    int n = 7; 
    int sum = 0, maxsum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (maxsum < sum) {
            maxsum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum subarray sum is: " << maxsum << endl;
    return 0;
}
