//O(n)

#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,4,5,3,6,7};
    int n=6;
    int k=7;

    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==k ){
            index=i;
        }
    }
    cout<<index;
}