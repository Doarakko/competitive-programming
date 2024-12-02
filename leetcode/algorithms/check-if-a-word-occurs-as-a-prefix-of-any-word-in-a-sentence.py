class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        words = sentence.split()
        for i, s in enumerate(words):
            if s[0:len(searchWord)] == searchWord:
                return i + 1

        return -1
