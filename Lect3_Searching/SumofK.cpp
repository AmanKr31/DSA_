#include <iostream>
using namespace std;

int main(){
    int n=7;
    int arr[n]= {3,6,2,9,3,10,2};
    int k=3;
    int i=0;j=0
    
    int sum = 0,maxsum=0;
    while(j<n){
        sum = sum +arr[i];

        if(j-i+1 == k){
            if(sum > maxsum){
                maxsum = sum;
                 
            }
            sum = sum - arr[i];
                i++;
        }
        j++;
    }
    cout<<maxsum;
}