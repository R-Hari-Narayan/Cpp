//LeetCode problem2: Add two numbers

#include <iostream>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;

    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode* ptr): val(x), next(ptr){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    int carry=0;
    int sum;
    ListNode* result= new ListNode;
    ListNode* ptr= result;
    while(l1!= NULL && l2!= NULL){
        sum= l1->val + l2->val + carry;
        sum>9?carry=1:carry=0;
        ListNode* temp= new ListNode(sum%10);
        ptr->next= temp;
        ptr= temp;
        l1= l1->next;
        l2= l2->next;
    }
    if(l1!=NULL && l2==NULL){
        while(l1!=NULL){
            sum= l1->val+ carry;
            sum>9?carry=1:carry=0;
            ListNode* temp= new ListNode(sum%10);
            ptr->next= temp;
            ptr= temp;
            l1= l1->next;
        }
    }
    if(l1==NULL && l2!=NULL){
        while(l2!=NULL){
            sum= l2->val+ carry;
            sum>9?carry=1:carry=0;
            ListNode* temp= new ListNode(sum%10);
            ptr->next= temp;
            ptr= temp;
            l2= l2->next;
        }
    }
    if(l1== NULL && l2 == NULL && carry== 1){
        carry=0;
        ListNode* temp= new ListNode(1);
        ptr->next= temp;
        ptr= temp;
    }
    return result->next;
}


void print(ListNode* ptr){
    cout<< "[ ";
    while(ptr!= NULL){
        cout<< ptr->val<< " ";
        ptr= ptr->next;
    }
    cout<<"]" << endl;
    return;
}

void insertAthead(int data, ListNode* &head){
    ListNode* ptr= head;
    if (ptr== NULL){
        return;
    }
    ListNode* temp= new ListNode(data, ptr);
    head= temp;
}

int main(){
    ListNode* L1= new ListNode(9);
    ListNode* L2= new ListNode(9);
    insertAthead(9, L1);
    insertAthead(9, L1);
    insertAthead(9, L1);
    insertAthead(9, L1);
    insertAthead(9, L1);
    insertAthead(9, L1);

    insertAthead(9, L2);
    insertAthead(9, L2);
    insertAthead(9, L2);

    print(L1);
    print(L2);
    ListNode* result= addTwoNumbers(L1,L2);
    print(result);
    return 0;
}