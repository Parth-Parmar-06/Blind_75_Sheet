#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
public:
    bool isSameTree(Node* p, Node* q) {
        if (p==NULL && q==NULL) return true;
        if (p==NULL || q==NULL) return false;
        if (p->data!=q->data) return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};
int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);

    Solution obj;
    
    if (obj.isSameTree(root1, root2)) {
        cout << "The binary trees are identical." << endl;
    } else {
        cout << "The binary trees are not identical." << endl;
    }

    return 0;
}