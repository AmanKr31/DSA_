#include <iostream>
using namespace std;

int main(){
    int n=4,m=4;
    int arr1[n]={1,3,5,7};
    int arr2[m]={2,4,6,8};
    int a = n+m;
    int arr3[a];
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;i++;
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n) arr3[k++]=arr1[i++];
    while(j<m) arr3[k++]=arr2[j++];
    for(int i=0;i<a;i++){
        cout<<arr3[i]<<" ";
    }
}