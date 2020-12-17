class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string s = "";
        if (strs.size() == 0)
        {
            return s;
        }

        int n = strs[0].length();
        for (int i = 1; i < strs.size(); i++)
        {
            n = min(n, strs[i].length());
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[0][i] != strs[j][i])
                {
                    flag = false;
                }
            }
            if (flag)
            {
                s += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return s;
    }

    int min(int a, int b)
    {
        if (a < b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};