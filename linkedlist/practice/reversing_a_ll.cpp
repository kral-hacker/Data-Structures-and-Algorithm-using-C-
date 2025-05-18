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

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);

    if(head==NULL){
        head = temp;
        tail = temp;
    }
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        insertAtHead(head, tail, data);
    }
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* point = head;
    while(point!=NULL){
        cout<<point->data<<" ";
        point = point->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    print(head);

}