class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if s == "":
            return 0
        
        l = s.split();
        if len(l) == 0:
            return 0

        return len(l[len(l)-1])