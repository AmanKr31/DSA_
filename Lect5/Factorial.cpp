#include <iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    int smallans = fact(n-1);
    int ans = n*smallans;
}
int main(){
    int n=5;
    int result = fact(n);
    cout<<result;
}