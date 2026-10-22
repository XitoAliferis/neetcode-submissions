class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left =  0
        right = len(heights)-1
        m = 0
        while (left < right):
            m = max(m, min(heights[left],heights[right])*(right-left))
            if (heights[left] > heights[right]):
                right -= 1
            else:
                left += 1
        return m