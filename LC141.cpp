//LeetCode problem 141: Linked list cycle

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if (head == nullptr){
        return false;
    }
    ListNode* turtle= head;
    ListNode* hare= head;
    while(hare->next!= nullptr && hare->next->next!= nullptr){
        hare= hare->next->next;
        turtle= turtle->next;
        if (hare== turtle){
            return true;
        }
    }
    return false;
}

int main(){
    ListNode x1(3);
    ListNode x2(2);
    ListNode x3(0);
    ListNode x4(-4);
    ListNode* head= &x1;
    x1.next= &x2;
    x2.next= &x3;
    x3.next= &x4;
    x4.next= &x2;
    if (hasCycle(head)){
        cout<< "List has cycle"<< endl;
    }
    else{
        cout<< "Does not have cycle"<< endl;
    }
    return 0;
}