class Solution
{
  public:
    vector<int> diStringMatch(string S)
    {
        vector<int> v(S.length() + 1);
        int inc = 0, dec = S.length();
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == 'I')
            {
                v[i] = inc++;
            }
            else
            {
                v[i] = dec--;
            }
        }
        if (S[S.length()] == 'I')
        {
            v[S.length()] = inc;
        }
        else
        {
            v[S.length()] = dec;
        }

        return v;
    }
};