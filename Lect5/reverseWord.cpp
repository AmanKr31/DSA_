#include <iostream>
using namespace std;

int main(){
    string s = {"h","e","l","l","o"}; 
    int n=s.size();
    for(int i = 0; i < n; i++){
        char ch = s[i];
        s[i]= s[n-i-1];
        s[n-i-1]= ch;
        
    }
    cout<<s<<" ";
}