class Solution
{
public:
    bool rotateString(string A, string B)
    {
        if (A == B)
        {
            return true;
        }
        for (int i = 1; i < A.length(); i++)
        {
            if (A.substr(0, A.length() - i) == B.substr(i, B.length() - i) && A.substr(A.length() - i, i) == B.substr(0, i))
            {
                return true;
            }
        }
        return false;
    }
};