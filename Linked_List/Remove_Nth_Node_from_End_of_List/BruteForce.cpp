#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int position = getSize(head) - n + 1;
        if (position == 1) {
            head = head->next;
            return head;
        }
        ListNode *temp = head;
        ListNode *prev = NULL;
        int index = 1;
        while (index<position) {
            prev = temp;
            temp = temp->next;
            index++;
        }
        prev->next = temp->next;
        return head;
    }
    int getSize(ListNode* head) {
        int count=0;
        while(head!=NULL) {
            head=head->next;
            count++;
        } return count;
    }
};

ListNode* createLinkedList(vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (int i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Test case
    vector<int> values = {1, 2, 3, 4, 5};
    int n = 2;
    
    // Create linked list from the vector
    ListNode* head = createLinkedList(values);
    
    // Create Solution object and call removeNthFromEnd
    Solution sol;
    head = sol.removeNthFromEnd(head, n);
    
    // Print the resulting linked list
    printLinkedList(head);

    return 0;
}