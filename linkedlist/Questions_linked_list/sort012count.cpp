// sorting the 0 1 and 2 in the linked list by using the count method
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
void sort012(Node* &head){
    Node* curr = head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while(curr!=NULL){
        if(curr->data == 0){
            count0++;
        }
        else if(curr->data == 1){
            count1++;
        }
        else if( curr->data == 2){
            count2++;
        }
        curr = curr->next;
    }
    curr = head;
    while(curr!=NULL){
        if(count0!=0){
            curr->data = 0;
            count0--;
        }
        else if(count1!=0){
            curr->data = 1;
            count1--;
        }
        else if(count2!=0){
            curr->data = 2;
            count2--;
        }
        curr = curr->next;
    }
}

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
    insertNodeatTail(1,tail,head);
    insertNodeatTail(0,tail,head);
    insertNodeatTail(1,tail,head);
    insertNodeatTail(2,tail,head);
    insertNodeatTail(1,tail,head);
    insertNodeatTail(2,tail,head);
    sort012(head);
    Print(head);
}