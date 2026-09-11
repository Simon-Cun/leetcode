// Last updated: 9/11/2026, 4:46:43 PM
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
14    void inorder(TreeNode* curr, vector<int>& arr) {
15        if (!curr) return;
16        inorder(curr->left, arr);
17        arr.push_back(curr->val);
18        inorder(curr->right, arr);
19    }
20    bool isValidBST(TreeNode* root) {
21        vector<int> arr;
22        inorder(root, arr);
23        for (int i = 1; i < arr.size(); ++i) {
24            if (arr.at(i) <= arr.at(i - 1)) return false;
25        }
26        return true;
27    }
28};