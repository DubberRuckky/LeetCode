class Solution:
    def romanToInt(self, s: str) -> int:
        romanNum = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        value = 0

        for i in range(len(s)):
            if i + 1 < len(s) and romanNum[s[i]] < romanNum[s[i + 1]]:
                value -= romanNum[s[i]]
            
            else:
                value += romanNum[s[i]]
                
        return value