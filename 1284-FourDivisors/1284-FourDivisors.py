# Last updated: 1/14/2026, 5:17:52 PM
class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        # function to compute the all divisors of a number
        def find_divisors(n):
            divisors = set() # use a set to exclude any duplicates
            # go until sqrt(n) + 1 since the largest divisors 
            # excluding itself will be the sqrt of that number 
            # like 25 largest divisor is 5
            for i in range(1, int(n**0.5) + 1): 
                # just adds the divisors if the modluo is 0 meaning that i is a divisor
                if n % i == 0: 
                    divisors.add(i)
                    divisors.add(n // i)
                # if we go beyond 4 then this set is not needed since we can't add it to our result
                if len(divisors) > 4:
                    return set()
            return divisors
        
        res = 0
        # loops through all the numbers and adds to res if the length of the returned set is 4
        for i in nums:
            s = find_divisors(i)
            if len(s) == 4:
                res += sum(s)
        
        return res