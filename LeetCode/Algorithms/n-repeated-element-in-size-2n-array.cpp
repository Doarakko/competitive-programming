class Solution
{
  public:
    int repeatedNTimes(vector<int> &A)
    {
        sort(A.begin(), A.end());
        int pre = A[0];
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] == pre)
            {
                return A[i];
            }
            pre = A[i];
        }
        return -1;
    }
};