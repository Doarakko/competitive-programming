class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> st;
        for (int i = 0; i < S.length(); i++)
        {
            if (!st.empty() && st.top() == S[i])
            {
                st.pop();
            }
            else
            {
                st.push(S[i]);
            }
        }
        string ans = "";
        for (int i = 0; !st.empty(); i++)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

class Solution
{
public:
    string removeDuplicates(string S)
    {
        string s = "";
        int cnt = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (s[s.length() - 1] == S[i])
            {
                s.pop_back();
            }
            else
            {
                s += S[i];
            }
        }
        return s;
    }
};