class Solution
{
  public:
    bool canThreePartsEqualSum(vector<int> &A)
    {
        int a[A.size()];

        // 累積和
        a[0] = A[0];
        for (int i = 1; i < A.size(); i++)
        {
            a[i] = a[i - 1] + A[i];
        }
        if (a[A.size() - 1] % 3 != 0)
        {
            return false;
        }

        int cnt = 1;
        for (int i = 0; i < A.size() - 1; i++)
        {
            if (a[i] == a[A.size() - 1] / 3 * cnt)
            {
                cnt++;
            }
            if (cnt == 3)
            {
                return true;
            }
        }
        return false;
    }
};