#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next=NULL;
    }
};
int main(){
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    cout<<"n1.data = "<<n1.data<<endl;
    cout<<"n2.data = "<<n2.data<<endl;
    cout<<"n3.data = "<<n3.data<<endl;
    cout<<"n4.data = "<<n4.data<<endl;

    cout<<"n1.next = "<<n1.next<<endl;
    cout<<"n2.next = "<<n2.next<<endl;
    cout<<"n3.next = "<<n3.next<<endl;
    cout<<"n4.next = "<<n4.next<<endl;

    cout<<n1.next->data<<endl;
    cout<<"&n2 = "<<&n2<<endl;
}
