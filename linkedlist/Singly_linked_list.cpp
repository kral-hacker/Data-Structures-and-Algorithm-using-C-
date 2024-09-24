#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // ~Node(int data){
    //     int value = this->data;
    //     if(this->next = NULL){
    //         delete next;
    //         next = NULL
    //     }
    // }
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    // temp->next = NULL;
}
void insertAtposition(Node* &head,int p,int data){
    Node* temp = new Node(data);
    Node* point = head;
    for(int i = 1;i<p-1;i++){
        point = point->next;
    }
    temp->next = point->next;
    point->next = temp;
}

void deleteAtPosition(int p,Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    if(p==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        int count  = 1;
        while(count<p){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;


    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    // print(head);
    insertAtHead(head,12);
    // print(head);
    insertAtHead(head,15);
    // print(head);
    insertAtTail(tail,90);
    // print(head);
    insertAtposition(head,3,100);
    // print(head);
    deleteAtPosition(3,head);
    print(head);
}