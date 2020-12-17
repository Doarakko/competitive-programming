class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        lst = text.split()
        ans = []
        for i, word in enumerate(lst):
            if i + 2 > len(lst) - 1:
                break
            
            if lst[i] == first and lst[i+1] == second:
                ans.append(lst[i+2])
        
        return ans