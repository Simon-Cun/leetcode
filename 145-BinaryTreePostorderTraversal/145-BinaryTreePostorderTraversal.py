# Last updated: 1/14/2026, 5:18:18 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []

        def postorder(curr):
            if not curr:
                return

            postorder(curr.left)
            postorder(curr.right)
            res.append(curr.val)
        
        postorder(root)

        return res