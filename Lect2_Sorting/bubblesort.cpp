
//all sorting o(n^2)
#include <iostream>
using namespace std;


void bubbleSort(int arr[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i]; 
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main(){
    int arr[] = {20,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
