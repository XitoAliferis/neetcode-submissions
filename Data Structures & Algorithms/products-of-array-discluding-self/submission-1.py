class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = [1]*len(nums)
        
        prefix = 1
        for x in range(len(nums)): #prefix
            output[x] = prefix
            prefix *= nums[x]

        suffix = 1
        for x in reversed(range(len(nums))):
            output[x] *= suffix
            suffix *= nums[x]
            
        return output