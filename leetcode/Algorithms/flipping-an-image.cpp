class Solution
{
  public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        vector<int> v;
        vector<vector<int>> B;
        int x;
        for (int i = 0; i < A.size(); i++)
        {
            v.clear();
            for (int j = 0; j < A[i].size(); j++)
            {
                if (A[i][j] == 1)
                {
                    x = 0;
                }
                else
                {
                    x = 1;
                }
                v.push_back(x);
            }
            reverse(v.begin(), v.end());
            B.push_back(v);
        }
        return B;
    }
};