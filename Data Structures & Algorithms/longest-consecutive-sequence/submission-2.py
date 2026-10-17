class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numsSet = set(nums)
        longest = 0
        curr = 0
        for n in nums:
            if n-1 not in numsSet:
                curr = 0
                while (n + curr) in numsSet:
                    curr +=1
                longest = max(longest, curr)
        return longest