#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};
void printlinkedlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
bool searchLinkedList(Node* head, int target){
    while(head != NULL){
        if(head->data == target){
            return true;
        }
        head = head->next;
    }
    return false;

}
int lengthLinkedList(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

int main(){
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    Node* head = n1;
    printlinkedlist(head);
    cout<<endl;
    //int target = 30;
    if(searchLinkedList(head,30)){
        cout<<"Element found"<<endl;
    }else cout<<"Element not found"<<endl;

    cout<<"Length of linked list is "<<lengthLinkedList(head)<<endl;

}