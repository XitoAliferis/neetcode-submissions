class Solution:

    def encode(self, strs: List[str]) -> str:
        key = 10
        result = ""
        for x in range(len(strs)):
            word = ""
            for y in range(len(strs[x])):
                word += chr(ord(strs[x][y])+key)
            result+=word+'#'
        return result
    def decode(self, s: str) -> List[str]:
        key = 10
        split = s.split('#')[:len(s.split('#'))-1]
        result = ['']*len(split)
        for x in range(len(split)):
            for y in range(len(split[x])):
                result[x] += chr(ord(split[x][y])-key)
        print(result)

        return result