// Rversing the linked list using the 2 pointer approach
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
int getLength(Node* &head){
    Node* point = head;
    int length = 0;
    while(point != NULL){
        length++;
        point = point -> next;
    }
    return length;
}
void checkPalindrome(Node* &head){
    int length = getLength(head);
    int arr[length];
    Node* curr = head;
    int i = 0;
    while(curr!=NULL){
        arr[i] = curr->data;
        i++;
        curr = curr->next;
    }
    int start = 0;
    int end = length-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            cout<<"Not Palindrome";
            return;
        }
        start++;
        end--;
    }
    cout<<"The linked list is palindrome."<<endl;
}


void Print(Node* &head){
    Node* point = head;
    while(point != NULL){
        cout<<point->data<<" ";
        point = point -> next;
    }cout<<endl;
    cout<<getLength(head);
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    // Node* node = new Node(10);
    // cout<<node->data<<endl;
    // cout<<node->next<<endl;
    insertNodeatTail(1,tail,head);
    insertNodeatTail(2,tail,head);
    insertNodeatTail(1,tail,head);
    insertNodeatTail(1,tail,head);
    insertNodeatTail(1,tail,head);
    // insertAtIndex(1000,2,head);
    // deleteAtIndex(2,head);
    Print(head);
    checkPalindrome(head);
}