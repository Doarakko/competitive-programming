class Solution
{
public:
    vector<int> numberOfLines(vector<int> &widths, string S)
    {
        int sum = 0;
        vector<int> v = {1, 0};
        for (int i = 0; i < S.length(); i++)
        {
            if (sum + widths[S[i] - 'a'] <= 100)
            {
                sum += widths[S[i] - 'a'];
            }
            else
            {
                sum = widths[S[i] - 'a'];
                v[0]++;
            }

            if (i == S.length() - 1)
            {
                v[1] = sum;
            }
        }
        return v;
    }
};