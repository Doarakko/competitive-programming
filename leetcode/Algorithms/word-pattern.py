class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        lst = str.split()
        
        if len(pattern) != len(lst):
            return False
        
        d = {}
        for i in range(len(pattern)):
            if pattern[i] not in d:
                for j in d:
                    if d[j] == lst[i]:
                        return False
                d[pattern[i]] = lst[i]
            elif lst[i] != d[pattern[i]]:
                return False
            
        return True