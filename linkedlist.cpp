#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;



    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtATail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next; 
    }
    temp->next=n;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
}




int main(){
    Node* head = NULL;
    insertAtATail(head,1);
    insertAtATail(head,2);
    printList(head);
}