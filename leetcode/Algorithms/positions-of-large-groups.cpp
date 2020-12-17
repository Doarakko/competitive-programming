class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string S)
    {
        vector<vector<int>> ans;
        vector<int> v(2);

        int begin = 0;
        for (int i = 1; i < S.length(); i++)
        {
            if (S[i] != S[begin])
            {
                if (i - begin >= 3)
                {
                    v[0] = begin;
                    v[1] = i - 1;
                    ans.push_back(v);
                }
                begin = i;
            }
            else if (i == S.length() - 1 && i - begin + 1 >= 3)
            {
                v[0] = begin;
                v[1] = i;
                ans.push_back(v);
            }
        }

        return ans;
    }
};