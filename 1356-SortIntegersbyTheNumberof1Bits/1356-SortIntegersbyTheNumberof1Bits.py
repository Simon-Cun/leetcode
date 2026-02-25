# Last updated: 2/24/2026, 5:03:07 PM
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
9        arr = []
10        def dfs(curr, s):
11            if not curr:
12                return
13            if not curr.left and not curr.right:
14                arr.append(s + str(curr.val))
15                return
16            dfs(curr.left, s + str(curr.val))
17            dfs(curr.right, s + str(curr.val))
18        dfs(root, "")
19        res = 0
20        for i in arr:
21            res += int(i, 2)
22        return res
23