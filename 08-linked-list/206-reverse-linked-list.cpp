//
// Created by laura on 5/02/2025.
//

#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {

}

void printList(ListNode* head){
    while(head != nullptr){
        cout<<head->val<<"->";
        head=head->next;
    }
}

int main() {
    ListNode* l = new ListNode(1);
    ListNode* p = new ListNode(2);
    ListNode* t = new ListNode(3);
    l->next = p;
    l->next->next = t;
    printList(l);
    cout<<endl;
    printList(reverseList(l));

}