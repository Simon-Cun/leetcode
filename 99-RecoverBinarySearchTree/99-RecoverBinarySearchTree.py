# Last updated: 4/21/2026, 10:49:44 AM
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
9        def dfs(curr1, curr2):
10            if not curr1 and not curr2:
11                return True
12            if not curr1 or not curr2:
13                return False
14            if curr1.val != curr2.val:
15                return False
16            return dfs(curr1.left, curr2.left) and dfs(curr1.right, curr2.right)
17        return dfs(p, q)
18            