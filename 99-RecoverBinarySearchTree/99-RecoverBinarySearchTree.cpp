// Last updated: 9/11/2026, 5:18:52 PM
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
14    void inorder(TreeNode* curr, vector<TreeNode*>& arr) {
15        if (!curr) return;
16        inorder(curr->left, arr);
17        arr.push_back(curr);
18        inorder(curr->right, arr);
19    }
20    static bool compare(TreeNode* a, TreeNode* b) {
21        return a->val < b->val;
22    }
23    void recoverTree(TreeNode* root) {
24        vector<TreeNode*> arr;
25        inorder(root, arr);
26        vector<TreeNode*> tmp = arr;
27        sort(tmp.begin(), tmp.end(), compare);
28        TreeNode* first = nullptr;
29        TreeNode* second = nullptr;
30        for (int i = 0; i < tmp.size(); ++i) {
31            if (!first && tmp.at(i) != arr.at(i)) first = arr.at(i);
32            else if (!second && tmp.at(i) != arr.at(i)) second = arr.at(i);
33        }
34        swap(first->val, second->val);
35    }
36};