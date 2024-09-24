// checking if our linked list is circular or not
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
// constructing the cicular linked list
void insertNodeatTail(int data, Node* &tail, Node* &head){
    Node* temp = new Node(data);
    if (tail == NULL) { // If the list is empty
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
        tail->next = head;
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
Node* reversesLLinKGroups(Node* head, int k) {
    // Base case
    if (head == NULL) {
        return NULL;
    }

    // Step 1: Reverse the first K nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Recursion will handle the rest
    if (next != NULL) {
        head->next = reversesLLinKGroups(next, k);
    }

    // Return the new head of the reversed group
    return prev;
}

// void reverselinkedlist(Node* &head, Node* &tail){
//     Node* curr = head;
//     Node* prev = NULL;
//     while(curr!=NULL){
//         Node* forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         head = prev;
//     }
// }

bool isCircular(Node* head){
    // case 1 (EMPTY LINKED LIST)
    if(head == NULL){
        return true;
    }


    //case 3 (>1 nodes)
    Node* curr = head->next;
    while(curr!=head && curr!=NULL){
        curr = curr->next;
    }

    if(curr==head){
        return true;
    }
    return false;
 
}

void Print(Node* &head){
    Node* point = head->next;
    cout<<head->data<<" ";
    while(point != head){
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
    insertNodeatTail(10,tail,head);
    insertNodeatTail(20,tail,head);
    insertNodeatTail(30,tail,head);
    insertNodeatTail(40,tail,head);
    insertNodeatTail(50,tail,head);
    insertAtIndex(1000,2,head);
    deleteAtIndex(2,head);
    // reverselinkedlist(head,tail);
    // head = reversesLLinKGroups(head,2);
    Print(head);
    bool value = isCircular(head);
    if(value==true){
        cout<<"The linked list is circular"<<endl;
    }
    else{
        cout<<"The linked list is not circular";
    }
}