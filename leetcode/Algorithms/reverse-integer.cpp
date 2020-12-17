class Solution
{
public:
    int reverse(int x)
    {
        int n = 0;
        string s1 = to_string(x);

        for (int i = s1.length() - 1, j = 0; i >= 0; i--, j++)
        {
            if (s1[i] != '0')
            {
                n = j;
                break;
            }
        }
        // remove zero
        string s2 = s1.substr(0, s1.length() - n);

        // reverse
        for (int i = 0; i < s2.length() / 2; i++)
        {
            swap(s2[i], s2[s2.length() - i - 1]);
        }
        // 321- to -321
        if (s2[s2.length() - 1] == '-')
        {
            s2 = s2[s2.length() - 1] + s2.substr(0, s2.length() - 1);
        }

        // overflow
        if (stod(s2) > pow(2, 31) - 1 || stod(s2) < -pow(2, 31))
        {
            return 0;
        }
        int ans = stoi(s2);
        return ans;
    }
};