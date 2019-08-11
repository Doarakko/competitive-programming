class Solution:    
    def dayOfYear(self, date: str) -> int:
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        
        year = int(date[0:4])
        month = int(date[5:7])
        day = int(date[8:10])
        print(year, month, day)
        cnt = day
        
        if month == 1:
            return cnt

        for i in range(0, month - 1):
            cnt += days[i]
        
        if month >= 3 and ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0):
            cnt += 1
        
        return cnt
