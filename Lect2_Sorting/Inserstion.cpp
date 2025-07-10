#include<iostream>
using namespace std;


void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		int current = arr[i];
		int j;
		for(j = i - 1; j >= 0; j--) {
			if(current < arr[j]) {
				arr[j+1] = arr[j];
			}
			else {
 				break;
			}
		}
		arr[j+1] = current;
	}

}
int main(){
    int arr[] = {12, 11, 13, 5, 6};
    
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}