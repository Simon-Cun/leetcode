# Last updated: 1/14/2026, 5:17:53 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        q = deque([root])
        in_order = []
        
        while q:
            arr = []
            for _ in range(len(q)):
                curr = q.popleft()
                arr.append(curr.val)
                if curr.left:
                    q.append(curr.left)
                if curr.right:
                    q.append(curr.right)
            in_order.append(arr)

        sums = []
        for i in in_order:
            sums.append(sum(i))

        max_sum = 0
        for i in range(len(sums)):
            if sums[max_sum] < sums[i]:
                max_sum = i
        
        return max_sum + 1
    
    # time complexity is o(n) because its based on the number of nodes in the tree
                
            