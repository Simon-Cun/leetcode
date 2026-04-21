# Last updated: 4/21/2026, 10:53:38 AM
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
9        def dfs(l, r):
10            if not r and not l:
11                return True
12            if not r or not l:
13                return False
14            if r.val != l.val:
15                return False
16            return dfs(l.left, r.right) and dfs(l.right, r.left)
17        return dfs(root.left, root.right)