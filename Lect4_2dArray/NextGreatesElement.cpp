/*
#include<iostream>
using namespace std;

int main() {
  int n=5;
  int arr[n]={2,3,1,4,1};

  for(int i=0;i<n;i++){
    int j;
    for(j=i+1;j<n;j++){
      if(arr[i]<arr[j]){
        cout<<arr[i]<< " next grearest element is "<<arr[j]<<endl;
        break;
      }
    }
    
    if(j==n) {
      cout<<arr[i]<<"  greatest element "<<-1<<endl;
    }
  }
}

*/


//more optimize
#include<iostream>
#include <stack>
using namespace std;

int main(){
    int arr[]={2,1,3,4,2};
    /*
    next greater = 3 3 4 -1 -1
    next smaller = -1 -1 2 2 -1
    previos greater = -1 2 -1 -1 4
    previous smaller = -1 2 -3 3 1
    */
    int n=5;
    stack<int> s1;
    for(int i=n-1;i>=0;i--){
        while (!s1.empty() && s1.top() < arr[i]) { // Fixed comparison logic
            s1.pop();
        }

        if (s1.empty()) {
            cout << arr[i] << " next greater " << -1 << endl;
        } else {
            cout << arr[i] << " next greater " << s1.top() << endl;
        }

        s1.push(arr[i]); // Push current element into stack
    }
}