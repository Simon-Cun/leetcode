// Last updated: 11/10/2026, 4:17:43 PM
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
14    void inorder(TreeNode* curr, vector<int>& ret) {
15        if (!curr) return;
16        inorder(curr->left, ret);
17        ret.push_back(curr->val);
18        inorder(curr->right, ret);
19    }
20    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
21        vector<int> one;
22        vector<int> two;
23        inorder(root1, one);
24        inorder(root2, two);
25        int l1 = 0;
26        int l2 = 0;
27        int n1 = one.size();
28        int n2 = two.size();
29        vector<int> ret;
30        while (l1 < n1 || l2 < n2) {
31            int toPush = 0;
32            if (l1 < n1 && l2 >= n2) {
33                toPush = one.at(l1);
34                ++l1;
35            } else if (l2 < n2 && l1 >= n1) {
36                toPush = two.at(l2);
37                ++l2;
38            } else {
39                if (one.at(l1) < two.at(l2)) {
40                    toPush = one.at(l1);
41                    ++l1;
42                } else {
43                    toPush = two.at(l2);
44                    ++l2;
45                }
46            }
47            ret.push_back(toPush);
48        }
49        return ret;
50    }
51};