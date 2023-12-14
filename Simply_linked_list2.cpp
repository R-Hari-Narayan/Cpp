// Simply linked list 2

#include <iostream>
using namespace std;

//Node class
class node{
    public:
    int data;
    node* next;

    //constructor
    node(){
        this->data= 0;
        this->next= NULL;
    }

    node(int data){
        this->data= data;
        this->next= NULL;
    }

    //Destructor
    ~node(){
        cout<< "node destructed"<< endl;
    }
};

//Linked list class
class linked_list{
    public:
    node* head;
    node* tail;
    unsigned int length;

    //constructor
    linked_list(){
        this->length= 0;
        this->head= NULL;
        this->tail= NULL;
    }

    //Parameterised constructor
    linked_list(unsigned int length){
        this->length= length;
        if (length== 0){
            linked_list();
        }
        else if (length== 1){
            head= new node;
            tail= head;
        }
        else{
            head= new node;
            tail= new node;
            head->next= tail;
            for (int i= 1; i< length-1; i++){
                node *temp= new node();
                temp->next= head->next;
                head->next= temp; 
            }
        }   
    }

    //Parameterised constructor 2
    /*
    list(int arr[]){

    }
    */


    //Destructor
    ~linked_list(){
        cout<< "Destructor is called"<< endl;
        while(this->length!= 0){
            this->delete_node(0);
        }
    }

   //Linked list methods: 

    void insertAtHead(int data){
        node* temp= new node(data);
        temp->next= this->head;
        this->head= temp;
        this->length++;
    } //Function to insert new node at the head of linked list

    void insertAtTail(int data){
        node* temp= new node(data);
        this->tail->next= temp;
        this->tail= temp;
        this->length++;
    } //Function to insert new node at the tail of linked list

    void insert(int index, int data){
        if (index== 0){
            insertAtHead(data);
        }
        else if (index== length){
            insertAtTail(data);
        }
        else if (index > length || index< 0){
            cout<< "Index: "<< index<< ", out of range"<< endl;
            return;
        }
        else{
            node* temp= new node(data);
            node* ptr= this->head;
            for(int i= 0; i< index-1; i++){
                ptr= ptr->next;
            }
            temp->next = ptr->next;
            ptr->next= temp;
            this->length++;
        }    
    } // Function to insert new node anywhere in the linked list

    void modify(int index, int data){
        if (length== 0){
            cout<< "No node to modify"<< endl<< "call InsertAtHead() to insert first node."<< endl;
            return;
        }
        if (index> length-1 || index< 0){
            cout<< "Index: "<< index<< ", out of range."<< endl;
            return;
        }
        node* ptr= this->head;
        for (int i=0 ; i< index; i++){
            ptr= ptr->next;
        }
        ptr->data= data;
    } // Function to modify data of existig node using its index number

    void print(){
        node* ptr= this->head;
        while (ptr!= NULL){
            cout<< ptr->data<< " ";
            ptr= ptr->next;
        }
        cout<< endl;
    } // Function to print the entire linked list

    void delete_node(int index){
        if (this->length== 0){
            cout<< "There is no element left to delete"<< endl;
            return;
        }
        if (index> length-1 || index< 0){
            cout<< "Index out of range"<< endl;
            return;
        }
        if (index== 0){
            node* ptr= head;
            this->head= this->head->next;
            ptr->next= NULL;
            delete ptr;
            this->length--;
            return;
        } //Delete head

        node* prev= NULL;
        node* ptr= head;
        for (int i= 0; i< index; i++){
            prev= ptr;
            ptr= ptr->next;
        }
        prev->next= ptr->next;
        ptr->next= NULL;
        delete ptr;
        this->length--;

    } // Function to delete a node from anywhere in the linked list using index

    int fetchData(int index){
        if (index<0 || index> this->length-1){
            cout<< "Index out of range"<< endl;
            return -1;
        }
        node* ptr= head;
        for (int i= 0; i< index; i++){
            ptr= ptr->next;
        }
        return ptr->data;
    }
};

int main(){
    linked_list A(4);
    A.modify(0, 1);
    A.modify(1, 2);
    A.modify(2, 3);
    A.modify(3, 4);
    A.print();

    A.insertAtHead(5);
    A.print();
    cout<<"Length= "<< A.length<< endl;

    A.insert(3,12);
    A.print();
    cout<<"Length= "<< A.length<< endl;

    cout<<A.fetchData(2)<< endl;

    A.insertAtTail(5);
    A.print();
    cout<<"Length= "<< A.length<< endl;

    A.delete_node(3);
    A.print();
    cout<<"Length= "<< A.length<< endl;


    A.delete_node(0);
    A.print();
    cout<<"Length= "<< A.length<< endl;


    return 0;
}