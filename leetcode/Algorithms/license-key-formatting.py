class Solution:
    def licenseKeyFormatting(self, S: str, K: int) -> str:
        S = S.replace('-', '')
        S = S.upper()
        # reverse
        S = S[::-1]
        ans = ''
        
        for i in range(0, math.ceil(len(S) / K)):
            ans += S[i*K:K+i*K] + '-'
        # reverse
        ans = ans[::-1]
        
        # remove head '-'
        ans = ans[1:]

        return ans
        