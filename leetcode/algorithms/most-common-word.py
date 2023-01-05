class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        paragraph = paragraph.lower()
        for i in range(len(paragraph)):
            if(not (paragraph[i] >= 'a' and paragraph[i] <= 'z')):
                paragraph = paragraph.replace(paragraph[i], ' ')        
        
        d = {} 
        for i in paragraph.split():
            if(i not in d):
                d[i] = 1
            else:
                d[i] += 1
        
        max = -1
        key = ''
        for i in d:
            if i not in banned and d[i] > max:
                max = d[i]
                key = i
                
        return key
        