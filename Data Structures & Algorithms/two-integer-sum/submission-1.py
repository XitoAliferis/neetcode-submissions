class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        idx_map = {}
        for x in range(len(nums)):
            search = target - nums[x]
            if search in idx_map:
                return [idx_map[search], x]
            else:
                idx_map[nums[x]] = x
        return []