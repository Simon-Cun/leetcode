# Last updated: 4/21/2026, 10:30:31 AM
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def recoverTree(self, root: Optional[TreeNode]) -> None:
9        """
10        Do not return anything, modify root in-place instead.
11        """
12        arr = []
13        def dfs(curr):
14            if not curr:
15                return
16            dfs(curr.left)
17            arr.append(curr)
18            dfs(curr.right)
19        dfs(root)
20        first, second = None, None
21        for i in range(1, len(arr)):
22            if arr[i - 1].val > arr[i].val:
23                if first is None:
24                    first = arr[i - 1]
25                second = arr[i]
26        first.val, second.val = second.val, first.val