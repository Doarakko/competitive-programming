class Solution
{
  public:
    int peakIndexInMountainArray(vector<int> &A)
    {
        int max = -1, idx = -1;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] > max)
            {
                idx = i;
                max = A[i];
            }
        }
        return idx;
    }
};