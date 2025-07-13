#include <iostream>
using namespace std;
int main(){
    string str= "i m good boy";
    //int count = 1;
    // for(char ch:str){
    //     if(ch == ' '){
    //         count++;
    //     }
    // }
    int count=0,ans=0;
    if(int i=0;str[i]!='\0';i++){
        if(str[i] == ' '){
            count++;
        }
    }
    
    if(str.length() == 0){
        cout<<ans;
    }else{
        cout<<count;
    }
}