// binary searchh 
//it must be sorted 

//log(n ) time complexity
//when the time is given is half(n/2) them the time comolexity is log(n); 
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,6,7};
    int k=5,n=6;
    int ans=-1;
    int s=0,e=n-1;
    while (s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k) {
            ans = mid;
            break;
        }
        else if(arr[mid]<k) s= mid+1;
        else e=mid-1;
    }
    cout<<ans;
}