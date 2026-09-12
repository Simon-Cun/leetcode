// Last updated: 9/11/2026, 5:41:43 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void inorder(TreeNode* curr, TreeNode*& prev, TreeNode*& first, TreeNode*& second) {
15        if (!curr) return;
16        inorder(curr->left, prev, first, second);
17        if (prev && prev->val >= curr->val) {
18            if (!first) first = prev;
19            second = curr;
20        }
21        prev = curr;
22        inorder(curr->right, prev, first, second);
23    }
24    void recoverTree(TreeNode* root) {
25        TreeNode* first = nullptr;
26        TreeNode* second = nullptr;
27        TreeNode* prev = nullptr;
28        inorder(root, prev, first, second);
29        swap(first->val, second->val);
30    }
31};