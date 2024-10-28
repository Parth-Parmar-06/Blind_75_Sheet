#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int helper(TreeNode* root) {
        if (!root) return 0;
        int lh = helper(root->left);
        int rh = helper(root->right);
        return 1+max(lh,rh);
    }
    int maxDepth(TreeNode* root) {
        return helper(root);
    }
};