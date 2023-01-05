class Solution
{
public:
    string reverseOnlyLetters(string S)
    {
        int l, r;
        l = 0;
        r = S.length() - 1;
        for (; l < r; l++, r--)
        {
            while (!((S[l] >= 'a' && S[l] <= 'z') || (S[l] >= 'A' && S[l] <= 'Z')))
            {
                l++;
            }
            while (!((S[r] >= 'a' && S[r] <= 'z') || (S[r] >= 'A' && S[r] <= 'Z')))
            {
                r--;
            }
            if (l < r)
            {
                swap(S[l], S[r]);
            }
            //cout << S << endl;
        }
        return S;
    }
};