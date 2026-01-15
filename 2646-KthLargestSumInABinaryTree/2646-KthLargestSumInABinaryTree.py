# Last updated: 1/14/2026, 5:17:41 PM
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        q = deque([root])
        heap = []
        while q:
            curr_sum = 0
            for _ in range(len(q)):
                curr = q.popleft()
                curr_sum += curr.val
                if curr.left:
                    q.append(curr.left)
                if curr.right:
                    q.append(curr.right)
            heapq.heappush(heap, curr_sum)
            if len(heap) > k:
                heapq.heappop(heap)
            
        if len(heap) != k:
            return -1
        else:
            return heap[0]

#Time Complexity o(n)
