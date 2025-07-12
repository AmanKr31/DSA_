#include<iostream>
using namespace std;

int main() {
    int n = 3, m = 3;
    int arr[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int j = 0; j < m; j++) {
        if (j % 2 != 0) {
            for (int i = 0; i < n/2; i++) {
                swap(arr[i][j], arr[n - i - 1][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
