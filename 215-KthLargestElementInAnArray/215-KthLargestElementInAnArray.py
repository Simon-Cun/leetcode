# Last updated: 1/14/2026, 5:18:10 PM
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        neg_list = [-i for i in nums]
        heapq.heapify(neg_list)
        for _ in range(k):
            res = heapq.heappop(neg_list)
        return -res