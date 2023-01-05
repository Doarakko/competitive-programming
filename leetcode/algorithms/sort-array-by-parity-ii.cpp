class Solution
{
  public:
    vector<int> sortArrayByParityII(vector<int> &A)
    {
        vector<int> a, b;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                a.push_back(A[i]);
            }
            else
            {
                b.push_back(A[i]);
            }
        }
        A.clear();
        int x = 0, y = 0;
        for (int i = 0; i < a.size() + b.size(); i++)
        {
            if (i % 2 == 0)
            {
                A.push_back(a[x]);
                x++;
            }
            else
            {
                A.push_back(b[y]);
                y++;
            }
        }
        return A;
    }
};