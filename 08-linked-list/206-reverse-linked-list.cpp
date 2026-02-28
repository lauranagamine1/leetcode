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
ListNode* reverse(ListNode* head, stack<int>& stack, ListNode* newHead) {
    // newHead es lo mismo que head, pero apunta al primer nodo
    if(stack.size()==0) return newHead; // caso base

    ListNode* l = new ListNode(stack.top());
    stack.pop();
    head->next = l;

    return reverse(head->next,stack,newHead);
}

ListNode* reverseList(ListNode* head) {
    // base case
    if(head == nullptr || head->next == nullptr) return head;
    auto head2 = head;
    // we'll use a stack
    stack<int> stack;
    int c=0;
    while(head != nullptr){
        stack.push(head->val);
        c++;
        head = head->next;
    }
    // tomamos el primer elemento
    ListNode* l = new ListNode(stack.top());
    stack.pop();

    if(stack.size() >=1){
        return reverse(l,stack,l);
    }
    return l;

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
    ListNode* u = new ListNode(4);
    l->next = p;
    l->next->next = t;
    l->next->next->next = u;


    printList(l);
    cout<<endl;
    printList(reverseList(l));

}