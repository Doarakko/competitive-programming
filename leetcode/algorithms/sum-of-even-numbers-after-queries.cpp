class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &A, vector<vector<int>> &queries)
    {
        int sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                sum += A[i];
            }
        }

        vector<int> B(queries.size());
        for (int i = 0; i < queries.size(); i++)
        {
            if (A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 == 0)
            {
                sum += queries[i][0];
            }
            else if (A[queries[i][1]] % 2 != 0 && queries[i][0] % 2 != 0)
            {
                sum += A[queries[i][1]] + queries[i][0];
            }
            else if (A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 != 0)
            {
                sum -= A[queries[i][1]];
            }

            A[queries[i][1]] += queries[i][0];
            B[i] = sum;
        }
        return B;
    }
};