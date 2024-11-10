#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertNodeAtHead(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    if(tail == NULL){
        tail = head;
    }
}

void insertNodeAtTail(int data, Node* &head, Node* &tail){
    if(tail == NULL){
        insertNodeAtHead(data, head, tail);
    }
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int p, int data){
    Node* temp = new Node(data);
    Node* curr = head;

    for(int i = 1; i<p-1; i++){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void deletionAtPosition(Node* &head, int p){
    Node* curr = head;
    Node* prev = NULL;

    if(p == 1){
        head = curr->next;
        delete curr;
    }

    for(int i = 1; i<=p ;i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertNodeAtHead(5,head,tail);
    insertNodeAtHead(4,head,tail);
    insertNodeAtHead(3,head,tail);
    insertNodeAtHead(2,head,tail);
    insertNodeAtHead(1,head,tail);
    insertNodeAtTail(6,head,tail);
    insertNodeAtTail(7,head,tail);
    insertNodeAtTail(8,head,tail);
    insertAtPosition(head, 4, 0);
    print(head);
    cout<<endl;
    deletionAtPosition(head, 3);
    print(head);
}