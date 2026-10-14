class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        count = [0]*26
        final_map = {}
        #(map, array)
        for x in strs:
            for y in range(len(x)):
                count[ord(x[y])-ord('a')] += 1
            key = tuple(count)
            if key in final_map:
                final_map[key].append(x)
            else:
                final_map[key] = [x]
            count = [0]*26
        
        return list(final_map.values())