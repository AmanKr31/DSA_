/*
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n= 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int first =arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
*/

//left shifting 
/*
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n= 5;
    int d = 3;
    while(d>0){
        int first = arr[0];
        for(int i=0;i<n;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = first;
        for(int i=0;i<n; i++) {
            cout<< arr[i]<<" ";
        }
        cout<<endl;
        d--;
    } 

}
*/

// right shift
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5; 
    int d = 3; 
    while (d > 0) {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[0] = last; 
        for(int i=0;i<n; i++) {
            cout<< arr[i]<<" ";
        }
        cout<<endl;
        d--;
    }

    
    return 0;
}
