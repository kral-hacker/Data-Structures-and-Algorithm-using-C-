#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
    temp->next = head;
    // head->prev = temp;
    head = temp;
    }
}

void print(Node* &head){
    Node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}



int main(){
        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail, 1);
        insertAtHead(head, tail, 2);
        insertAtHead(head, tail, 3);
        insertAtHead(head, tail, 4);
        insertAtHead(head, tail, 5);
        print(head);
}