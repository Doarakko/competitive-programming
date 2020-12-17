class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        mp = {}
        for i in cpdomains:
            lst = i.split()
            cnt = int(lst[0])
            domains = lst[1].split('.')
            domain = ''
            for j, val in enumerate(reversed(domains)):
                if j == 0:
                    domain = val
                else:
                    domain = val + '.' + domain
                
                if domain in mp:
                    mp[domain] += cnt
                else:
                    mp[domain] = cnt
        
        ans = []
        for i in mp:
            ans.append(str(mp[i]) + ' ' + i)
        
        return ans
        