// finding the middle element of the linked list
// Approach 2 the 2 pointer approach
#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertNodeatHead(int data,Node* &head,Node* &tail){
    Node* temp  = new Node(data);
    temp -> next = head;
    head = temp;
    if (tail == NULL) { // If the list was empty, set tail to head
        tail = head;
    }
}
void insertNodeatTail(int data, Node* &tail, Node* &head){
    Node* temp = new Node(data);
    if (tail == NULL) { // If the list is empty
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}
void insertAtIndex(int data,int index ,Node* &head){
    Node* curr = head;
    int i = 0;
    while(i<index-1){
        curr = curr->next;
        i++;
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;
}
void deleteAtIndex(int index, Node* head){
    Node* curr = head;
    int i = 0;
    while(i<index-1){
        curr = curr->next;
        i++;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

void reverselinkedlist(Node* &head, Node* &tail){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        head = prev;
    }
}
void middleElementofList(Node* &head, Node* &tail){
    Node* fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"The middle element of the linked list is: "<<slow->data<<" "<<endl;
}
// int lengthofll(Node* &head){
//     Node* curr = head;
//     int i = 0;
//     while(curr!=NULL){
//         i++;
//         curr = curr->next;
//     }
//     return i;
// }

// void middleElementLL(Node* &head){
//     int length  = lengthofll(head);
//     int middleIndex = length/2;
//     Node* point  = head;
//     int i = 0;
//     while(i< middleIndex-1){
//         point = point->next;
//         i++;
//     }
//     cout<<"The middle element of the linked list is: "<<point->next->data<<endl;
// }

void Print(Node* &head){
    Node* point = head;
    while(point != NULL){
        cout<<point->data<<" ";
        point = point -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    // Node* node = new Node(10);
    // cout<<node->data<<endl;
    // cout<<node->next<<endl;
    insertNodeatTail(10,tail,head);
    insertNodeatTail(20,tail,head);
    insertNodeatTail(30,tail,head);
    insertNodeatTail(40,tail,head);
    insertNodeatTail(50,tail,head);
    insertAtIndex(1000,2,head);
    deleteAtIndex(2,head);
    // reverselinkedlist(head,tail);
    // middleElementLL(head);
    middleElementofList(head,tail);
    Print(head);
}