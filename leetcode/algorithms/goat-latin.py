class Solution:
    def toGoatLatin(self, S: str) -> str:
        ans = ''
        for i, word in enumerate(S.split()):
            if('aiueoAIUEO'.find(word[0]) != -1):
                word += 'ma'
            else:
                word = word[1:] + word[0] + 'ma'
            word += 'a' * (i + 1)
            ans += word + ' '
        ans = ans.rstrip()
        return ans
