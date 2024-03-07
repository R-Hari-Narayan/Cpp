//LeetCode problem 876: Middle of linked list

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    if (head== nullptr || head->next== nullptr){
        return head;
    }
    int len= 0;
    ListNode* temp= head;
    while(temp!= nullptr){
        len++;
        cout<< temp->val<< endl;
        temp= temp->next;
    }
    temp= head;
    for (int i= 0; i< len/2; i++){
        temp= temp->next;
    }
    return temp;

}

int main(){
    ListNode x4(4);
    ListNode x3(3, &x4);
    ListNode x2(2, &x3);
    ListNode x1(1, &x2);
    ListNode* head= &x1;
    ListNode* output= middleNode(head);
    cout<< output->val<< endl;
    return 0;
}