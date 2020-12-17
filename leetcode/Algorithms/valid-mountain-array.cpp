class Solution
{
public:
    bool validMountainArray(vector<int> &A)
    {
        if (A.size() < 3)
        {
            return false;
        }

        bool up = true;
        if (A[0] > A[1])
        {
            return false;
        }

        for (int i = 1; i < A.size(); i++)
        {
            // up
            if (up && A[i] > A[i - 1])
            {
                continue;
            }
            // horizontal
            else if (A[i] == A[i - 1])
            {
                return false;
            }
            // top
            else if (up && A[i] < A[i - 1])
            {
                up = false;
            }

            // down to up
            if (!up && A[i] >= A[i - 1])
            {
                return false;
            }
        }
        return !up;
    }
};