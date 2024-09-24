// sorting the 0 1 and 2 in the linked list 
// approach -> we will create three linked list one for 0, one for 2 and one for 3
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
// void populate(Node* &tail,Node* temp){
//     tail->next = temp;
//     temp->next = NULL;
//     tail = temp;
// }
// void sort012(Node* &head){
//     Node* curr = head;
//     // making the dummy nodes for the new linked lists
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;
//     while(curr!=NULL){
//         if(curr->data == 0){
//             populate(zeroTail , curr);
//         }
//         else if(curr->data == 1){
//             populate(oneTail , curr);
//         }
//         else if(curr->data == 2){
//             populate(twoTail , curr);
//         }
//         curr = curr->next;
//     }

//     // merge the 3 linked lists
//     if(oneHead->next!= NULL){
//         zeroTail->next = oneHead->next;
//     }
//     else{
//         zeroTail->next = twoHead->next;
//     }
//     oneTail->next = twoHead->next;

//     head = zeroHead->next;
//     twoTail->next = NULL;
//     // delete the dummy nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

// }
void populate(Node*& tail, Node* temp) { // Pass tail by reference
    tail->next = temp;
    tail = temp; // Now this updates the actual tail pointer in the calling function
}

void sort012(Node*& head) {
    Node* curr = head;
    // making the dummy nodes for the new linked lists
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    while (curr != NULL) {
        if (curr->data == 0) {
            populate(zeroTail, curr);
        }
        else if (curr->data == 1) {
            populate(oneTail, curr);
        }
        else if (curr->data == 2) {
            populate(twoTail, curr);
        }
        curr = curr->next;
    }

    // Merge the 3 linked lists
    if (oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
    }
    else {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;

    head = zeroHead->next;
    twoTail->next = NULL;

    // delete the dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
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