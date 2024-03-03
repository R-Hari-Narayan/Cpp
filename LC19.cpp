//LeetCode problem 19: Remove nth node from end of list

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len= 0;
    ListNode* temp= head;
    while (temp!= nullptr){
        len++;
        temp= temp->next;
    }
    if (n ==len){
        //Delete element at head
        head= head->next;
    }
    else{
        ListNode* temp2= head;
        for (int i= 1; i< len-n; i++){
            temp2= temp2->next;
        }
        temp2->next= temp2->next->next;
    }
    return head;
}

int main(){
    ListNode n5(5);
    ListNode n4(4, &n5);
    ListNode n3(3, &n4);
    ListNode n2(2, &n3);
    ListNode n1(1, &n2);
    ListNode* head= &n1;
    int n= 5;
    ListNode* output= removeNthFromEnd(head, n);
    while (output!= nullptr){
        cout<< output->val<< " ";
        output= output->next;
    }cout<< endl;
    return 0;
}