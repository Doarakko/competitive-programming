class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        ans = ''
        
        for i, word in enumerate(s):
            ans += word[::-1]
            
            if i != len(s) - 1:
                ans += ' '
        
        return ans