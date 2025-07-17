#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void printlinkedlist(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Node* insertnode(Node *head, int data, int pos) {
//     Node *newnode = new Node(data);

//     // Case 1: Insert at the head
//     if (pos == 0) {
//         newnode->next = head;
//         head = newnode;
//         return head;
//     }

//     // Traverse to the position
//     Node *temp = head;
//     int i = 0;
//     while (temp != NULL && i < pos - 1) {
//         temp = temp->next;
//         i++;
//     }

//     // Case 2: Invalid position
//     if (temp == NULL) {
//         delete newnode; // Avoid memory leak
//         cout << "\nPosition out of bounds!" << endl;
//         return head;
//     }

//     // Case 3: Insert at the middle or end
//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head;
// }-


//using recurssion  
Node* insertnode(Node* head, int data, int pos) {
    // Base case: Insert at the head
    if (pos == 0) {
        Node* newnode = new Node(data);
        newnode->next = head;
        return newnode;
    }

    // If head is NULL and position is not zero, position is invalid
    if (head == NULL) {
        cout << "\nPosition out of bounds!" << endl;
        return head;
    }

    // Recursive case: Move to the next node
    head->next = insertnode(head->next, data, pos - 1);
    return head;
}

int main() {
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Node *head = n1;

    // Print original list
    cout << "Original list: ";
    printlinkedlist(head);

    // Insert a node at position 2
    head = insertnode(head, 60, 2);

    // Print updated list
    cout << "\nUpdated list: ";
    printlinkedlist(head);

    return 0;
}
 