class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        parenthOrder = { ")" : "(", "]" : "[", "}" : "{" }
        for c in s:
            if c in parenthOrder:
                if stack and stack[-1] == parenthOrder[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return True if not stack else False