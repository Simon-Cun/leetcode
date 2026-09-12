// Last updated: 9/11/2026, 5:51:16 PM
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
14    bool same(TreeNode* l, TreeNode* r) {
15        if (!l && !r) return true;
16        if (!l || !r || l->val != r->val) return false;
17        return same(l->left, r->right) && same(l->right, r->left);
18    }
19    bool isSymmetric(TreeNode* root) {
20        return same(root->left, root->right);
21    }
22};