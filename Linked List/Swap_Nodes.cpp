#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* swapPairs(ListNode* head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) return head;
    
    ListNode* p = head;
    ListNode* q = head->next;
    p->next = swapPairs(q->next);
    q->next = p;
    return q;
}