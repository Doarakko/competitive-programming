class Solution
{
  public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        vector<int> v1, v2;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                v1.push_back(A[i]);
            }
            else
            {
                v2.push_back(A[i]);
            }
        }
        copy(v2.begin(), v2.end(), std::back_inserter(v1));
        return v1;
    }
};