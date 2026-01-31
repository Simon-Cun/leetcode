# Last updated: 1/30/2026, 4:35:46 PM
1class Solution:
2    def canJump(self, nums: List[int]) -> bool:
3        curr = 0
4        while nums[curr] < len(nums):
5            if curr + nums[curr] >= len(nums) - 1:
6                return True
7            if nums[curr] == 0:
8                return False
9            temp = curr + 1
10            for i in range(temp, curr + nums[curr] + 1):
11                if i < len(nums) and nums[temp] <= nums[i] + i - temp and nums[i] != 0:
12                    temp = i
13            curr = temp
14            print(curr)
15            
16            
17        return True