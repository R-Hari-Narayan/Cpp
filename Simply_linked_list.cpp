// Simply linked list
// It is a linear dynamic data structure

#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    //parameterised constructor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node *temp= new Node(data);
    temp->next= head;
    head= temp;
}

void insertAtTail(Node* &tail, int data){
    Node *temp= new Node(data);
    tail->next= temp;
    tail= temp;
}

void insertAtMiddle(Node* &head, int index, int data){
    if (index== 0){
        insertAtHead(head, data);
        return;
    }
    Node* temp= new Node(data);
    Node* ptr= head;
    for(int i=0; i< index-1; i++){
        ptr= ptr->next;
    }
    temp->next= ptr->next;
    ptr->next= temp;

}

void print(Node* &head){
    Node *ptr= head;
    //Traversing all linked list nodes
    while(ptr!= NULL)
    {
        cout<< ptr->data<< " ";
        ptr= ptr->next;
    }
    cout<< endl;
}

int main(){
    //created a new node
    Node *node1= new Node(10);

    //head and tail pointed to node1
    Node *head= node1;
    Node *tail= node1;

    //printing linked list
    print(head);

    //Adding new node at head
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtTail(tail, 5);
    insertAtMiddle(head, 2, 11);
    print(head);


    return 0;
}