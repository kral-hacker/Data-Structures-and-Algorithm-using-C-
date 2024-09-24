// algorithm to detect the cycle inside the linked list
#include <iostream>
#include <map>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(int data, Node* &head, Node* &tail){
    Node* temp = new Node(data);
    if(head == NULL){
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
    if(tail==NULL){
        insertAtHead(data,head,tail);
    }
    else{
        tail->next = temp;
        temp->next = NULL;
        tail = temp;
    }
}
void  getTheStartingNodeOfTheCycle(Node* &head, Node* slow,Node* fast){
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    cout<<"The starting node of the cycle is : "<<slow->data<<endl;
}

void floydsCycleDetection(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "There is a cycle in the linked list." << endl;
            getTheStartingNodeOfTheCycle(head,slow,fast);
            return;
        }
    }

    cout << "There is no cycle in the linked list." << endl;
    
    
}
void Print(Node* &head){
    Node* point = head;
    while(point!=NULL){
        cout<<point->data<<" ";
        point = point->next;
    }
    cout<<endl;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* node1 = new Node(10);
    insertAtHead(1,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(4,head,tail);
    insertAtHead(5,head,tail);
    insertAtHead(6,head,tail);
    insertAtHead(7,head,tail);
    Print(head);
    tail->next = head->next->next; 
    floydsCycleDetection(head);

}