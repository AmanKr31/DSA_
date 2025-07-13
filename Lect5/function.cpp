#include <iostream>
using namespace std;

void A(){
    cout<<1;
}
void B(){
    A();
    cout<<2;
}
void C(){
    cout<<3;
    A();
}
void D(){
    C();
    cout<<4;
}
int main(){
    D();
    cout<<5<<endl;
    return 0;
}