class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums = sorted(nums)
        results = []
        a = 0
        while (a < len(nums)-2):
            b,c = a+1, len(nums)-1
            while (b < c):
                if (nums[a] + nums[b] + nums[c] > 0):
                    c -= 1
                elif (nums[a] + nums[b] + nums[c] < 0):
                    b += 1
                else:
                    results.append([nums[a], nums[b], nums[c]])
                    c -= 1
                    b += 1
                    while (nums[b] == nums[b-1] and b < c):
                        b += 1
            a += 1
            while (nums[a] == nums[a-1] and a < len(nums) - 2):
                a += 1
        return results