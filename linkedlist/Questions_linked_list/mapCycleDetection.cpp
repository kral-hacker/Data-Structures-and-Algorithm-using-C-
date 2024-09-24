// using map to detect the cycle inside the linked list
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
bool DetectCycle(Node* &head){
    Node* temp = head;
    map<Node*,bool> visited;
    
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"Present on element: "<<temp->data<<endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
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
    tail->next = head->next->next;
    // Print(head);
    bool val = DetectCycle(head);
    if(val==true){
        cout<<"The linked list contains the cycle. "<<endl;
    }
    else{
        cout<<"The linked list not contains the cycle. "<<endl;
    }

}