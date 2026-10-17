class Solution:
    def isPalindrome(self, s: str) -> bool:
        ts = "".join(c for c in s if c.isalnum()).lower()
        return ts == ts[::-1]