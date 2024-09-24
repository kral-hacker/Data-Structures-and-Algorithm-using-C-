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
};
void insertAtTail(int data,Node* &tail){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void deletion(int p,Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;
    while(count<p){
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
void print(Node* &head){
    Node* point  = head;
    while(point!=NULL){
        cout<<point->data<<" ";
        point = point->next;
    }
    cout<<endl;
}



int main(){
    int n;
    cout<<"Enter the number of enteries you want to enter"<<endl;
    cin>>n;
    cout<<"Start entering the data: "<<endl;
    int data;
    Node* head = NULL; 
    Node* tail = NULL;
    for(int i = 0;i<n;i++){
        if(i==0){
            cin>>data;
            Node* node1 = new Node(data);
            head = node1;
            tail = node1;
        }
        else{
            cin>>data;
            insertAtTail(data,tail);
        }
    }
    print(head);
    deletion(3,head);
    print(head);
}