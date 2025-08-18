#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to rotate list to the right by k places
ListNode* rotateRight(ListNode* head, int k) {
    int n = 0;
    ListNode* p = head;

    while(p != NULL) {
        p = p->next;
        n++;
    }

    if(head == NULL || head->next == NULL) return head;
    if(k == 0) return head;

    k = k % n;  // effective rotations
    while(k--) {
        ListNode* p = head;
        ListNode* q = NULL;
        while(p->next != NULL) {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        p->next = head;
        head = p;
    }
    return head;
}

// Utility function to print list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    int k = 2;
    head = rotateRight(head, k);

    cout << "Rotated List by " << k << " places: ";
    printList(head);

    return 0;
}