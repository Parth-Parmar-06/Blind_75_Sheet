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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        while (list1 != NULL && list2 != NULL) {
            if (list1->val > list2->val) {
                temp->next = list2;
                list2 = list2->next;
            } else {
                temp->next = list1;
                list1 = list1->next;
            }
            temp = temp->next;
        }
        if (list1 != NULL) {
            temp->next = list1;
        } else if (list2 != NULL) {
            temp->next = list2;
        } return head->next;
    }
};

int main() {
    Solution solution;

    // Test case 1: Both lists are empty
    ListNode* list1_1 = nullptr;
    ListNode* list1_2 = nullptr;
    ListNode* mergedList1 = solution.mergeTwoLists(list1_1, list1_2);
    cout << "Test case 1: Both lists empty -> ";
    while (mergedList1) {
        cout << mergedList1->val << " ";
        mergedList1 = mergedList1->next;
    }
    cout << endl;

    // Test case 2: One list is empty, other is non-empty
    ListNode* list2_1 = nullptr;
    ListNode* list2_2 = new ListNode(1, new ListNode(3, new ListNode(5)));
    ListNode* mergedList2 = solution.mergeTwoLists(list2_1, list2_2);
    cout << "Test case 2: One list empty -> ";
    while (mergedList2) {
        cout << mergedList2->val << " ";
        mergedList2 = mergedList2->next;
    }
    cout << endl;

    // Test case 3: Both lists have multiple elements
    ListNode* list3_1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list3_2 = new ListNode(1, new ListNode(3, new ListNode(5)));
    ListNode* mergedList3 = solution.mergeTwoLists(list3_1, list3_2);
    cout << "Test case 3: Both lists non-empty -> ";
    while (mergedList3) {
        cout << mergedList3->val << " ";
        mergedList3 = mergedList3->next;
    }
    cout << endl;

    // Test case 4: One list is larger than the other
    ListNode* list4_1 = new ListNode(1, new ListNode(3, new ListNode(7)));
    ListNode* list4_2 = new ListNode(2);
    ListNode* mergedList4 = solution.mergeTwoLists(list4_1, list4_2);
    cout << "Test case 4: One list larger -> ";
    while (mergedList4) {
        cout << mergedList4->val << " ";
        mergedList4 = mergedList4->next;
    }
    cout << endl;

    // Test case 5: Lists with duplicate elements
    ListNode* list5_1 = new ListNode(2, new ListNode(2, new ListNode(4)));
    ListNode* list5_2 = new ListNode(2, new ListNode(2, new ListNode(3)));
    ListNode* mergedList5 = solution.mergeTwoLists(list5_1, list5_2);
    cout << "Test case 5: Lists with duplicates -> ";
    while (mergedList5) {
        cout << mergedList5->val << " ";
        mergedList5 = mergedList5->next;
    }
    cout << endl;

    return 0;
}
