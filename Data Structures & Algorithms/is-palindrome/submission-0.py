class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join(c for c in s if c.isalnum()).lower()
        r = len(s)-1
        for l in range(len(s)):
            print(s[l], " ", s[r])
            if (s[l]!=s[r]):
                return False
            r -= 1
        return True