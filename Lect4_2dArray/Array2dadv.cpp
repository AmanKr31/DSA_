#include<iostream>
using namespace std;

int main(){
    int n = 3, m = 3;
    int arr[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int maxsum=0;
    int maxi=-1;
    string type ;

    for (int i = 0; i < n; i++) {
        int rowsum = 0; 
        for (int j = 0; j < m; j++) {
            rowsum = rowsum + arr[i][j];

        }
        cout<< rowsum << endl;
        if (rowsum > maxsum){
            maxsum = rowsum;
            maxi = i;
            type="row";
        }
    }
    for(int j=0;j<m;j++){
        int colsum = 0;
        for(int i=0;i<n;i++){
            colsum += arr[i][j];
        }
        cout<< colsum << endl;
        if (colsum > maxsum){
            maxsum = colsum;
            maxi = j;
            type = "col";
        }
    }
    cout<<"type: "<<type<<endl;
     
    cout<<"index: "<<maxi<<endl;
    cout<<"max sum: "<<maxsum<<endl;
    

    return 0;
}
