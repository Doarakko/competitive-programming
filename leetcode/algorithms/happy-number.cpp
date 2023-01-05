class Solution
{
public:
    bool isHappy(int n)
    {
        string s = to_string(n);
        set<int> st;
        int pre_size;
        while (1)
        {
            n = 0;
            pre_size = st.size();
            for (int i = 0; i < s.length(); i++)
            {
                n += pow((int)(s[i] - '0'), 2);
            }
            s = to_string(n);
            st.insert(n);

            if (st.size() == pre_size)
            {
                return false;
            }
            else if (n == 1)
            {
                return true;
            }
        }
    }
};
