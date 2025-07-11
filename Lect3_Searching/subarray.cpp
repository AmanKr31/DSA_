
#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4}; 
    int n = 4;                 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) //starting point 
    {
        for (int j = i; j < n; j++) //ending point
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}


// maximun subarray sum
// C++ Program to find the maximum subarray sum using nested loops 
