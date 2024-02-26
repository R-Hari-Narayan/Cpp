//LeetCode problem 21: Merge Two Sorted Lists

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* head;
    ListNode* prev;
    if(list1!= nullptr && list2== nullptr){
        return list1;
    }
    else if (list1== nullptr && list2!= nullptr){
        return list2;
    }
    else if (list1== nullptr && list2== nullptr){
        return list1;
    }
    else{

        if (list1->val<= list2->val){
            head= list1;
            prev= list1;
            list1= list1->next;
        }
        else{
            head= list2;
            prev= list2;
            list2= list2->next;
        }
    }
    while(list1!= nullptr && list2!= nullptr){
        if (list1->val<= list2->val){
            prev->next= list1;
            prev= list1;
            list1= list1->next;
        }
        else{
            prev->next= list2;
            prev= list2;
            list2= list2->next;
        }
    }
    while(list1!= nullptr){
        prev->next= list1;
        prev= list1;
        list1= list1->next;
    }
    while(list2!= nullptr){
        prev->next= list2;
        prev= list2;
        list2= list2->next;
    }
    return head;
}

int main(){
    ListNode list1_3(5);
    ListNode list1_2(3, &list1_3);
    ListNode list1_1(1, &list1_2);

    ListNode list2_3(4);
    ListNode list2_2(2, &list2_3);
    ListNode list2_1(1, &list2_2);
    
    ListNode*ptr= mergeTwoLists(&list1_1, &list2_1);
    while(ptr!= nullptr){
        cout<< ptr->val<< endl;
        ptr= ptr->next;
    }

    return 0;
}