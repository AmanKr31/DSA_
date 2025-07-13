#include<iostream>
using namespace std;

int main(){
    string s = "racecar";
    int n = s.length();
    bool found = false;
    for(int i=0;i<n/2;i++){ 
        if(s[i]==s[n-1-i]){
            found = true;
        }else{
            found = false;
        }

    }
    cout <<found;
   
}