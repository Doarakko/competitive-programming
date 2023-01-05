class Solution
{
public:
    bool buddyStrings(string A, string B)
    {
        if (A.size() != B.size())
        {
            return false;
        }

        vector<int> v;
        set<char> st;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] != B[i])
            {
                v.push_back(i);
            }
            st.insert(A[i]);
        }

        if (v.size() == 0)
        {
            return st.size() != A.size();
        }
        else if (v.size() != 2)
        {
            return false;
        }

        return A[v[0]] == B[v[1]] && A[v[1]] == B[v[0]];
    }
};