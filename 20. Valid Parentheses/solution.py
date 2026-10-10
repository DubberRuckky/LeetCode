class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket = {')' : '(', '}' : '{', ']' : '['}
        for i in s:
            if i in ('(', '{', '['):
                stack.append(i)
            
            elif i in (')', '}', ']') and bracket[i] != stack.pop() if stack else '#':
                return False
            
        return len(stack) == 0