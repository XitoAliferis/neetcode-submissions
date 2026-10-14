class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqMap = {}
        for x in nums:
            if x in freqMap:
                freqMap[x] += 1
            else:
                freqMap[x] = 1
        
        return sorted(freqMap, key=freqMap.get, reverse=True)[:k]
