#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
