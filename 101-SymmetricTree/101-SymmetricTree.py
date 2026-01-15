# Last updated: 1/14/2026, 5:18:27 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def symmetric(l, r):
            if not l and not r:
                return True
            if not l or not r:
                return False
            if l.val != r.val:
                return False
            
            return symmetric(l.left, r.right) and symmetric(l.right, r.left)

        if not symmetric(root.left, root.right):
            return False
        
        return True