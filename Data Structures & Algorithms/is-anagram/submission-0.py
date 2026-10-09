class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_arr = [0 for x in range(26)]
        t_arr = [0 for x in range(26)]
        if (len(s) != len(t)):
            return False
        for x in range(len(s)):
            s_arr[ord(s[x])-ord('a')] +=1
            t_arr[ord(t[x])-ord('a')] +=1
        if (s_arr == t_arr):
            return True
        return False