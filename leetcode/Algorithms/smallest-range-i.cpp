class Solution
{
public:
    int smallestRangeI(vector<int> &A, int K)
    {
        int min = INT_MAX, max = -1;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
            if (A[i] < min)
            {
                min = A[i];
            }
        }

        if (K == 0)
        {
            return max - min;
        }

        if (min + K >= max - K)
        {
            return 0;
        }

        return (max - K) - (min + K);
    }
};