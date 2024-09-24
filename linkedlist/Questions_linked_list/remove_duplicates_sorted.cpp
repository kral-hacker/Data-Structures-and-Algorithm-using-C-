// remove duplicates in the sorted array
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
    while (curr != NULL && curr->next != NULL) { // Ensure curr->next is not NULL
        if (curr->data == curr->next->data) {
            Node* deleteNode = curr->next;
            curr->next = deleteNode->next;
            delete(deleteNode);
        } else {
            curr = curr->next; // Move to the next node only if no deletion is done
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
    insertAtTail(10,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(10,head,tail);
    insertAtTail(20,head,tail);
    removeDuplicates(head);
    Print(head);

}