#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {} 
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
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    cout << "Original list: ";
    printList(head);
    head = swapPairs(head);
    cout << "After swapping pairs: ";
    printList(head);

    return 0;
}
