#include <iostream>
using namespace std;


struct Node{
    int  data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(head == NULL){
        insertAtHead(data,head,tail);
    }
    else{
        tail->next = temp;
        temp->next = NULL;
        tail = temp;
    }
}
void removeDuplicates(Node*& head) {
    if (head == NULL) return; // Check if the list is empty

    Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        Node* temp = curr->next;
        while (temp != NULL && temp->next != NULL) {
            if(curr->data == temp->data){
                
            }
    }
    }
}

void Print(Node* &head){
    Node* point = head;
    while(point!=NULL){
        cout<<point->data<<" ";
        point = point->next;
    }
    cout<< endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(20,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(20,head,tail);
    removeDuplicates(head);
    Print(head);

}