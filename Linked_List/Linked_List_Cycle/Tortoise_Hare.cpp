#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;  

    ListNode(int data) {
        val = data;
        next = nullptr;
    }
};

bool hasCycle(ListNode* head) {
    ListNode* tortoise = head;
    ListNode* hare = head;
    while (hare!=NULL && hare->next!=NULL) {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare) {
            return true;
        }
    } return false;
}

int main() {
    // Test case 1: Linked list without a cycle
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);

    cout << "Test case 1 (no cycle): " << (hasCycle(head1) ? "Cycle detected" : "No cycle") << endl;

    // Test case 2: Linked list with a cycle
    ListNode* head2 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    head2->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // Creating a cycle here

    cout << "Test case 2 (cycle): " << (hasCycle(head2) ? "Cycle detected" : "No cycle") << endl;

    // Test case 3: Single node without a cycle
    ListNode* head3 = new ListNode(1);

    cout << "Test case 3 (single node, no cycle): " << (hasCycle(head3) ? "Cycle detected" : "No cycle") << endl;

    // Test case 4: Single node with a cycle (node points to itself)
    ListNode* head4 = new ListNode(1);
    head4->next = head4; // Creating a cycle here

    cout << "Test case 4 (single node, cycle): " << (hasCycle(head4) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}


