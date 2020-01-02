class Solution
{
  public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> v;
        for (int i = left; i <= right; i++)
        {
            string s = to_string(i);
            bool flag = true;
            for (int j = 0; j < s.length() && flag; j++)
            {
                int tmp = s[j] - '0';
                if (tmp == 0)
                {
                    flag = false;
                }
                else if (i % tmp != 0)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};