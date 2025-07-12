//binary searchh

bool searchMatrix(int matrix[][4], int m, int n, int target) {
    int low = 0, high = m * n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midValue = matrix[mid / n][mid % n]; 

        if (midValue == target) {
            return true; 
        } else if (midValue < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return false; 
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target1 = 3;
    int target2 = 13;

    cout << (searchMatrix(matrix, 3, 4, target1) ? "true" : "false") << endl; // Output: true
    cout << (searchMatrix(matrix, 3, 4, target2) ? "true" : "false") << endl; // Output: false

    return 0;
}


//linear searchhh
/*
#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][4], int m, int n, int target) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target1 = 3;
    cout << (searchMatrix(matrix, 3, 4, target1) ? "true" : "false") << endl; // Output: true

   
    return 0;
}
*/


 
