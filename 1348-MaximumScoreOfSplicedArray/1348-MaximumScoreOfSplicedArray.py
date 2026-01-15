# Last updated: 1/14/2026, 5:17:51 PM
class Solution:
    def maximumsSplicedArray(self, nums1: List[int], nums2: List[int]) -> int:
        sum1 = sum(nums1)
        sum2 = sum(nums2)

        curr_sum1 = 0
        max_sum1 = 0
        curr_sum2 = 0
        max_sum2 = 0

        for i, j in zip(nums1, nums2):
            curr_sum1 = max(curr_sum1, 0)
            curr_sum2 = max(curr_sum2, 0)

            curr_sum1 += j - i
            curr_sum2 += i - j

            max_sum1 = max(max_sum1, curr_sum1)
            max_sum2 = max(max_sum2, curr_sum2)
        
        return max(sum1 + max_sum1, sum2 + max_sum2)