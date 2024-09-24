#include  <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertAtHead(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    // int length = getLength(head);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}
void insertAtTail(int data,Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(tail == NULL){
        head==temp;
        tail==temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
void insertAtIndex(int data,int index ,Node* &head, Node* &tail){
    Node* curr = head;
    int i = 0;
    while(i<index-1){
        curr = curr->next;
        i++;
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}
void deleteAtIndex(int index, Node* &head,Node* &tail){
    Node* curr = head;
    int i = 0;
    while(i<index-1){
        curr = curr->next;
        i++;
    }
    Node* nodetobedeleted = curr->next;
    curr->next = nodetobedeleted->next;
    nodetobedeleted->next->prev = curr;
    delete nodetobedeleted;

}
int getLength(Node* &head){
    Node* point = head;
    int i = 0;
    while(point!=NULL){
        i++;
        point = point->next;
    
}
// cout<<"The lenght of the linked list is: "<<i<<endl;
return i;
}
void print(Node* &head){
    Node* point = head;
    while(point!=NULL){
        cout<<point->data<<" ";
        point = point->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(5,head,tail);
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(40,head,tail);
    insertAtTail(50,head,tail);
    insertAtIndex(35,4,head,tail);
    deleteAtIndex(4,head,tail);

    print(head);
    // getLength(head);
}